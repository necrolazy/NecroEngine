// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename adt>
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
        template <typename adt>
        struct item
        {
            adt data;
            item<adt>* next;
            item<adt>* prev;
        };

        item<adt>* head;
        item<adt>* tail;
    };
}
