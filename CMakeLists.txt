cmake_minimum_required(VERSION 3.1)

set(TARGET_NAME pgm)

project(${TARGET_NAME})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

file(GLOB SOURCE_FILES
    "src/*.cpp"
    )

add_executable(${TARGET_NAME} ${SOURCE_FILES})

target_compile_options(${TARGET_NAME} PRIVATE -Wall -Wextra -pedantic)

# Used to debug mode
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake")

# Find SFML > 2.5
find_package(SFML 2.5 COMPONENTS graphics system window REQUIRED)

include_directories(${SFML_INCLUDE_DIR})

target_link_libraries(${TARGET_NAME} pthread ${CMAKE_DL_LIBS} ${SFML_LIBRARIES})

