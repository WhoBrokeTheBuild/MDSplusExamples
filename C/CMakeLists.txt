cmake_minimum_required(VERSION 3.20 FATAL_ERROR)

list(PREPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/../CMake)
project(MDSplusExamples)

find_package(MDSplus)

add_subdirectory(OpenTree)