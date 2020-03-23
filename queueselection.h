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

    bool isComplete() {
        return graphicsFamily.has_value();
    }
};

QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

#endif //VULKANTEST_QUEUESELECTION_H
