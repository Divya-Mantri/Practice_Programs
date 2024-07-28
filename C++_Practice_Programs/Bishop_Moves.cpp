#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of row :";
    cin>>a;
    cout<<"Enter the value of column:";
    cin>>b;

    int top_left,top_right,bottom_left,bottom_right;
    int total;
    
    if(abs(1-a)<(abs(1-b)))
    {
         top_left=abs(1-a);
    }
    else
    {
         top_left=abs(1-b);
    }
    
    if(abs(1-a)<(abs(8-b)))
    {
         top_right=abs(1-a);

    }
    else
    {
         top_right=abs(8-b);
    }

    if(abs(8-a)<(abs(1-b)))
    {
         bottom_right=abs(8-a);
    }
    else
    {
         bottom_right=abs(1-b);
    }
    
    if(abs(8-a)<(abs(8-b)))
    {
         bottom_left=abs(8-a);
    }
    else
    {
         bottom_left=abs(8-b);
    }
   

    total=top_left+top_right+bottom_right+bottom_left;
    cout<<"Number of moves bishop can  is :"<< total;
    
}