#ifndef HEY_H
#define HEY_H


class hey
{
    public:
        hey();
        virtual ~hey();

        unsigned int GetCounter() { return m_Counter; }
        void SetCounter(unsigned int val) { m_Counter = val; }

    protected:

    private:
        unsigned int m_Counter;
};

#endif // HEY_H
