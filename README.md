# STM32F103 / Blue Pill CMSIS (bare metal / no HAL) Bare Bones Programming Framework
Clone this directory structure to provide a simple CMSIS folder structure to program the STM32F103 microcontorller or Blue Pill using C without the need for a fancy IDE (CubeIDE, etc.) or heavy HAL libraries. Includes a simple Blinky program (main.c) and a Makefile. This blinky program compiles to under 600 bytes.

Requires:
arm-none-eabi-gcc toolchain
make
git-bash (for windows)
Program to upload .elf file to the microcontroller / Blue Pill

To compile, navigate to the directory containing main.c (using git-bash in Windows) and type 'make'. Then upload the resulting blinky.elf program to your microcontorller or Blue Pill using STMCubeProgrammer or another similar utility.
