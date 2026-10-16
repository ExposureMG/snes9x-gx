/****************************************************************************
 * Snes9x Nintendo Wii/Gamecube Port
 *
 * Tantric 2008-2010
 *
 * cheatmgr.cpp
 *
 * Cheat handling
 ***************************************************************************/


#include "port.h"
#include "cheats.h"

#include "snes9xgx.h"
#include "fileop.h"
#include "filebrowser.h"

extern SCheatData Cheat;

/****************************************************************************
 * LoadCheatFile
 *
 * Loads cheat file from save buffer
 * Custom version of S9xLoadCheatFile()
 ***************************************************************************/

static bool LoadCheatFile (int length)
{
	uint8 data [28];
	char name [21];
	char code [10];
	uint32 address;
	int offset = 0;

	while (offset < length)
	{
		if(Cheat.g.size() >= MAX_CHEATS || (length - offset) < 28)
			break;

		memcpy (data, savebuffer+offset, 28);
		offset += 28;

		address = data [2] | (data [3] << 8) | (data [4] << 16);
		memcpy (name, &data[8], 20);
		name[20] = 0;

		// cheats always off - groups are added disabled
		snprintf (code, sizeof(code), "%x=%x", address, data [1]);
		S9xAddCheatGroup (name, code);
	}
	return true;
}

/****************************************************************************
 * SetupCheats
 *
 * Erases any prexisting cheats, loads cheats from a cheat file
 * Called when a ROM is first loaded
 ***************************************************************************/
void
WiiSetupCheats()
{
	S9xDeleteCheats();

	char filepath[1024];
	int offset = 0;

	if(!MakeFilePath(filepath, FILE_CHEAT))
		return;

	AllocSaveBuffer();

	offset = LoadFile(filepath, SILENT);

	// load cheat file if present
	if(offset > 0)
		LoadCheatFile (offset);

	FreeSaveBuffer ();
}
