// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

#include "arr.h"

namespace engine
{
    template <typename t>
    class que
    {
    public:
        que(const int size) :
            size(size),
            data(arr<t>(static_cast<size_t>(size)))
        {}
        ~que()
        {}

        que(arr&& src)      = delete;
        que(const arr& src) = delete;

        void put(t& item)
        {
            data[i] = item;
            i = (i + 1) % size;
            n = n + 1 == size ? n : n + 1;
        }
        t pop()
        {
            /*if (q.empty())
            {
                throw error("Queue is empty");
            }

            t item = q.front();
            q.pop();
            return item;*/
        }

        operator bool()
        {
            //return !q.empty();
        }

        que& operator=(arr&& src)      = delete;
        que& operator=(const arr& src) = delete;
    private:
        const int size;
        int i = 0;
        int n = 0;
        arr data;
    };
}
