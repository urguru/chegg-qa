#include<iostream>
#include<stdlib.h>
using namespace std;
//As mentioned in the question we are making use of the diePattern enum class
enum class diePattern
{
    Fish,Shrimp,Crab,Chicken,Coin,Barrel
};
class Die
{
    int die_num;
    diePattern dieValue;
public:
    Die()
    {
        //I have implemented the shake function directly inside the constructor
        Shake();
        if(die_num==1)
        {
            dieValue=diePattern::Fish;
        }
        else if(die_num==2)
        {
            dieValue=diePattern::Shrimp;
        }
        else if(die_num==3)
        {
            dieValue=diePattern::Crab;
        }
        else if(die_num==4)
        {
            dieValue=diePattern::Chicken;
        }
        else if(die_num==5)
        {
           dieValue=diePattern::Coin;
        }
        else
        {
            dieValue=diePattern::Barrel;
        }

    }
    void Shake()
    {
        die_num=rand()%6+1;
    }
    diePattern Get()
    {
       return dieValue;
    }
};
//To return the enum dieValue when we enter an integer value
diePattern get_die_name(int n)
{
    if(n==1)
        {
            return diePattern::Fish;
        }
        else if(n==2)
        {
            return diePattern::Shrimp;
        }
        else if(n==3)
        {
            return diePattern::Crab;
        }
        else if(n==4)
        {
            return diePattern::Chicken;
        }
        else if(n==5)
        {
            return diePattern::Coin;
        }
        else
        {
            return diePattern::Barrel;
        }
}
//To print which die was rolled
void print_face(diePattern face)
{
    if(face==diePattern::Fish)
    {
        cout<<"Fish ";
    }
    if(face==diePattern::Shrimp)
    {
        cout<<"Shrimp ";
    }
    if(face==diePattern::Crab)
    {
        cout<<"Crab ";
    }
    if(face==diePattern::Chicken)
    {
        cout<<"Chicken ";
    }
    if(face==diePattern::Coin)
    {
        cout<<"Coin ";
    }
    if(face==diePattern::Barrel)
    {
        cout<<"Barrel ";
    }
}
int main()
{
    int games_so_far=0,initial_cash,remaining_cash,percentage;
    Die dices[3];
    cout<<"\t\t\t\t\tGame of Fortune\n\t\t\t\t\t(summer 2019)\n\t\t\t\t\t==========";
    cout<<endl<<endl;
    cout<<"HELP:Rules of the Game\n";
    cout<<"Maximum bet for each game is $1000\nMinimum bet for each game is $30\n";
    cout<<"Three dice are used per game\nPlayer can place his bet on any one of the six face patterns of the die for each game\n";
    cout<<"The six face patterns of the die are Fish Shrimp Crab Chicken GoldCoin and Barrel\n";
    cout<<"The winning price is based on how many matched dice have been found\n";
    cout<<"If two matched dice have been found then the prize is 2x\nIf three matched dice have been found then the prize is 6x\n";
    cout<<"If no matched die has been found then the player loses his or her money placed as bet in that game\nHappy Playing\n";
    cout<<"Enter the total amount of money you bring in the casino for gambling\n";
    cin>>initial_cash;
    if(initial_cash<30)
    {
        cout<<"Minimum $30 needed to play the game.Try Again\n";
        cout<<"Enter the total amount of money you bring in the casino for gambling\n";
        cin>>initial_cash;
    }
    remaining_cash=initial_cash;
    while(true)
    {
       cout<<"1.Play the game\n";
        cout<<"2.Know Your Stats\n";
        cout<<"3.Quit the Game\n";
        cout<<"Enter your choice 1-3\n";
        int choice;
        cin>>choice;
        int bet,die_choice,same_count=0,win_amt;
        switch(choice)
        {
        case 1:
            {
                same_count=0;win_amt=0;
                cout<<"Enter the amount that you want to gamble\n";
                cin>>bet;
                if((bet<30)||(bet>1000))
                {
                    cout<<"Invalid amount.Please bet anywhere between $30 to $1000\n";
                    cin>>bet;
                }
                remaining_cash-=bet;
                cout<<"Choose any one of the six faces\n";
                cout<<"1.Fish,2.Shrimp,3.Crab,4.Chicken,5.Coin,6.Barrel\n";
                cin>>die_choice;
                diePattern user_die_choice=get_die_name(die_choice);
                diePattern res_die[3];
                res_die[0]=dices[0].Get();
                res_die[1]=dices[1].Get();
                res_die[2]=dices[2].Get();
                if(user_die_choice==res_die[0])
                {
                    same_count++;
                }
                if(user_die_choice==res_die[1])
                {
                    same_count++;
                }
                if(user_die_choice==res_die[2])
                {
                    same_count++;
                }
                if(same_count==1)
                {
                    win_amt=bet;
                    remaining_cash+=win_amt;
                }
                else if(same_count==2)
                {
                    win_amt=2*bet;
                    remaining_cash+=win_amt;
                }
                else if(same_count==3)
                {
                    win_amt=6*bet;
                    remaining_cash+=win_amt;
                }
                cout<<"The faces of the three dice were\n";
                print_face(res_die[0]);print_face(res_die[1]);print_face(res_die[2]);
                cout<<"\nAnd your choice was ";print_face(user_die_choice);
                cout<<"\nSo you win $"<<win_amt<<endl;
                cout<<"So the amount remaining with you is $"<<remaining_cash<<endl;
                games_so_far++;
                break;
            }
        case 2:
            {

            cout<<"Your initial Amount was $"<<initial_cash<<endl;
            cout<<"Your remaining amount is $"<<remaining_cash<<endl;
            cout<<"Percentage of win is "<<((float)(initial_cash-remaining_cash)/initial_cash)*100<<endl;
            cout<<"Games played so far is "<<games_so_far<<endl;
            break;
            }

        case 3:
            {
                cout<<"Thankyou for Playing..Have a good day\n";
                break;
            }
        default:
            {
                cout<<"Wrong Choice\n";
            }
        }
        if(choice==3)
        {
            cout<<"Exitting from the program\n";
            break;
        }
    }

    return 0;
}
