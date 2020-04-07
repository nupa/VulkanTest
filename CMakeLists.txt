cmake_minimum_required(VERSION 3.15)
project(VulkanTest)

set(CMAKE_CXX_STANDARD 17)

find_package( glfw3 )
find_package( GLM REQUIRED)
find_package( VULKAN REQUIRED)

include_directories("${GLM_INCLUDE_DIRS}")
include_directories("libraries")

message(${Vulkan_LIBRARIES})

add_executable(VulkanTest main.cpp queueselection.cpp queueselection.h validationlayers.cpp validationlayers.h extensions.cpp extensions.h swapchain.cpp swapchain.h device.cpp device.h gpipeline.cpp gpipeline.h drawing.cpp drawing.h vertexdata.cpp vertexdata.h images.cpp images.h buffer.cpp buffer.h)

target_link_libraries(VulkanTest glfw ${Vulkan_LIBRARIES})


