//
// Created by Panu Åkerman on 24/03/2020.
//

#ifndef VULKANTEST_DEVICE_H
#define VULKANTEST_DEVICE_H

#include <vulkan/vulkan.h>

#include "queueselection.h"

VkPhysicalDevice pickPhysicalDevice(VkInstance instance, VkSurfaceKHR surface);

void createLogicalDevice(QueueFamilyIndices indices, VkPhysicalDevice physicalDevice, VkDevice* device);

#endif //VULKANTEST_DEVICE_H
