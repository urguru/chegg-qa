#include<iostream>
using namespace std;
 class number_game{
     public:
     int low=1,high=100;
     bool done=false;

     void begin()
     {
         low=1;
         high=100;
         done=false;

         cout<<"Think of a number between "<<low<<" and "<<high<<endl;
     }

     void ask()
     {
         if(finished())
         {
             cout<<"The game is over Sorry.\n";
             return;
         }

         int mid=(low+high)/2;

         cout<<"Hmm..Is your number less than (l) , greater than (g), or equal to (e) "<<mid<<" ? ";
         char answer;
         cin>>answer;


         if(answer=='e')
         {
             cout<<"I win!\n";
             done=true;
         }
         else if(answer=='l')
         {
             high=mid-1;
         }
         else if(answer=='g')
         {
             low=mid+1;
         }
         else
         {
             cout<<"I dont understand.\n";
         }
         
         if(low>high)
         {
             cout<<"Hey ,you are cheating!\n";
             done=true;
         }
     }

     bool finished()
     {
         return done;
     }
 };
 int main()
 {
     cout<<"Welcome to the number guessing game\n";
     //Create an instance of the object number_game
     number_game game;
     //Start the game
     game.begin();
    //As long as the game doesnt end keep asking the user about his guess
     while(!game.finished())
     {
         game.ask();
     }

     return 0;
 }