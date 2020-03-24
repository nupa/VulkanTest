//
// Created by Panu Åkerman on 24/03/2020.
//

#ifndef VULKANTEST_IMAGEVIEW_H
#define VULKANTEST_IMAGEVIEW_H

#include <vulkan/vulkan.h>

void createImageView(VkDevice device, VkImage image, VkFormat swapChainImageFormat, VkImageView *imageView);

#endif //VULKANTEST_IMAGEVIEW_H
