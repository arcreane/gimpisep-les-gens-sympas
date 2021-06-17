cmake_minimum_required(VERSION 3.19)
project(GimpLikeGUI)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH "/Users/isma/Qt/6.2.0/clang_64")
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QT_VERSION 6)
set(REQUIRED_LIBS Core Widgets)
set(REQUIRED_LIBS_QUALIFIED Qt6::Core Qt6::Widgets)

add_executable(${PROJECT_NAME} main.cpp Sources/MainWindow.cpp Headers/MainWindow.h Sources/Window.cpp Headers/Window.h Sources/CustomButton.cpp Headers/CustomButton.h)

if (NOT CMAKE_PREFIX_PATH)
    message(WARNING "CMAKE_PREFIX_PATH is not defined, you may need to set it "
            "(-DCMAKE_PREFIX_PATH=\"path/to/Qt/lib/cmake\" or -DCMAKE_PREFIX_PATH=/usr/include/{host}/qt{version}/ on Ubuntu)")
endif ()

find_package(Qt${QT_VERSION} COMPONENTS ${REQUIRED_LIBS} REQUIRED)
target_link_libraries(${PROJECT_NAME} ${REQUIRED_LIBS_QUALIFIED})

# OpenCV package inclusion
find_package(OpenCV)
include_directories(${OpenCV_INCLUDE_DIRS})
target_link_libraries(GimpLikeGUI ${OpenCV_LIBS})