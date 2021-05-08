;Created by Cold Brew Gaming
;Modified for Redundancy by Miku Mitsuki
;GUI added by Miku Mitsuki
;New and Improved version can be found here: https://pastebin.com/X5ifUr5c

IfWinNotExist ahk_class UnityWndClass

	{
		Gui, -SysMenu +0x400000 +owner -Caption +AlwaysOnTop
		Gui, Font, S18 CWhite Bold, segoe ui
		Gui, Add, Hotkey, x486 y-53 w-330 h100
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S10 C6699ff, segoe ui
		Gui, Add, Text, x-4 y27 w280 h20 +Center, Please load RAID before running script.
		;Gui, Add, Text, x-4 y57 w280 h40 +Center, 
		Gui, Font, S12 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y-3 w280 h20 +Center, Raid Auto-Scripter
		Gui, Font, S18 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y17 w280 h10 
		Gui, Font, S6 Cffc700, segoe ui
		Gui, Add, Text, x-4 y97 w280 h10 +Right, © Vertex Systems
		Gui, Show
		sleep 3000
		Gui, Destroy
		ExitApp
	}

#MaxThreadsPerHotkey 2
SetTitleMatchMode, 2

		Gui, -SysMenu +0x400000 +owner -Caption +AlwaysOnTop
		Gui, Font, S18 CWhite Bold, segoe ui
		Gui, Add, Hotkey, x486 y-53 w-330 h100
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S10 C6699ff, segoe ui
		Gui, Add, Text, x-4 y27 w280 h20 +Center, RAID.AHK Has been loaded.
		Gui, Add, Text, x-4 y57 w280 h40 +Center, Push F5 to Start/Stop
		Gui, Font, S12 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y-3 w280 h20 +Center, Raid Auto-Scripter
		Gui, Font, S18 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y17 w280 h10
		Gui, Font, S6 Cffc700, segoe ui
		Gui, Add, Text, x-4 y97 w280 h10 +Right, © Vertex Systems
		Gui, Show
		sleep 3000
		Gui, Destroy

F5::
{
Toggle := !Toggle
Loop {
  IfWinNotExist ahk_class UnityWndClass
	{
		Gui, -SysMenu +0x400000 +owner -Caption +AlwaysOnTop
		Gui, Font, S18 CWhite Bold, segoe ui
		Gui, Add, Hotkey, x486 y-53 w-330 h100
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S10 C6699ff, segoe ui
		Gui, Add, Text, x-4 y27 w280 h20 +Center, RAID is no longer running.
		Gui, Add, Text, x-4 y57 w280 h40 +Center, Script has been Terminated.
		Gui, Font, S12 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y-3 w280 h20 +Center, Raid Auto-Scripter
		Gui, Font, S18 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y17 w280 h10
		Gui, Font, S6 Cffc700, segoe ui
		Gui, Add, Text, x-4 y97 w280 h10 +Right, © Vertex Systems
		Gui, Show
		sleep 3000
		Gui, Destroy
		ExitApp
	}
	
if not Toggle
	{
		Gui, -SysMenu +0x400000 +owner -Caption +AlwaysOnTop
		Gui, Font, S18 CWhite Bold, segoe ui
		Gui, Add, Hotkey, x486 y-53 w-330 h100 
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S12 CWhite Bold, segoe ui
		Gui, Font, S10 C6699ff, segoe ui
		Gui, Add, Text, x-4 y27 w280 h20 +Center, RAID.AHK Unloaded.
		Gui, Add, Text, x-4 y57 w280 h40 +Center, Thanks for Playing.
		Gui, Font, S12 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y-3 w280 h20 +Center, Raid Auto-Scripter
		Gui, Font, S18 Cwhite Bold, segoe ui
		Gui, Add, Text, x-4 y17 w280 h10
		Gui, Font, S6 Cffc700, segoe ui
		Gui, Add, Text, x-4 y97 w280 h10 +Right, © Vertex Systems
		Gui, Show
		sleep 3000
		Gui, Destroy
		ExitApp
	}
	
	WinGetActiveTitle, Title
	WinActivate, ahk_class UnityWndClass
	ControlSend, , r, ahk_class UnityWndClass
	WinActivate, %Title%
	Sleep 10000
	}
}
Return