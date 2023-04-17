cmake_minimum_required(VERSION 3.20)
project(bsp)
message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
##--------------------- Version file ---------------------------------------##
##--------------------- Compile Options ------------------------------------##
##--------------------- Global Macros --------------------------------------##
##--------------------- Include directories --------------------------------##
##--------------------- Source files ---------------------------------------##
file(GLOB_RECURSE SRC_DIR CONFIGURE_DEPENDS src/*.cpp src/*.c include/*.h include/*.hpp)
message("SRC_DIR: ${SRC_DIR}")
##--------------------- Build target ---------------------------------------##
#01 static library
add_library(bsp_static STATIC ${SRC_DIR})
target_include_directories(bsp_static PUBLIC include)
#rename static library
SET_TARGET_PROPERTIES(bsp_static PROPERTIES OUTPUT_NAME "bsp")
SET_TARGET_PROPERTIES(bsp_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

#02 shared library
add_library(bsp SHARED ${SRC_DIR})
target_include_directories(bsp PUBLIC include)
#rename shared library
#SET_TARGET_PROPERTIES(bsp PROPERTIES OUTPUT_NAME "bsp")
#SET_TARGET_PROPERTIES(bsp PROPERTIES CLEAN_DIRECT_OUTPUT 1)

##--------------------- Merge library --------------------------------------##
##--------------------- Build demo executable-------------------------------##
##--------------------- Build unit tests -----------------------------------##
##--------------------- Install and Package target -------------------------##
##----Package, These variables should set before including CPack module ----##


