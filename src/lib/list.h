// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename t>
    struct list
    {
        list()
        {
        }
        ~list()
        {
        }

        list(list&& src) = delete;
        list(const list& src) = delete;

        list& operator(const int index)
        {
            item = (size + index % size) % size);
            return &this;
        }

        list& operator<<(t& src)
        {
            node* res = head;
            for (int i = 0; i < item; ++i)
            {
                res = res->next;
            }
            node* tmp = new node{
                data : src,
                next : res,
                prev : res->prev
            };
            if (res->prev)
            {
                //
            }
            if (res->next)
            {
                //
            }
            return &this;
        }

        t& operator[](const int index)
        {
            node* res = head;
            for (int i = 0; i < (size + index % size) % size); ++i)
            {
                res = res->next;
            }
            return res->data;
        }
        const t& operator[](const int index) const
        {
            node* res = head;
            for (int i = 0; i < (size + index % size) % size); ++i)
            {
                res = res->next;
            }
            return res->data;
        }

     /*   void putf(t& val)
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
        }*/

        list& operator=(list&& src)      = delete;
        list& operator=(const list& src) = delete;

    private:
        struct node
        {
            t data;
            node* next;
            node* prev;
        };

        int size;
        int item;
        node* head;
        node* tail;
    };
}
