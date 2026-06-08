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
            size++;
            head = new nd
            {
                .data = data,
                .next = head
            };
        }
        cn pop()
        {
            cn rval = head->data;

            if (size)
            {
                size--;
                head = head->next;
                delete tail->next;
                tail->next = head;
            }

            return rval;
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
