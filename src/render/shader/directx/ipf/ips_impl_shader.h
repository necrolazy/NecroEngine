// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "def/platform.h"

#include "render/camera/api_camera.h"
#include "render/camera/obj_camera.h"

#include "render/device/device_impl_directx.h"

#include "render/shader/directx/impl_shader.h"

#include "var/error.h"
#include "var/string.h"


#ifdef windows

#include <d3d11.h>
#include <d3dx11.h>
#include <d3dcompiler.h>
#include <windows.h>

#endif
