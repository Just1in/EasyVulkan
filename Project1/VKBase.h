#pragma once
#include "EasyVKStart.h"
//定义vulkan命名空间，之后会把Vulkan中一些基本对象的封装写在其中
namespace vulkan 
{
    class graphicsBase {
        //静态变量
        static graphicsBase singleton;
        //--------------------
        graphicsBase() = default;
        graphicsBase(graphicsBase&&) = delete;
        ~graphicsBase() {
            /*待Ch1-4填充*/
        }
    public:
        //静态函数
        //该函数用于访问单例
        static graphicsBase& Base() {
            return singleton;
        }
    };
    inline graphicsBase graphicsBase::singleton;
}
