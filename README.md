# The Game of Life in OpenGL using GLSL shaders

Simulates John Conway's "The Game of Life" in an OpenGL fragment shader (GLSL). 

![](docs/opengl-game-of-life.gif)

## How it works
 * Application reads an image with the initial pattern
 * Two render passes
 * First pass renders the new state of the simulation into a framebuffer, using the previous framebuffer output as input
   * Fragment shader samples points around current pixel and writes new state to attached color buffer
 * Then the two framebuffers are swapped
 * Second pass just renders the output texture as fullscreen quad on screen buffer

## Setup MinGW/x64 on Windows
http://www.msys2.org/
https://www.devdungeon.com/content/install-gcc-compiler-windows-msys2-cc

```
pacman -Syu
pacman -S mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-make
pacman -S mingw-w64-x86_64-cmake
pacman -S mingw-w64-x86_64-glfw
pacman -S mingw-w64-x86_64-glew
pacman -S mingw-w64-x86_64-glm
pacman -S mingw-w64-x86_64-libpng

pacman -Ss glfw
```

```
Add to PATH: C:\msys64\mingw64\bin

mkdir Build && cd Build
cmake -G "MinGW Makefiles" ..
mingw32-make
```
