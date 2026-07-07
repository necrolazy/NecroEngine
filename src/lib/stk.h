// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename t>
    class stk
    {
    public:
        /* ========================== */
        stk()
        {}
        ~stk()
        {}

        stk(stk&& src)      = delete;
        stk(const stk& src) = delete;

        /* ========================== */
        stk& operator=(stk&& src) = delete;
        stk& operator=(const stk& src) = delete;

        /* ========================== */
        void put(t& data)
        {
            size++;
            head = new node
            {
                .data = data,
                .next = head
            };
        }
        t pop()
        {
            t rv = head->data;

            if (size)
            {
                size--;
                head = head->next;
                delete tail->next;
                tail->next = head;
            }

            return rv;
        }

    private:
        struct node
        {
            t data;
            node* next;
        };

        int size;
        node* head;
    };
}
