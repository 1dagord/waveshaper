cmake_minimum_required(VERSION 3.10)
project(waveshaper)
set(CMAKE_CXX_STANDARD 20)

set(WX_VERSION 3.2.6)

find_package(wxWidgets ${WX_VERSION} REQUIRED COMPONENTS core base)

include_directories(src)
include_directories(include)

set(SOURCES
    src/MainFrame.cpp
    src/App.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE wxWidgets::wxWidgets)