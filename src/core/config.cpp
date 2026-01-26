// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "config.h"

#include "def/impl.h"
#include "lib/ptr.h"

namespace engine::core::config
{
    class impl
    {
        impl_def

        int x = 128;
        int y = 256;

        int fps = 60;
    };


    ptr<impl> impl_inst;


    static int get_render_x()
    {
        return impl_inst->x;
    }
    static void set_render_x(int x)
    {
        impl_inst->x = x;
    }

    static int get_render_y()
    {
        return impl_inst->y;
    }
    static void set_render_y(int y)
    {
        impl_inst->y = y;
    }

    static int get_render_fps()
    {
        return impl_inst->fps;
    }
    static void set_render_fps(int fps)
    {
        impl_inst->fps = fps;
    }


    obj::obj() :
        //render.x(ref<int>(get_render_x, set_render_x))
        render({ ref<int>(get_render_x, set_render_x) ,
            ref<int>(get_render_y, set_render_y) ,
            ref<int>(get_render_fps, set_render_fps) })
    {
        //
    }
    obj::~obj()
    {
        //
    }

    obj::obj(obj&& src) noexcept :
        render({ ref<int>(get_render_x, set_render_x) ,
            ref<int>(get_render_y, set_render_y) ,
            ref<int>(get_render_fps, set_render_fps) })
    {
        //
    }
    obj::obj(const obj& src) noexcept :
        render({ ref<int>(get_render_x, set_render_x) ,
            ref<int>(get_render_y, set_render_y) ,
            ref<int>(get_render_fps, set_render_fps) })
    {
        //
    }
}
