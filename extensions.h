//
// Created by Panu Åkerman on 23/03/2020.
//

#ifndef VULKANTEST_EXTENSIONS_H
#define VULKANTEST_EXTENSIONS_H

#include <vector>
#include <vulkan/vulkan.h>

std::vector<const char*> getRequiredInstanceExtensions();
void printInstanceExtensions();

bool checkDeviceExtensionSupport(VkPhysicalDevice device);

#endif //VULKANTEST_EXTENSIONS_H
