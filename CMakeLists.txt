cmake_minimum_required(VERSION 3.29)
project(cpp_tic_tac_toe)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_tic_tac_toe
    board.cpp
    board.h
    main.cpp
    player.cpp
    player.h)
