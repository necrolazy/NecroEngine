// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename t>
    struct list
    {
        list()
        {}
        ~list()
        {}

        list(list&& src)      = delete;
        list(const list& src) = delete;

        void putf(t& val)
        {
            size++;
            head->prev = new item
            {
                data : val,
                next : tail,
                prev : head
            };
            tail->next = head->prev;
            head = head->prev;
        }
        void putb(t& val)
        {
            size++;
            tail->next = new item
            {
                data: val,
                next : head,
                prev : tail
            };
            head->prev = tail->next;
            tail = tail->next;
        }

        t popf()
        {
            t tmp = head->data;
            
            size--;
            head->prev = tail;
            tail->next = head->prev;
            head = head->prev;

            return tmp;
        }
        t popb()
        {
            t tmp = head->data;

            size--;
            head->prev = tail;
            tail->next = head->prev;
            head = head->prev;

            return tmp;
        }

        t& getf()
        {
            return &head->data;
        }
        t& getb()
        {
            return &tail->data;
        }

        list& operator=(list&& src)      = delete;
        list& operator=(const list& src) = delete;

    private:
        struct item
        {
            t data;
            item* next;
            item* prev;
        };

        int size;
        item* head;
        item* tail;
    };
}
