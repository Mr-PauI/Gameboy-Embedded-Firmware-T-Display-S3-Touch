This is a simple program to allow you to merge your .rom files with 
the Gameboy Embedded Firmware .bin file; after this operation is complete
it will regenerate the CRC for the .bin files integrity.

To use this tool, launch the merge_tool.exe, select file->merge ROM.
1) select the ROM you wish to merge with the binary
2) select the ORIGINAL gameboy embedded firmware .bin file (the pattern it looks for is not present in already merged .bins)
3) select the name of the output .bin file, ie: mario.bin or spaceinvaders.bin

Thats it, close the application, your new .bin file is ready for flashing to your device. To flash and manage your bin files,
please use m5launcher. If your unfamiliar with that application, it is available for the T-Display S3 touch and allows you to
load .bin files using the browser on any device(phone, pc) to your T-Display, or from the sd card if you have the sd card
shield accesory. It can also backup the spiffs section to your sd card so that you dont loose saved data when you are switching
firmware on your device. This launcher is required to use this firmware at this time, as no bootloader has been merged. I feel
that the majority of users once exposed to the utility of m5launcher will decide that it is a feature having it rather than an
unnesesary complication.

The launcher can be installed from https://bmorcelli.github.io/M5Stick-Launcher/flash0.html
