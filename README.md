# ERDBG - Goldhen Plugin for Playstation4

## Versions supported

- Application Version:1.00.0
- Application Version:1.03.2
- Application Version:1.05.0
- Application Version:1.06.0
- Application Version:1.07.0
- Application Version:1.08.0
- Application Version:1.08.1
- Application Version:1.09.0

## Releases supported

#### Elden Ring Network Test

- CUSA18880 America

#### Elden Ring Retail

- CUSA18581 Japan
- CUSA18723 Europe
- CUSA28527 Australia
- CUSA28863 America

## Features

- Modifies Elden Ring a FromSoftware game before boot.
- Completely unlocks landmarks and borders on the map.
- Completely unlocks all sites of graces from the very start.
- Activates a way to enable the debug camera with combo.
- Activates a way to pause cutscenes from the gamepad.
- Battle state has been modified allowing some fun stuff.
- Activates TopMenuDebug in the options menu.
- Additionally framepacing issues where fixed.
- Redirected a register to grant infinite runes.

## Overworld debug camera

In order to activate the debug camera you have to press\
down left joystick while also pressing the cross button.

This way it will detach camera from the character and\
freeze everything at place. While using debug camera\
you can press triangle to make a frame by frame step\
or press it indefinately to unfreeze everything.

You can quit the debug camera by pressing left\
joystick while also pressing the cross button.

## TopMenuDebug option

Pressing options button brings up the TopMenu.\
By moving the highlight to the bottom will look odd.\
![ER0](https://user-images.githubusercontent.com/131619524/233867577-749ab42c-5aa4-4b23-8916-3dab368875c8.jpg)
Pressing that highlight will bring up the debug menu.\
Explore it yourself, it gives you the oportunity to do things\
you couldn't otherwise do without resting at a site of grace.

## Battle state function

By disabling the battle state checker you will be able to bring up the map\
without get interrupted by a boss or a mob this thought has a side effect\
as your stamina will never go down, mind you this will benefit your steed.

## RemoDebug function

With RemoDebug you can pause cutscenes at will by pressing cross.

## Known Bugs and Issues

For an unknown reason RemoDebug doesn't work properly on retail version 1.00.0.\
TopMenuDebug doesn't work on versions higher than 1.03.2 related to the constructor.\
Although you have full freedom where you can fast travel to I strongly advise of using it\
wisely as there are some serious bugs if you teleport from the very start of the game.\
Also do not fast travel to catacombs because you will get trapped if an area boss exists.

## Requirements

[Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system

## Toolchains used

- [LLVM 10](https://llvm.org/)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Credits

- [Everyone at OpenOrbis Team](https://github.com/OpenOrbis)
- [Everyone at Goldhen Team](https://github.com/Goldhen)

Without your toolchains I wouldn't be able to distribute my patches!

## Consider donating

- [Ko-fi](https://ko-fi.com/stagvant)
- [Patreon](https://www.patreon.com/stagvant)
- [Buy me a Coffee](https://www.buymeacoffee.com/stagvant)

## Disclaimer

The source of ERDBG is currently private due to potential improper use.\
Although there might be an attempt of reconsidering in the future.

## License

ERDBG is released under the [GPLv3 License](https://github.com/stagvant/ERDBG/blob/main/LICENSE).
