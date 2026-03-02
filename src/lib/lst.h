// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename tpn>
    struct list
    {
        list()
        {}
        ~list()
        {}

        list(lst&& src)      = delete;
        list(const lst& src) = delete;

        list& operator=(list&& src)      = delete;
        list& operator=(const list& src) = delete;

    private:
        struct item
        {
            tpn data;
            item* next;
            item* prev;
        };

        item* head;
        item* tail;
    };
}
