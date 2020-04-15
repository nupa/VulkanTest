//
// Created by Panu Åkerman on 24/03/2020.
//

#ifndef VULKANTEST_GPIPELINE_H
#define VULKANTEST_GPIPELINE_H

#include <vulkan/vulkan.h>

void createRenderPass(VkDevice device, VkFormat depthImageFormat, VkFormat swapChainImageFormat, VkRenderPass* renderPass, VkSampleCountFlagBits msaaSamples);
void createPipelineLayout(VkDevice device, VkDescriptorSetLayout descriptorSetLayout, VkPipelineLayout* pipelineLayout);
void createGraphicsPipeline(VkDevice device, VkExtent2D extent, VkSampleCountFlagBits msaaSamples, VkRenderPass renderPass, VkPipelineLayout pipelineLayout, VkPipeline* pipeline);
void createFramebuffer(VkDevice device, VkImageView imageView, VkImageView depthImageView, VkImageView colorImageView, VkRenderPass renderPass, VkExtent2D extent, VkFramebuffer* framebuffer);

#endif //VULKANTEST_GPIPELINE_H
