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
    glm::vec3 pos;
    glm::vec3 color;
    glm::vec2 texCoord;

    static VkVertexInputBindingDescription getBindingDescription();
    static std::array<VkVertexInputAttributeDescription, 3> getAttributeDescriptions();
};

struct UniformBufferObject {
    alignas(16) glm::mat4 model;
    alignas(16) glm::mat4 view;
    alignas(16) glm::mat4 proj;
};



void createVertexBuffer(VkDevice device, VkPhysicalDevice physicalDevice, VkCommandPool commandPool, VkQueue transferQueue, VkDeviceMemory* vertexBufferMemory, VkBuffer* vertexBuffer);

void createIndexBuffer(VkDevice device, VkPhysicalDevice physicalDevice, VkCommandPool commandPool, VkQueue transferQueue, VkDeviceMemory* indexBufferMemory, VkBuffer* indexBuffer);

void createDescriptorSetLayout(VkDevice device, VkDescriptorSetLayout* descriptorSetLayout);

void updateUniformBuffer(VkDevice device, VkDeviceMemory memory, VkExtent2D extent);

void createDescriptorSets(VkDevice device, uint32_t frames, VkDescriptorSetLayout descriptorSetLayout,
                          std::vector<VkBuffer>& uniformBuffers, VkImageView textureImageView, VkSampler textureSampler,
                          VkDescriptorPool* descriptorPool, std::vector<VkDescriptorSet>& descriptorSetsRef);

uint32_t vertexCount();

uint32_t indexCount();

#endif //VULKANTEST_VERTEXDATA_H
