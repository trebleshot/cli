cmake_minimum_required(VERSION 3.1.0)
project(links)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if (CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif ()

find_package(Qt5 COMPONENTS Core REQUIRED)

set(HEADER_FILES
        include/comm_service.h)

set(SOURCE_FILES
        src/main.cpp
        src/comm_service.cpp)

add_executable(links src/main.cpp ${HEADER_FILES} ${SOURCE_FILES})

add_subdirectory(libs/coolsocket)

target_link_libraries(links PUBLIC Qt5::Core coolsocket)

target_include_directories(links PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>)