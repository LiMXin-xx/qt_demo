cmake_minimum_required(VERSION 3.22)
project(qt_demo VERSION 1.1.2 LANGUAGES C CXX DESCRIPTION "A cpp_program C&C++ project")
#message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
#message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
##--------------------- Version file ---------------------------------------##
# Specified the language standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

##--------------------- Compile Options ------------------------------------##
# Configure compile options
#add_compile_options(-Wall -Wextra -pedantic -Werror)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++17")

##--------------------- Set build type ------------------------------------##
# set(CMAKE_BUILD_TYPE Debug)  # Use `cmake -DCMAKE_BUILD_TYPE=Debug` more better
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")

# Compile options for Debug variant
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -g -O0")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0")

# Compile options for Release variant
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -O2")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O2")

message(STATUS "Compile options for c: ${CMAKE_C_FLAGS}")
message(STATUS "Compile options for c++: ${CMAKE_CXX_FLAGS}")

##--------------------- Global Macros --------------------------------------##
##--------------------- Include directories --------------------------------##
##--------------------- Source files ---------------------------------------##
add_subdirectory(bsp)
add_subdirectory(main)
# 设置资源目录
#set(RESOURCES_DIR ${CMAKE_CURRENT_SOURCE_DIR}/resources)
# 生成资源文件
#qt5_add_resources(RESOURCES ${RESOURCES_DIR}/resources.qrc)
##--------------------- Build target ---------------------------------------##
##--------------------- Merge library --------------------------------------##
##--------------------- Build demo executable-------------------------------##
##--------------------- Build unit tests -----------------------------------##
##--------------------- Install and Package target -------------------------##
##----Package, These variables should set before including CPack module ----##