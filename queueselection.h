//
// Created by Panu Åkerman on 23/03/2020.
//

#ifndef VULKANTEST_QUEUESELECTION_H
#define VULKANTEST_QUEUESELECTION_H

#include <cstdlib>
#include <optional>
#include <vulkan/vulkan.h>

struct QueueFamilyIndices {
    std::optional<uint32_t> graphicsFamily;
    std::optional<uint32_t> presentFamily;

    bool isComplete() {
        return graphicsFamily.has_value() && presentFamily.has_value();
    }
};

QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device, VkSurfaceKHR surface);

#endif //VULKANTEST_QUEUESELECTION_H
