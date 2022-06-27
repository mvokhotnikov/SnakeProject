# CMakeList.txt : CMake project for Sn, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Sn    "Snake.cpp" "Snake.h" "Position.h" "Fruit.cpp" "Fruit.h" "Main.cpp" "Main.h" "PlayerAi.cpp" "PlayerAi.h" "Score.h" "Score.cpp")

# TODO: Add tests and install targets if needed.
