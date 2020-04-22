#include<iostream>
using namespace std;
class game
{
    int x,y;
    public:
    game()
    {
        x=5;
        y=5;
    }
    //IF WE CROSS THE LIMIT OF TEN THEN WE MAKE THE VARIABLE 1 AND IF WE HIT 0 THEN WE MAKE IT 10
    //THAT'S THE LOGIC OF TELEPORTATION IN THIS GAME
    void up(){y=y-1;if(y==0)y=10;}
    void down(){y=y+1;if(y==11)y=1;}
    void left(){x=x-1;if(x==0)x=10;}
    void right(){x=x+1;if(x==11)x=1;}
    void print(){cout<<"Current Location - X: "<<x<<" Y: "<<y<<endl;}
};
int main()
{
    game play;
    char ch;
    while(true)
    {
        play.print();
        cout<<"(U)p, (D)own, (L)eft, (R)ight or (Q)uit:\n";
        cin>>ch;
        if(ch=='U')
        {
            play.up();
        }
        else if(ch=='D')
        {
            play.down();
        }
        else if(ch=='L')
        {
            play.left();
        }
        else if(ch=='R')
        {
            play.right();
        }
        else if(ch=='Q')
        {
            break;
        }
        else
        {
            cout<<"Wrong Choice Try Again !!!\n";
        }
    }
    return 0;
}
