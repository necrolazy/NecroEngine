// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#define def_decl \
    const int id; \
    decl();  \
    ~decl(); \
    decl(decl&& src) noexcept;      \
    decl(const decl& src) noexcept; \
    decl& operator=(decl&& src)      = delete; \
    decl& operator=(const decl& src) = delete;


#define def_impl \
    impl()  = default; \
    ~impl() = default; \
    impl(impl&& src)      = delete; \
    impl(const impl& src) = delete; \
    impl& operator=(impl&& src)      = delete; \
    impl& operator=(const impl& src) = delete;
