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

void createVertexBuffer(VkDevice device, VkPhysicalDevice physicalDevice, VkCommandPool commandPool, VkQueue transferQueue, VkDeviceMemory* vertexBufferMemory, VkBuffer* vertexBuffer);

uint32_t vertexCount();

#endif //VULKANTEST_VERTEXDATA_H
