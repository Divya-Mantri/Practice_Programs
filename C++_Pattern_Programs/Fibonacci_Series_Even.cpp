#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    int prev=0;
    int curr=1;
    int final=0;
    int sum=0;

    while(final<n)
    {
        final=prev+curr;
        prev=curr;
        if(curr%2==0)
        {
            sum=sum+curr;
        }
        curr=final;
    }
   cout<<"The sum is :"<<sum<<endl;
}