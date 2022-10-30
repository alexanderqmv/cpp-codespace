cmake_minimum_required(VERSION 3.7.1)

project(Main)

add_executable(main main.cpp config.h)

set_target_properties(
    main PROPERTIES 
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON

)
