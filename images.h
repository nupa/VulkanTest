//
// Created by Panu Åkerman on 31/03/2020.
//

#ifndef VULKANTEST_IMAGES_H
#define VULKANTEST_IMAGES_H

#include <vulkan/vulkan.h>
#include <vector>

void createTextureImage(VkDevice device, VkPhysicalDevice physicalDevice, VkCommandPool commandPool, VkQueue graphicsQueue,
        uint32_t &mipLevels, VkImage* textureImage, VkDeviceMemory* textureImageMemory);

void createImageView(VkDevice device, VkImage image, VkFormat imageFormat, VkImageAspectFlags aspectFlags, uint32_t mipLevels, VkImageView *imageView);

void createTextureSampler(VkDevice device, uint32_t mipLevels, VkSampler* textureSampler);

VkFormat findDepthImageFormat(VkPhysicalDevice physicalDevice);

void createDepthImageResources(
        VkDevice device, VkPhysicalDevice physicalDevice, VkCommandPool commandPool, VkQueue graphicsQueue,
        VkExtent2D extent,
        VkImage* depthImage, VkDeviceMemory* depthImageMemory, VkImageView* depthImageView);

#endif //VULKANTEST_IMAGES_H
