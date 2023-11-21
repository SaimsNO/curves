cmake_minimum_required(VERSION 3.0.0)
project(CurveLibrary VERSION 0.1.0 LANGUAGES C CXX)


set (SOURCES 
    src/point3D.cpp
    src/ellipse.cpp
    src/circle.cpp
    src/helix.cpp
)
set (HEADERS
    src/point3D.h
    src/vector3D.h
    src/curve.h
    src/ellipse.h
    src/circle.h
    src/helix.h
)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

