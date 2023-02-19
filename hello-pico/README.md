# hello-pico

A minimal Raspberry PI Pico application (the `blink` example from the SDK) using the Pico SDK.

This is intended to be run on RP2040 chips

## Build Dependencies

- Pico SDK
  - Copy the pico_sdk_import.cmake from the github repo and include it as this project does
- GNU ARM Toolchain
  ```
  sudo apt install gcc-arm-none-eabi libnewlib-arm-none-eabi
  ```
- CMake
- (Optional) VSCode Extensions
  ```
  $ code --install-extension marus25.cortex-debug
  $ code --install-extension ms-vscode.cmake-tools
  $ code --install-extension ms-vscode.cpptools
  ```

## Build

Just issue standard CMake commands...

## Deploy it

TODO

## Debug it

Read the _Getting Started with Raspberry Pi Pico_ (_Debugging a Project_ section)
