#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of N upto which you want the pattern :";
    cin>>n;
    for(int row=1;row<=n;row++)
    {
        for(int space=(n-row);space>=1;space--)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    for(int row=n;row>=1;row--)
    {
        for(int space=1;space<=(n-row);space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}