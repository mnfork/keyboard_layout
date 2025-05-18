# Tips about Flashing

To flash the microdox v2 there are two critical things:
1. Compile the keymap for the blok rp2040
  - ensure that "CONVERT_TO = blok" is in rules.mk for your keymap before compiling
2. Get the board into bootloader mode
  - hold the boot button on the back of the micro while plugging in the usb
  - the board should show up as "RPI-RP2"
  - You still need to mount the device

See https://peg.software/docs/blok for additional information about the microcontroller 
