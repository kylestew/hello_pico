# Hello Pico

Building a self contained pi pico repo for C++ projects

## Extra Environment Support

### OpenOCD

I've built the Pico specific branch of OpenOCD and added it as my system wide version. I'll keep an eye on this and see
if it goes into the main project so this dependency is not needed (install from Brew instead).

[OpenOCD](https://github.com/raspberrypi/openocd)

### VSCode

Use VSCode for simple workflow and integrated debug support. The `launch.json` should work for this project, but may have broken. Raspberry pi has a good [datasheet](https://datasheets.raspberrypi.org/pico/getting-started-with-pico.pdf) on how to fix a broken worfklow.

#### launch.json

Wonky hardcoded settings for OpenOCD path, there is probably a better way!

### Serial Port

    $ screen /dev/tty.usbmodem1441201 115200

ctrl-a, ctrl \ to disconnect