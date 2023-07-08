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
- Revamps boot procedure in order to load model viewer.
- Declares new functions to handle the debug draw crash.

## Model Viewer mode

Boot procedure was changed to allow booting into the\
model viewer a mode in which fromsoftware developers\
review thousands of assets used on game development.

Depending the release of the game model viewer might\
take up to five minutes to load all the assets or a few\
seconds if used on the network test build of eldenring.

Specifically one can review all the entities and objects\
as well as create custom textlists for crossreferencing.

## Known Bugs and Issues

Model viewer is completely operational on every major version and release of the game\
though due to an unknown bug on versions higher than 1.03.2 they fail loading the assets.\
Please bear in mind that while reviewing asset lists do not for whatever reason press circle\
as you will get kicked out of the model viewer and game stucks into a black screen indefinitely.

## Requirements

- [Goldhen 2.3+](https://github.com/Goldhen/Goldhen) running on a Playstation4 system
- [Fonts and shaders](https://drive.proton.me/urls/VKYP8GRS98#s6lRD1ulS5Vh) for model viewer asset menu
- Knowledge on how to make a backup copy of a game
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
