cmake_minimum_required(VERSION 2.8)

project(test)
SET(CMAKE_C_FLAGS "-fPIC")
SET(CMAKE_CXX_FLAGS "-std=c++14 -fPIC")
set(CMAKE_BUILD_TYPE Debug)

include_directories(
	src
)

add_executable(main
	src/main.cc
	src/sds.c
)
