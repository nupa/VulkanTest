//
// Created by Panu Åkerman on 26/03/2020.
//

#ifndef VULKANTEST_VERTEXDATA_H
#define VULKANTEST_VERTEXDATA_H

#include <glm/glm.hpp>
#include <vector>
#include <array>

#include <vulkan/vulkan.h>

struct Vertex {
    glm::vec2 pos;
    glm::vec3 color;

    static VkVertexInputBindingDescription getBindingDescription();
    static std::array<VkVertexInputAttributeDescription, 2> getAttributeDescriptions();
};

struct UniformBufferObject {
    glm::mat4 model;
    glm::mat4 view;
    glm::mat4 proj;
};



void createVertexBuffer(VkDevice device, VkPhysicalDevice physicalDevice, VkCommandPool commandPool, VkQueue transferQueue, VkDeviceMemory* vertexBufferMemory, VkBuffer* vertexBuffer);

void createIndexBuffer(VkDevice device, VkPhysicalDevice physicalDevice, VkCommandPool commandPool, VkQueue transferQueue, VkDeviceMemory* indexBufferMemory, VkBuffer* indexBuffer);

void createBuffer(VkDevice device, VkPhysicalDevice physicalDevice, VkDeviceSize size, VkBufferUsageFlags usage, VkMemoryPropertyFlags properties, VkBuffer* buffer, VkDeviceMemory* bufferMemory);

void createDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout* descriptorSetLayout);

void updateUniformBuffer(VkDevice device, VkDeviceMemory memory, VkExtent2D extent);

void createDescriptorSets(VkDevice device, uint32_t frames, VkDescriptorSetLayout descriptorSetLayout,
                          std::vector<VkBuffer>& uniformBuffers, VkDescriptorPool* descriptorPool, std::vector<VkDescriptorSet>& descriptorSetsRef);

uint32_t vertexCount();

uint32_t indexCount();

#endif //VULKANTEST_VERTEXDATA_H
