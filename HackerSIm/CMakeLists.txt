cmake_minimum_required(VERSION 3.17)
project(HackerSIm)

set(CMAKE_CXX_STANDARD 20)

add_executable(HackerSIm main.cpp cmake-build-debug/Backpack.cpp cmake-build-debug/Backpack.h VIrus.cpp VIrus.h PriceGenerator.cpp PriceGenerator.h Player.cpp Player.h)