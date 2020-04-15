//
// Created by Panu Åkerman on 24/03/2020.
//

#ifndef VULKANTEST_DEVICE_H
#define VULKANTEST_DEVICE_H

#include <vulkan/vulkan.h>

#include "queueselection.h"

class PhysicalDevice {
public:
    void initDevice(VkInstance instance, VkSurfaceKHR surface);
    VkPhysicalDevice device();
    VkSampleCountFlagBits maxUsableSampleCount();

private:
    VkPhysicalDevice vulkanDevice = VK_NULL_HANDLE;
    VkSampleCountFlagBits sampleCount = VK_SAMPLE_COUNT_1_BIT;
    static VkPhysicalDevice pickPhysicalDevice(VkInstance instance, VkSurfaceKHR surface);
};

void createLogicalDevice(QueueFamilyIndices indices, VkPhysicalDevice physicalDevice, VkDevice* device);

#endif //VULKANTEST_DEVICE_H
