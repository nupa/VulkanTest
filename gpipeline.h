//
// Created by Panu Åkerman on 24/03/2020.
//

#ifndef VULKANTEST_GPIPELINE_H
#define VULKANTEST_GPIPELINE_H

#include <vulkan/vulkan.h>

void createRenderPass(VkDevice device, VkFormat swapChainImageFormat, VkRenderPass* renderPass);
void createPipelineLayout(VkDevice device, VkPipelineLayout* pipelineLayout);
void createGraphicsPipeline(VkDevice device, VkExtent2D extent, VkRenderPass renderPass, VkPipelineLayout pipelineLayout, VkPipeline* pipeline);
void createFramebuffer(VkDevice device, VkImageView imageView, VkRenderPass renderPass, VkExtent2D extent, VkFramebuffer* framebuffer);

#endif //VULKANTEST_GPIPELINE_H