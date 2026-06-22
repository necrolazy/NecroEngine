// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename gdt>
    struct stk
    {
        stk()
        {}
        ~stk()
        {}

        stk(stk&& src)      = delete;
        stk(const stk& src) = delete;

        void put(gdt& data)
        {
            size++;
            head = new nd
            {
                .data = data,
                .next = head
            };
        }
        gdt pop()
        {
            gdt rval = head->data;

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
        struct item
        {
            gdt data;
            item* next;
        };

        int size;
        item* head;
    };
}
