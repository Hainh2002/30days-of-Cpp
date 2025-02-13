cmake_minimum_required(VERSION 3.22)
set(CMAKE_CXX_STANDARD 17)

project(learning-cpp-prj)

include_directories(
#        Libs/
#        Libs/Driver
#        Libs/Logger
#        Libs/Platforms
#        Libs/Utils

        Daily
)

add_subdirectory(Daily)
