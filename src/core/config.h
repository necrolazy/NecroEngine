// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "def/obj.h"
#include "lib/ref.h"

namespace engine::core::config
{
    class obj
    {
        obj_def

        struct tt
        {
        //public:
            ref<int> x;
            ref<int> y;

            ref<int> fps;
        } render;
    };
}
