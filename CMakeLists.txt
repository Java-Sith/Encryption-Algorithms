cmake_minimum_required(VERSION 3.10)
project(Encryption-Algorithms)

set(CMAKE_CXX_STANDARD 11)

add_executable(Encryption main.cpp DES.h Hashing.h)