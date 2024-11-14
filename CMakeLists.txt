cmake_minimum_required(VERSION 3.0.0)
project(testApp VERSION 0.1.0 LANGUAGES C CXX)


set (SOURCES
    main.cpp
)

set(CMAKE_CXX_STANDARD 17) 
set(CMAKE_CXX_STANDARD_REQUIRED ON)




set(LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/libs)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(library)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/library/include)
target_link_libraries(testApp PUBLIC CurveLibrary)
