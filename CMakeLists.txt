cmake_minimum_required(VERSION 3.17)
project(HackerSIm)

set(CMAKE_CXX_STANDARD 20)

add_executable(HackerSIm main.cpp Backpack.cpp Backpack.h VIrus.cpp VIrus.h PriceGenerator.cpp PriceGenerator.h Player.cpp Player.h utility.cpp utility.h)