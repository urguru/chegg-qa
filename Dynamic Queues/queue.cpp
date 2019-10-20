#include "hw4q2.cpp"

template <class Item>
Queue::Queue()
{
    data=new Item[30];
    first=0;
    last=-1;
    used=0;
    capacity=30;
}
template <class Item>
Queue::Queue(const Queue<Item> &source)
{
    data=source
}