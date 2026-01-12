// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "render/mesh/impl_mesh.h"

#include "render/indices/api_indices.h"
#include "render/indices/obj_indices.h"

#include "render/settings.h"

#include "render/vertices/api_vertices.h"
#include "render/vertices/obj_vertices.h"

#include "var/array.h"
#include "var/error.h"
#include "var/string.h"
#include "var/std.h"
#include "var/vector3.h"
#include "var/vector4.h"
#include "var/vertex.h"


#include <iostream>
#include <filesystem>
#include <fstream>
