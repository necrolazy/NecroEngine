// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename t>
    class lst
    {
    public:
        lst()
        {}
        ~lst()
        {}

        lst(lst&& src)      = delete;
        lst(const lst& src) = delete;

        lst& operator=(lst&& src)      = delete;
        lst& operator=(const lst& src) = delete;

    private:
        template <typename t>
        struct itm
        {
            //
        };
    };
}
