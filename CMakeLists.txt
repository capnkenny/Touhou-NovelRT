cmake_minimum_required(VERSION 3.13)

project(TouhouNovelRT VERSION 0.0.1)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")
set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_subdirectory(src)
