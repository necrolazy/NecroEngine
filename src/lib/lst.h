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

        list(list&& src)      = delete;
        list(const list& src) = delete;

        void putf(tpn& val)
        {}
        void putb(tpn& val)
        {}

        tpn popf()
        {}
        tpn popb()
        {}

        tpn& getf()
        {}
        tpn& getb()
        {}

        list& operator=(list&& src)      = delete;
        list& operator=(const list& src) = delete;

    private:
        struct item
        {
            tpn data;
            item* next;
            item* prev;
        };

        int size;
        item* head;
        item* tail;
    };
}
