// Copyright: (C) 2022 Vyacheslav Smirnov. All rights reserved.

namespace engine
{
    template <typename t>
    class arr
    {
    public:
        const int size;

        arr(const int size) :
            size(size),
            data(new t[static_cast<size_t>(size)])
        {}
        ~arr()
        {
            delete[] data;
        }

        arr(arr&& src)      = delete;
        arr(const arr& src) = delete;

        arr& operator=(arr&& src)      = delete;
        arr& operator=(const arr& src) = delete;

        t* operator*()
        {
            return &data;
        }
        const t* operator*() const
        {
            return &data;
        }

        t& operator[](const int index)
        {
            return data[static_cast<size_t>((size + index % size) % size)];
        }
        const t& operator[](const int index) const
        {
            return data[static_cast<size_t>((size + index % size) % size)];
        }

    private:
        t* const data;
    };
}
