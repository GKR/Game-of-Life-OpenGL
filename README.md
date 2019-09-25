# The Game of Life in OpenGL

Simulates John Conway's "The Game of Life" in an OpenGL fragment shader. 

## (Modern) OpenGL Rendering Pipeline
![](documentation/opengl-pipeline.png)
Source: https://learnopengl.com

## How it works
 * Application reads an image with the initial pattern
 * Two render passes
 * First pass renders the new state of the simulation into a framebuffer, using the previous framebuffer output as input
   * Fragment shader samples points around current pixel and writes new state to attached color buffer
 * Then the two framebuffers are swapped
 * Second pass just renders the output texture as fullscreen quad on screen buffer

## Resources
 * https://vulkan-tutorial.com/Drawing_a_triangle
 * http://www.opengl-tutorial.org/beginners-tutorials/tutorial-1-opening-a-window/
 * http://www.opengl-tutorial.org/intermediate-tutorials/tutorial-14-render-to-texture/
 * https://github.com/opengl-tutorials
 * https://github.com/opengl-tutorials/ogl/blob/master/tutorial14_render_to_texture/tutorial14.cpp
 * https://en.wikibooks.org/wiki/OpenGL_Programming/Intermediate/Textures

## Setup MinGW/x64
http://www.msys2.org/
https://www.devdungeon.com/content/install-gcc-compiler-windows-msys2-cc

https://stackoverflow.com/questions/35529246/how-do-i-use-vulkan-with-mingw-r-x86-64-32-error

pacman -Syu
pacman -S mingw-w64-x86_64-toolchain
pacman -S mingw-w64-x86_64-make
pacman -S mingw-w64-x86_64-cmake
pacman -S mingw-w64-x86_64-glfw
pacman -S mingw-w64-x86_64-glew
pacman -S mingw-w64-x86_64-glm
pacman -S mingw-w64-x86_64-libpng

pacman -Ss glfw

Add to PATH: C:\msys64\mingw64\bin

mkdir Build && cd Build
cmake -G "MinGW Makefiles" ..
mingw32-make