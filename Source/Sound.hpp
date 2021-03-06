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

class cSound : public cSingleton<cSound> {

	virtual bool		devicePrepare() = 0;

	public:

						cSound();
	virtual				~cSound() { };

	virtual void		Sound_Play( int16 pTileset, int16 pSoundEffect, int16 pVolume ) = 0;
	virtual void		Sound_Stop() { }

	virtual void		Music_Play( int16 pTrack ) = 0;
	virtual void		Music_Stop() = 0;
};
