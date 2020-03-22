cmake_minimum_required(VERSION 3.15)
project(VulkanTest)

set(CMAKE_CXX_STANDARD 14)

find_package( glfw3 )
find_package( GLM REQUIRED)
find_package( VULKAN REQUIRED)

include_directories("${GLM_INCLUDE_DIRS}")
include_directories("${GLM_INCLUDE_DIRS}")

message("foo2")


add_executable(VulkanTest main.cpp)

target_link_libraries(VulkanTest glfw ${Vulkan_LIBRARIES})


