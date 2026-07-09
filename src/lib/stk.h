// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename gdt>
    class stk
    {
    public:
        stk()
        {}
        ~stk()
        {}

        stk(stk&& src)      = delete;
        stk(const stk& src) = delete;

    public:
        stk& operator=(stk&& src)      = delete;
        stk& operator=(const stk& src) = delete;

    public:
        void put(gdt& data)
        {
            size++;
            head = new node
            {
                .data = data,
                .next = head
            };
        }
        gdt pop()
        {
            gdt rv = head->data;

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
            gdt data;
            node* next;
        };

    private:
        int size;
        node* head;
    };
}
