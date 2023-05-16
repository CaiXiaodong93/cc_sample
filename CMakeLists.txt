project(test)
cmake_minimum_required(VERSION 3.0)

set(CMAKE_SYSTEM_NAME linux)
set(CMAKE_SYSTEM_PROCESSOR x86_64)

set(CMAKE_BUILD_TYPE Release)

set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILER "g++")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -Wall -O3 -g")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -Wall -O3")

set(PROJECT_DIR /home/robot/workspace/test)
include_directories(${PROJECT_DIR}/include)

# link_directories(${PROJ_LIB_DIR})

# set(link_libs opencv_core opencv_imgcodecs opencv_imgproc tensorflowlite)
add_library(lib SHARED ${PROJECT_DIR}/src/file_one.cc)
# target_link_libraries(trash_algo ${link_libs})

add_executable(demo ./test/test.cc)
target_link_libraries(demo lib)