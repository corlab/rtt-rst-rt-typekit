cmake_minimum_required(VERSION 2.8.3)

project(rst-rt_typekit CXX)

if(NOT CMAKE_VERSION VERSION_LESS 3.1)
    set(CMAKE_CXX_STANDARD 11)
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
endif()

set(LIBRARY_NAME ${CMAKE_PROJECT_NAME})

# Dependencies
find_package(YCM QUIET)
find_package(Eigen3)

add_definitions(${EIGEN3_DEFINITIONS})
include_directories(${EIGEN3_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIRS})

find_package(rst-rt REQUIRED)

include_directories(${RST-RT_INCLUDE_DIRS})

link_directories(${RST-RT_LIBRARY_DIRS})

find_package(OROCOS-RTT REQUIRED)
include(${OROCOS-RTT_USE_FILE_PATH}/UseOROCOS-RTT.cmake)

# Sub-directory

add_subdirectory(src)
