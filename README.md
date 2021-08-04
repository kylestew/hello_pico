# Hello Pico

Building a self contained pi pico repo

## Extra Environment Support

### OpenOCD

I've built the Pico specific branch of OpenOCD and added it as my system wide version. I'll keep an eye on this and see
if it goes into the main project so this dependency is not needed (install from Brew instead).

[OpenOCD](https://github.com/raspberrypi/openocd)

### VSCode

Using VSCode for now, haven't fully figured out how to dev the Pico in VIM. Will switch this over when I do.

#### launch.json

Wonky hardcoded settings for OpenOCD path, there is probably a better way!
