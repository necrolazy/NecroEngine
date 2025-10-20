// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "core.h"

int main(int argc, char* argv[])
{
    return engine::core::run(argc > 1 ? argv[1] : "");
}
