# ERDBG - Goldhen Plugin for Playstation4

## Versions supported

- Application version:1.00.0
- Application version:1.03.2
- Application version:1.05.0
- Application version:1.06.0
- Application version:1.07.0
- Application version:1.08.0
- Application version:1.08.1
- Application version:1.09.0

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
- Additionally framepacing issues were fixed.
- Redirected register to grant infinite runes.

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
![ER0](https://user-images.githubusercontent.com/131619524/233867577-749ab42c-5aa4-4b23-8916-3dab368875c8.jpg)\
Pressing that highlight will bring up the debug menu.\
Examinating further will allow gameplay exploitation.

## Battle state function

By disabling the battle state checker you will be able to bring up the map\
without get interrupted by a boss or a mob this thought has a side effect\
as your stamina will never go down, mind you this will benefit your steed.

## RemoDebugPause function

Pauses cutscenes by pressing the cross button.

## Known Bugs and Issues

For an unknown reason RemoDebugPause doesn't work properly on retail version 1.00.0.\
TopMenuDebug doesn't work on versions higher than 1.03.2 related to the constructor.\
Although you have full freedom where you can fast travel to I strongly advise of wise\
usage as there are some serious bugs if you teleport from the very start of the game.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- Knowledge on how to setup a plugin to run properly

## Toolchains used

- [LLVM 10](https://github.com/llvm/llvm-project)
- [GoldHEN_Plugins_SDK](https://github.com/GoldHEN/GoldHEN_Plugins_SDK)
- [OpenOrbis-PS4-Toolchain](https://github.com/OpenOrbis/OpenOrbis-PS4-Toolchain)

## Toolchain authors

- [The LLVM Team](https://github.com/llvm)
- [The Goldhen Team](https://github.com/Goldhen)
- [The OpenOrbis Team](https://github.com/OpenOrbis)

## Consider donating

- [Option1](https://ko-fi.com/stagvant)
- [Option2](https://buymeacoffee.com/stagvant)

## License

ERDBG is released under the [GPLv3 License](https://github.com/stagvant/ERDBG/blob/main/LICENSE).
