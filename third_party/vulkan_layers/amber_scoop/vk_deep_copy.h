/*
 * Copyright 2019 The GraphicsFuzz Project Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef GRAPHICSFUZZ_VULKAN_LAYERS_VK_DEEP_COPY_H
#define GRAPHICSFUZZ_VULKAN_LAYERS_VK_DEEP_COPY_H

#include "vulkan/vulkan.h"

namespace graphicsfuzz_amber_scoop {

template <typename T> T *CopyArray(T const *pData, uint32_t numElements) {
  T *result = new T[numElements];
  for (uint32_t i = 0; i < numElements; i++) {
    result[i] = pData[i];
  }
  return result;
}

VkBufferCreateInfo DeepCopy(const VkBufferCreateInfo &createInfo);

VkDescriptorSetLayoutBinding
DeepCopy(const VkDescriptorSetLayoutBinding &descriptorSetLayoutBinding);

VkDescriptorSetLayoutCreateInfo
DeepCopy(const VkDescriptorSetLayoutCreateInfo &createInfo);

VkFramebufferCreateInfo DeepCopy(const VkFramebufferCreateInfo &createInfo);

VkGraphicsPipelineCreateInfo
DeepCopy(const VkGraphicsPipelineCreateInfo &createInfo);

VkPipelineLayoutCreateInfo
DeepCopy(const VkPipelineLayoutCreateInfo &createInfo);

VkPipelineShaderStageCreateInfo
DeepCopy(const VkPipelineShaderStageCreateInfo &createInfo);

VkRenderPassBeginInfo *DeepCopy(VkRenderPassBeginInfo const *pRenderPassBegin);

VkRenderPassCreateInfo DeepCopy(const VkRenderPassCreateInfo &createInfo);

VkShaderModuleCreateInfo DeepCopy(const VkShaderModuleCreateInfo &createInfo);

VkSubpassDescription DeepCopy(const VkSubpassDescription &subpassDescription);

} // namespace graphicsfuzz_amber_scoop

#endif // GRAPHICSFUZZ_VULKAN_LAYERS_VK_DEEP_COPY_H
