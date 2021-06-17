cmake_minimum_required(VERSION 3.17)
project(gimpisep_les_gens_sympas)

set(CMAKE_CXX_STANDARD 14)

#find_library(OpenCV)
find_package(OpenCV)

include_directories(${OpenCV_INCLUDE_DIRS})
set(CMAKE_CXX_STANDARD 14)

add_executable(gimpisep_les_gens_sympas main.cpp Functions/brightness.cpp Functions/CannyThreshold.cpp Functions/dilateErode.cpp Functions/resize.cpp Header.h Functions/contrast.cpp Functions/FaceDetection.cpp Functions/stitching.cpp)

target_link_libraries(gimpisep_les_gens_sympas ${OpenCV_LIBS})