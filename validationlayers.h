//
// Created by Panu Åkerman on 23/03/2020.
//

#ifndef VULKANTEST_VALIDATIONLAYERS_H
#define VULKANTEST_VALIDATIONLAYERS_H

#include <cstdlib>
#include <vector>

const std::vector<const char*> validationLayers = {
        "VK_LAYER_KHRONOS_validation"
};

#ifdef NDEBUG
const bool enableValidationLayers = false;
#else
const bool enableValidationLayers = true;
#endif

bool checkValidationLayerSupport();

#endif //VULKANTEST_VALIDATIONLAYERS_H
