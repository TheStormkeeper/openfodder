/*
 *  Cannon Fodder
 *  ------------------------
 *
 *  Copyright (C) 2008-2015 Robert Crossfield <robcrossfield@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#include "stdafx.hpp"
#include "Amiga/dernc.hpp"

cResource_Amiga_File::cResource_Amiga_File( std::string pDataPath  ) : cResources(pDataPath) {

}

cResource_Amiga_File::~cResource_Amiga_File() {

}

uint8* cResource_Amiga_File::fileGet( std::string pFilename, size_t &pFileSize ) {

	uint8* File = cResources::fileGet( pFilename, pFileSize );
	if (!File) {
		//std::cout << "File " << pFilename << " Not Found!\n";
		//exit( 1 );
		return 0;
	}
	uint32 Header = readBEDWord( File );

	if (Header != 'RNC\01')
		return File;

	uint32 Size = readBEDWord( File + 4 );

	uint8* Unpacked = new uint8[Size];

	pFileSize = rnc_unpack (File, Unpacked);

	delete[] File;

	return Unpacked;
}
