//
// Created by Panu Åkerman on 24/03/2020.
//

#ifndef VULKANTEST_DRAWING_H
#define VULKANTEST_DRAWING_H

#include <vulkan/vulkan.h>

void createCommandPool(VkDevice device, VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, VkCommandPool* commandPool);
void recordCommandBuffer(VkCommandBuffer commandBuffer, VkBuffer vertexBuffer, VkBuffer indexBuffer, uint32_t indexCount, VkRenderPass renderPass, VkFramebuffer framebuffer, VkExtent2D extent, VkPipeline graphicsPipeline);

#endif //VULKANTEST_DRAWING_H
