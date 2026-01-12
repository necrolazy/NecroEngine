// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "device_api.h"
#include "device_obj.h"
#include "device_impl_directx.h"

#include "render/model/obj_model.h"
#include "var/string.h"

namespace engine::render::device
{
    obj* inst = nullptr;


    void init()
    {
        term();
        inst = new directx::impl();
    }

    void draw(model::obj& model_obj)
    {
        inst->draw(model_obj);
    }

    string type()
    {
        return "directx";
    }

    void term()
    {
        delete inst;
        inst = nullptr;
    }
}
