cmake_minimum_required(VERSION 3.0.0)
project(testApp VERSION 0.1.0 LANGUAGES C CXX)


set (SOURCES
    main.cpp
)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)


add_executable(${PROJECT_NAME} ${SOURCES})

find_library(CurveLibrary CurveLibrary PATHS ${CMAKE_CURRENT_SOURCE_DIR}/library/build)

if (CurveLibrary)
    message("PATH")
    message(${CurveLibrary})
    target_link_libraries(${PROJECT_NAME} ${CurveLibrary})
    target_include_directories(${PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/library/include
    )
else()
    message(FATAL_ERROR "CurveLibrary not found!")
endif()

