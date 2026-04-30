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

        void put(int index, t& data)
        {
            if (head)
            {
                node* pos = head;
                for (int i = 0; i < (size + index % size) % size); ++i)
                {
                    pos = pos->next;
                }
                pos->prev = new node
                {
                    .data = data,
                    .next = pos,
                    .prev = pos->prev
                };
                if (pos->prev->prev)
                {
                    pos->prev->prev->next = pos->prev;
                }
            }
            else
            {
                head = new node
                {
                    .data = data,
                    .next = nullptr,
                    .prev = nullptr
                };
            }
            size++;
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
        node* head;
        node* tail;
    };
}
