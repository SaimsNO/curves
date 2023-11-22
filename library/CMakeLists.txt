cmake_minimum_required(VERSION 3.0.0)
project(CurveLibrary VERSION 0.1.0 LANGUAGES C CXX)


set (SOURCES 
    include/point3D.cpp
    include/ellipse.cpp
    include/circle.cpp
    include/helix.cpp
)
set (HEADERS
    include/point3D.h
    include/vector3D.h
    include/curve.h
    include/ellipse.h
    include/circle.h
    include/helix.h
)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} SHARED ${SOURCES} ${HEADERS})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

