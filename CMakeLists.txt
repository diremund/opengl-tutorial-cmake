cmake_minimum_required(VERSION 3.14)
project(OpenGL_Project)


add_executable(main src/main.cpp src/glad.c)

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)

target_include_directories(main PUBLIC
                           $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
                           $<INSTALL_INTERFACE:include>)
target_link_libraries(main PUBLIC glfw OpenGL::GL ${CMAKE_DL_LIBS})
