#include<iostream>
using namespace std;
class three_d
{
    int *x, *y, *z;
    public:
    three_d()
    {};
    three_d(int i, int j, int k)
    {
        x = new int;
        *x = i;
        y = new int;
        *y = j;
        z = new int;
        *z = k;
    };
    int get_x ()
    {
        return *x;
    }
    int get_y ()
    {
        return *y;
    }
    int get_z ()
    {
        return *z;
    }
    // - as friend
    friend three_d operator- (three_d &op1, three_d op2);
    // assignment as member
    three_d& operator=(three_d op2); // op1 is implied
    // prefix ++ as member
    three_d &operator++();
    // output stream as friend
    friend ostream &operator<<(ostream& stream, three_d op2);
};
three_d& three_d::operator++()
{
    ++(*x);
    ++(*y);
    ++(*z);
    return *this;
}
three_d& three_d::operator=(three_d op2)
{
    *x=*op2.x;
    *y=*op2.y;
    *z=*op2.z;
    return *this;
}
three_d operator- (three_d &op1, three_d op2)
{
    return three_d(*op1.x-*op2.x,*op1.y-*op2.y,*op1.z-*op2.z);
}
three_d operator+ (three_d &op1, three_d &op2)
{
    three_d temp((op1.get_x()+op2.get_x()),(op1.get_y()+op2.get_y()),(op1.get_z()+op2.get_z()));
    return temp;
}
ostream &operator<<(ostream& stream, three_d op2)
{
    stream<<"x="<<*op2.x<<" , y="<<*op2.y<<" , z="<<*op2.z;
    return stream;
}
int main()
{
    three_d three_d_a(1,2,3),three_d_b(0,2,1);
    cout<<"three_d_a "<<three_d_a<<endl;
    cout<<"three_d_b "<<three_d_b<<endl;
    three_d_a=three_d_a+three_d_b;
    cout<<"three_d_a "<<three_d_a<<endl;
    three_d_a=three_d_a-three_d_b;
    cout<<"three_d_a "<<three_d_a<<endl;
    ++three_d_a;
    cout<<"three_d_a "<<three_d_a<<endl;
}
