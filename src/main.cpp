#include <vulkan/vulkan.h>
#include <iostream>

int main(){

  VkApplicationInfo appInfo = {};
  appInfo.sType = VK_STRUCTURE_TYPE_APPLICATION_INFO;
  appInfo.pApplicationName = "Pong Game";
  appInfo.applicationVersion = VK_MAKE_VERSION(0, 0, 1);
  appInfo.pEngineName = "Vulan Engine";

  VkInstanceCreateInfo instanceInfo = {};
  instanceInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
  instanceInfo.pApplicationInfo = &appInfo;

  VkInstance instance;

  VkResult result = vkCreateInstance(&instanceInfo, 0, &instance);

  if(result == VK_SUCCESS){
    std::cout << "Vulkan Instance created uhuu!" << std::endl;
  } else {
    std::cout << "Failed to create a Vulkan Instance" << std::endl;
  }

  return 0;
}