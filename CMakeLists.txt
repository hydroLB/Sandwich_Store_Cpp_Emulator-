cmake_minimum_required(VERSION 3.8)
project(Sandwich_Store_C++_Emulator)

set(CMAKE_CXX_STANDARD 14)

add_executable(Sandwich_Main Sandwich_Main.cpp Sandwich.cpp Chicken_Sandwich.cpp Ham_Sandwich.cpp Turkey_Sandwich.cpp)
#to test
#add_executable(Sandwich_Testing Sandwich_Testing.cpp Sandwich.cpp Chicken_Sandwich.cpp Ham_Sandwich.cpp Turkey_Sandwich.cpp)


