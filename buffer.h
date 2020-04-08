//
// Created by Panu Åkerman on 01/04/2020.
//

#ifndef VULKANTEST_BUFFER_H
#define VULKANTEST_BUFFER_H

#include <vulkan/vulkan.h>

uint32_t findMemoryType(VkPhysicalDevice physicalDevice, uint32_t typeFilter, VkMemoryPropertyFlags properties);

void createBuffer(VkDevice device, VkPhysicalDevice physicalDevice, VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties, VkBuffer* buffer, VkDeviceMemory* bufferMemory);

void copyBuffer(VkDevice device, VkCommandPool commandPool, VkQueue queue, VkBuffer srcBuffer, VkBuffer dstBuffer, VkDeviceSize size);

VkCommandBuffer beginSingleTimeCommands(VkDevice device, VkCommandPool commandPool);
void endAndSubmitSingleTimeCommands(VkDevice device, VkCommandPool commandPool, VkQueue cmdQueue, VkCommandBuffer commandBuffer);

#endif //VULKANTEST_BUFFER_H
