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

enum eTileTypes {
	eTileTypes_Jungle	= 0,
	eTileTypes_Desert	= 1,
	eTileTypes_Ice		= 2,
	eTileTypes_Moors	= 3,
	eTileTypes_Int		= 4,
	eTileTypes_Hid		= 5,
	eTileTypes_AFX		= 6,
};

enum eTerrainType {
	eTerrainType_Rocky			= 1,
	eTerrainType_Rocky2			= 2,
	eTerrainType_BounceOff		= 3,
	eTerrainType_QuickSand		= 4,
	eTerrainType_WaterEdge		= 5,
	eTerrainType_Water			= 6,
	eTerrainType_Snow			= 7,
	eTerrainType_QuickSandEdge	= 8,
	eTerrainType_Drop			= 9,
	eTerrainType_Drop2			= 0x0A,
	eTerrainType_Sink			= 0x0B,
	eTerrainType_C				= 0x0C,
	eTerrainType_D				= 0x0D,
	eTerrainType_Jump			= 0x0E
};

extern const int8 mTiles_NotFlyable[];
extern const int8 mTiles_NotDriveable[];
extern const int8 mTiles_NotWalkable[];

extern const int16 mTiles_Indestructible_Jungle[];
extern const int16 mTiles_Indestructible_Desert[];
extern const int16 mTiles_Indestructible_Ice[];
extern const int16 mTiles_Indestructible_Moors[];
extern const int16 mTiles_Indestructible_Internal[];

extern const int16* mTiles_Indestructible[];

extern const std::string mTileType_Names[];
