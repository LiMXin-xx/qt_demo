cmake_minimum_required(VERSION 3.22)
project(main)
#message("PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
#message("PROJECT_SOURCE_DIR: ${PROJECT_SOURCE_DIR}")
#设置C++版本
set(CMAKE_CXX_STANDARD 17)
#指示CMake在构建过程中自动执行MOC生成器
set(CMAKE_AUTOMOC ON)
#指示CMake在构建过程中自动RCC编译器
set(CMAKE_AUTORCC ON)
#指示CMake在构建过程中自动UIC编译器
set(CMAKE_AUTOUIC ON)
#设置QT安装路径
if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(CMAKE_PREFIX_PATH "D:/Qt/Qt5.14.2/5.14.2/mingw73_64/lib/cmake")
else ()
    set(CMAKE_PREFIX_PATH "/opt/Qt5.14.2/5.14.2/gcc_64/lib/cmake")
endif ()
##--------------------- Source files ---------------------------------------##
##--------------------- Source files ---------------------------------------##
file(GLOB_RECURSE SRC_DIR CONFIGURE_DEPENDS src/*.cpp src/*.c src/*.ui include/*.h include/*.hpp)
#添加额外的 源文件 例如资源文件等
set(RES_DIR ../res.qrc)
list(APPEND SRC_DIR ${RES_DIR})
#添加可执行文件
##--------------------- Build target ---------------------------------------##
if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    #    add_executable(main WIN32 ${SRC_DIR})
    add_executable(main ${SRC_DIR})
else ()
    add_executable(main ${SRC_DIR})
endif ()
target_include_directories(main PUBLIC include)
#local library
target_link_libraries(main PUBLIC bsp)
#连接库 external library
#查找QT库和组件
find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        Network
        OpenGL
        Multimedia
        REQUIRED)
target_link_libraries(main PUBLIC
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        Qt5::Network
        Qt5::OpenGL
        Qt5::Multimedia
        )
#配置QT环境和静态库（Debug或是Release)
if (WIN32 AND NOT DEFINED CMAKE_TOOLCHAIN_FILE)
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    #将QT_INSTALL_PATH设置为CMake前缀路径
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    #如果CMake前缀路径下不存在QT/bin目录，则尝试在上两个目录中查找
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    #如果存在适当的QT平台插件DLL文件，则将其复制到输出目录的/plugins/platforms中
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif ()
    #对于美国QT库（Core、Gui、Widgets）,将相关的DLL文件复制到输出目录
    foreach (QT_LIB Core Gui Widgets Network OpenGL Multimedia)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt5${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
