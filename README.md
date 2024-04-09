# Strating configuration for SDL3 project

Purpose of this repository is to make a starting configuration of a project which uses SDL3, C++ 20, and CMake.
In the current state the appliction after being build would result in a blue borderless window which can be closed be pressing ESC.

### To build the application use these commands:
- generate build
`cmake -B <where to build> -S <location of main CMakeList.txt>`

- build into binary
`cmake --build <location of build>`

- add submodule
`git submodule add <github repo link>`
