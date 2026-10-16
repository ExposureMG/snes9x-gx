-----------------------------------------------------------------------------
:::::::::::::::-::::::::::::   .______   :::::::::::::::::::   _   ::::::::::
|        _________            /   ___-/           -------.    (_)'\ /     `-|
-       /______ -   ---__---./   /___ _________  /  ---  /    __| / \      --
-      _______\ \ /  ___  //  /____//\_____ -  /---/   / ___    ---         -
|     -________/ /  / /  //  /__    _______\ \    /   /  \  \  / /        .||
::::::::::::::::/   /::--/_______\::.________/::::/   /:-::\   _  \::::::-:::
:::::::-:::::::/___\:::::::::::::::::::::::::::::/   /::::/__/   \--::-::::::
-:::::::::::::::::-:::::::::::::::-::::-:::::::::\--/::::::::::::::::::-:::::
-----------------------------------------------------------------------------

ח----------- ------------------------------ --------------------------------
|0O--o-                    Snes9x GX LibXenon                         -o--O0|
|              https://github.com/LibXenonProject/snes9x-gx                 |
|    (Under GPL License)        |
`------- ---------------- --------------- -------------------- -------------'

This is an unofficial port of [Snes9x GX](https://github.com/dborth/snes9xgx)
to Xbox 360 LibXenon.

Snes9x GX is a Super Nintendo- / Super Famicom emulator for the Nintendo Wii.
Snes9x GX is a port of Snes9x (http://www.snes9x.com).

----------- - -------------- --------- - -------------- --------- - ---------
|                    FEATURES  |
----------- - -------------- --------- - -------------- --------- - ---------

* Based on Snes9GX 4.2.9 and Snes9x 1.61
* SNES Superscope, Mouse, Justifier support
* Cheat support
* Auto Load/Save Game Snapshots and SRAM
* Custom controller configurations
* USB, DVD, Zip, and 7z support
* Autodetect PAL/NTSC, 16:9 widescreen support
* Original/filtered/unfiltered video modes
* Turbo Mode - up to 2x the normal speed
* Zoom option to zoom in/out

----------- - -------------- --------- - -------------- --------- - ---------
|               INITIAL SETUP  |
----------- - -------------- --------- - -------------- --------- - ---------

The first time you run Snes9x GX it will create a new "settings.xml" file on
the storage device which stores the configuration of the emulator. So when 
you run Snes9x GX it will automatically detect your storage medium and will
bring you to the ROM selection screen. If you want to run a game with the 
default settings then just highlight the game and press "A" on it and it will
load. However, you can configure Snes9x GX to your liking.

----------- - -------------- --------- - -------------- --------- - ---------
|               CONFIGURATION  |
----------- - -------------- --------- - -------------- --------- - ---------

To configure Snes9x GX press "A" on the "Settings" box. This will brings up 
the "Settings" screen where you can configure the Button Mappings, Video, 
Saving, Menu and Network. You can also restore the settings to their initial 
values by clicking on the "Reset Settings" and you can return to the ROM 
selection screen by clicking on "Go Back".

---[ Button Mappings ]---
	
Once in the Button Mappings settings menu you'll have the option to pick to
configure the SNES Controller, Super Scope, SNES Mouse and the Justifier.
Once you select a controller to configure you will be presented with which
input device you would like to configure. To set the button simply click on
the input device you wish to use and then pick the button you wish to map. 
After you select a button to configure Snes9x GX will prompt you to press
the button you wish to assign to the button you've selected. Below is a list
of each controller followed by the input devices and the default values for
those devices.
	
	[ SNES Controller ]
		
		- GameCube Controller
			
			A = A
			B = B
			X = X
			Y = Y
			L = L
			R = R
			START = START
			SELECT = Z
			UP = UP
			DOWN = DOWN
			LEFT = LEFT
			RIGHT = RIGHT
			
		- Wiimote
		
			A = B
			B = 2
			X = 1
			Y = A
			START = PLUS
			SELECT = MINUS
			UP = UP
			DOWN = DOWN
			LEFT = LEFT
			RIGHT = RIGHT
		
		- Classic Controller

			A = A
			B = B
			X = X
			Y = Y
			L = L
			R = R
			UP = UP
			DOWN = DOWN
			LEFT = LEFT
			RIGHT = RIGHT

		-	Wiimote Nunchuck + Wiimote
		
			A = A
			B = B
			X = C
			Y = Z
			L = 2
			R = 1
			START = PLUS
			SELECT = MINUS
			UP = UP
			DOWN = DOWN
			LEFT = LEFT
			RIGHT = RIGHT
		
	[ Super Scope ]

		- GameCube Controller

			FIRE = A
			AIM OFFSCREEN = B
			CURSOR = Z
			TURBO ON = Y
			TURBO OFF = X
			PAUSE = START

		- Wiimote
		
			FIRE = B
			AIM OFFSCREEN = A
			CURSOR = MINUS
			TURBO ON = UP
			TURBO OFF = DOWN
			PAUSE = PLUS

	[ SNES Mouse ]
	
		- GameCube Controller
		
			LEFT BUTTON = A
			RIGHT BUTTON = B
		
		- Wiimote
		
			LEFT BUTTON = A
			RIGHT BUTTON = B
			
	[ Justifier ]
	
		- GameCube Controller
		
			FIRE = B
			AIM OFFSCREEN = A
			START = START
		
		- Wiimote

			FIRE = B
			AIM OFFSCREEN = A
			START = PLUS
		
---[ VIDEO ]---

The Video settings screen will allow you to configure various video settings
including the Rendering method, Scaling, Filtering, Screen Zoom and Screen	
Position. You can toggle the options for the first three selections by 
clicking on them. To make the Filtering option you select you must enable
Filtering under the Rendering setting.

- Rendering - Unfiltered
            - Original
            - Filtered
          
- Scaling 	- Default
				  	- 16:9 Correction

- Filtering - None
				  	- hq2x
					  - hq2x Soft
					  - hq2x Bold
					
Screen Zoom will bring up a menu where you can adjust the Zoom level by using
the left and right arrows that you can click on. The default setting is 100%.

The Screen Position option will bring up a screen with four arrows that 
allows you to move the position of the output. You'll only need to use this 
option if the screen is not centered. Combining this with the Zoom and
Scaling you should be able to get a proper display on your television.

---[ SAVING & LOADING ]---

From this setup option you can configure the way Snes9x GX loads and saves.
Your options are Load Method, Load Folder, Save Method, Save Folder, Auto
Load and Auto Save. Clicking on all of the options except the folders will
let you toggle through their settings. Clicking on the folder options will
bring up a text box where you can enter in the folder you wish to use for
your save data. Snes9x GX has two types of saves - one is the SRAM which is
the save game data (this is only applicable if the game you're playing 
supports saving) and the other is Snapshots which are real time saves. Real
time saves allow you to save your game in it's current state and resume it
at a later time.

	- Load Method -	SD, USB, DVD, Network and Auto
	
	- Save Method - SD, USB, Network and Auto

	- Auto Load - SRAM, Snapshot and Off

	- Auto Save - SRAM, Snapshot and Off

---[ MENU ]---

This settings screen will allow you to customize a few aspects on how the 
Menu works including the Exit Action, Wiimote Orientation, Music Volume and
the Sound Effects Volume. The Exit Action can be set to "Return to Loader",
"Return to Wii Menu" and "Power off Wii". The Wiimote Orientation can be set
to Vertical or Horizontal and then you can increase and decrease the Music
and Sound Effects Volume.

---[ NETWORK ]---

If you're going to be using your Network (LAN) to load and/or save from you
will need to enter in the SMB share settings you've setup on your computer
via this settings menu. You will need to enter in the SMB Share IP, Share
Name, Share Username and Share Password. If you do not have a password on
your SMB share then set the SMB Share Password to "0".

----------- - -------------- --------- - -------------- --------- - ---------
|                FILE BROWSER  |
----------- - -------------- --------- - -------------- --------- - ---------

The File Browser will automatically load when you start the emulator and it
will automatically list the contents of the "\snes9xgx\roms\" directory on
your SD card. Like mentioned above in the Configuration -> Saving & Loading
you can specifically a different directory to load from. To launch a game 
(the game can either be uncompressed or inside a ZIP archive) simply click 
on it and it will load. You may also change the directory you're in by 
clicking on "Up One Level".

----------- - -------------- --------- - -------------- --------- - ---------
|                    GAMEPLAY  |
----------- - -------------- --------- - -------------- --------- - ---------

Once you load a game you can access another option menu by pressing the 
"Home" button. This will bring up the Save, Load, Reset, Controller and 
Cheats options. From this menu you can also return to the File Browser by
selecting "Main Menu". To leave the menu and resume game play select "Close".

The Save option will allow you to save either your SRAM or a Snapshot. Once
you've selected Save two options will appear named "New SRAM" and "New 
Snapshot". Clicking on these will create a new save. Once you have a save
you can save over it by selecting it instead of a "New" option. The Load
option will allow you to load your saved SRAM or Snapshot. Reset will reset
the game. If you pick Controller you can toggle between which controller you
wish to use to control your game with. The last option, Cheats, will allow you
to toggle your cheat codes (see below). 

----------- - -------------- --------- - -------------- --------- - ---------
|CHEATS  |
----------- - -------------- --------- - -------------- --------- - ---------

Cheats are loaded from the "\snes9xgx\cheats" directory and must be in the
SNES9X .CHT file format. They also must be named the same name as the game
you're playing with the .cht extentsion. An example would be if you have a 
ROM called "Super Mario World.smc" you would need to name your .cht file to
"Super Mario World.cht". You can find a link to a massive collection of Super
NES cheat codes in the Links section (below).

----------- - -------------- --------- - -------------- --------- - ---------
|                  TURBO MODE  |
----------- - -------------- --------- - -------------- --------- - ---------

TurboMode increases the playback speed of the game by about 2x. To use 
TurboMode simply press the c-stick (yellow control stick) to the right and 
hold it right as long as you want playback to be double-speed. Release the 
c-stick when you want normal playback speed to resume.

----------- - -------------- --------- - -------------- --------- - ---------
|IMPORTING AND EXPORTING SRAM  |
----------- - -------------- --------- - -------------- --------- - ---------

Snes9x GX now includes the ability to load SRAM from Snes9x on other
platforms (Mac/PC/Linux/etc) and to save back to those platforms. 

To load a SRAM file on the Wii or Gamecube from another platform, ensure the
name of the SRM file matches the filename of the ROM (except with an SRM 
extension).

To use a Wii/GameCube SRAM file on another platform just do the opposite: 
copy the saved SRAM file to the other platform. You may have to rename the 
file to be what that version of snes9x expects it to be.

----------- - -------------- --------- - -------------- --------- - ---------
|                     CREDITS  |
----------- - -------------- --------- - -------------- --------- - ---------

Coding & menu design	Tantric
Additional coding		michniewski
Menu artwork			the3seashells
Menu sound				Peter de Man

----------------------------------------------
Snes9x GX GameCube		SoftDev, crunchy2, 
						eke-eke, others

Snes9x					Snes9x Team
libogc/devkitPPC		shagkur & wintermute
FreeTypeGX				Armin Tamzarian