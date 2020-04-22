#include<bits/stdc++.h>
using namespace std;
int maxHeight(int height[],int width[],int length[],int n);
int main()
{
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;

 	int A[1000],B[1000],C[10001];
	for(int i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		A[i]=a;
		B[i]=b;
		C[i]=c;
	}
	cout<<maxHeight(A,B,C,n)<<endl;
}

}
/*This is a function problem.You only need to complete the function given below*/
/*The function takes an array of heights, width and
length as its 3 arguments where each index i value
determines the height, width, length of the ith box.
Here n is the total no of boxes.*/
struct box{
        int h,w,l;
    };
bool cmp(box b1,box b2)
{
    return (b1.l*b1.w)>(b2.w*b2.l);
}
int maxHeight(int height[],int width[],int length[],int n)
{
    //Your code here
    box  b[n*3];
    for(int i=0;i<n;++i)
    {
        int index=i*3+0;
        b[index].h=height[i];
        b[index].w=width[i];
        b[index].l=length[i];

        index++;

        b[index].h=width[i];
        b[index].w=length[i];
        b[index].l=height[i];

        index++;

        b[index].h=length[i];
        b[index].w=height[i];
        b[index].l=width[i];
    }
    for(int i=0;i<3*n;++i)
    {
        //cout<<b[i].l<<" "<<b[i].w<<" "<<b[i].h<<endl;
    }
    sort(b,b+3*n,cmp);
    for(int i=0;i<3*n;++i)
    {
        //cout<<b[i].l<<" "<<b[i].w<<" "<<b[i].h<<endl;
    }
    int max_height[3*n];
    for(int i=0;i<3*n;++i)
        max_height[i]=b[i].h;
    for(int i=1;i<3*n;++i)
    {
        for(int j=0;j<i;++j)
        {
            if(b[i].w<b[j].w && b[i].h<b[j].h && max_height[i]<max_height[j]+b[i].h)
            {
                max_height[i]=max_height[j]+b[i].h;
            }
        }
    }
    int maximum=INT_MIN;
    for(int i=0;i<3*n;++i)
    {
        maximum=max(maximum,max_height[i]);
        cout<<maximum<<endl;
    }
    return maximum;
}
