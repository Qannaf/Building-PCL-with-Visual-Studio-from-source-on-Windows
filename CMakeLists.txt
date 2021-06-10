cmake_minimum_required(VERSION 3.10)

project(Hello_World_PCL)

find_package(PCL 1.9 REQUIRED)

list(REMOVE_ITEM PCL_LIBRARIES "vtkproj4")
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(HelloWorldPCL "HelloWorldPCL.cpp")
target_link_libraries (HelloWorldPCL ${PCL_LIBRARIES})
