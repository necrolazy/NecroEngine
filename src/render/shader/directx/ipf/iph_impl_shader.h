// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "def/platform.h"

#include "render/shader/obj_shader.h"

#include "var/matrix4.h"
#include "var/string.h"


#ifdef windows

#include <d3d11.h>
#include <d3dx11.h>
#include <d3dcompiler.h>
#include <windows.h>

#endif
