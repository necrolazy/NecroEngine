// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <class cn>//tpn>
    struct stk
    {
        stk()
        {
        }
        ~stk()
        {
        }

        stk(stk&& src) = delete;
        stk(const stk& src) = delete;

        void put(cn& data)
        {
            //
        }
        cn pop()
        {
            //
        }

        stk& operator=(stk&& src)      = delete;
        stk& operator=(const stk& src) = delete;

    private:
        struct nd
        {
            cn data;
            nd* next;
        };

        int size;
        nd* head;
    };
}
