cmake_minimum_required(VERSION 3.31)
project(Proton_Template)
add_subdirectory(ext/Proton2D)
set(CMAKE_CXX_STANDARD 20)

add_executable(Proton_Template
        src/main.cc)
target_link_libraries(Proton_Template Proton2D
SDL3::SDL3
SDL3_ttf::SDL3_ttf
SDL3_image::SDL3_image
box2d::box2d)