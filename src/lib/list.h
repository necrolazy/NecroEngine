// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename tpn>
    struct list
    {
        list(tpn& def)
        {}
        ~list()
        {}

        list(list&& src)      = delete;
        list(const list& src) = delete;

        void putf(tpn& val)
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
        void putb(tpn& val)
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

        tpn popf()
        {
            tpn tmp = head->data;
            
            size--;
            head->prev = tail;
            tail->next = head->prev;
            head = head->prev;

            return tmp;
        }
        tpn popb()
        {
            tpn tmp = head->data;

            size--;
            head->prev = tail;
            tail->next = head->prev;
            head = head->prev;

            return tmp;
        }

        tpn& getf()
        {
            return &head->data;
        }
        tpn& getb()
        {
            return &tail->data;
        }

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
