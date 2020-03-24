//
// Created by Panu Åkerman on 23/03/2020.
//

#ifndef VULKANTEST_SWAPCHAIN_H
#define VULKANTEST_SWAPCHAIN_H

#include <vector>
#include <vulkan/vulkan.h>

struct SwapChainSupportDetails {
    VkSurfaceCapabilitiesKHR capabilities;
    std::vector<VkSurfaceFormatKHR> formats;
    std::vector<VkPresentModeKHR> presentModes;
};

SwapChainSupportDetails querySwapChainSupport(VkPhysicalDevice device, VkSurfaceKHR surface);
VkSwapchainCreateInfoKHR swapChainCreateInfo(VkPhysicalDevice physicalDevice, VkSurfaceKHR surface, uint32_t windowWidth, uint32_t windowHeight);

#endif //VULKANTEST_SWAPCHAIN_H
