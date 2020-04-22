#include<bits/stdc++.h>
using namespace std;
vector<int> cboard(vector<int> scores,vector<int> alice)
{
    int rank_pointer=0;
    int scores_pointer=0;
    int alice_pointer=alice.size()-1;
    vector<int> result;
    while(result.size()<alice.size())
    {
        if(alice[alice_pointer]>=scores[scores_pointer])
        {
            if(scores_pointer==scores.size())
                result.push_back(rank_pointer);
            else
                result.push_back(rank_pointer);
            alice_pointer--;
        }
        else
        {
            while(scores[scores_pointer]==scores[scores_pointer+1])
            {
                scores_pointer++;
            }
            rank_pointer++;
            scores_pointer++;
        }
    }
    return result;
}
