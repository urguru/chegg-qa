#include <bits/stdc++.h>
using namespace std;
void printboggleutil(vector<string> s,int n,string carray[10][10],int u,int v,bool visited[10][10],string &word,int row,int col)
{
    if(row>=u || col>=v || visited[row][col] ||row<0 ||col<0)
    return;

    visited[row][col]=true;
    word=word+carray[row][col];
    for(int i=0;i<s.size();++i)
    {
        if(s[i]==word)
        {
            cout<<word<<" ";
            s.erase(s.begin()+i);
        }
    }
    for(int i=row-1;i<=row+1 && i<u;++i)
    {
        for(int j=col-1;j<=col+1 && j<v;++j)
        {
            if(i>=0 && j>=0 && !visited[i][j])
            {
                printboggleutil(s,n,carray,u,v,visited,word,i,j);
            }
        }
    }
    word.erase(word.length()-1);
    visited[row][col]=false;
}
void printboggle(vector<string> s,int n,string carray[10][10],int u,int v)
{
    bool visited[10][10];
    memset(visited,false,sizeof(visited));
    string word="";

    for(int i=0;i<u;++i)
    {
        for(int j=0;j<v;++j)
        {
            printboggleutil(s,n,carray,u,v,visited,word,i,j);
        }
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string z;
	    vector<string> s;
	    for(int i=0;i<n;++i)
	    {
	        cin>>z;
	        s.push_back(z);
	    }
	    int u,v;
	    cin>>u>>v;
	    string carray[10][10];
	    for(int i=0;i<u;++i)
	    for(int j=0;j<v;++j)
	    cin>>carray[i][j];
	    printboggle(s,n,carray,u,v);
	}
	return 0;
}
