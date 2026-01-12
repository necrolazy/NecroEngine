// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "core.h"

#include "core/control/api_control.h"
#include "core/event/api_event.h"
#include "core/settings/api_settings.h"
#include "core/view/api_view.h"
#include "render/api_render.h"

namespace engine::core
{
    int run(const char* config_path)
    {
        settings::init();
        event::init();
        view::init();
        render::init();

        control::start();

        while (control::status())
        {
            event::handle();
            render::draw();
        }

        render::term();
        view::term();
        event::term();
        settings::term();

        return 0;
    }
}
