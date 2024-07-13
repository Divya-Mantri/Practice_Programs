#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int row=n;row>=1;row--)
    {
        for(int col=1;col<=(n-row)+1;col++)
        {
            cout<<"*";
        }
        for(int space=1;space<=(2*row)-2;space++)
        {
            cout<<" ";
        }
        for(int col=1;col<=(n-row)+1;col++)
        {
            cout<<"*";
        } 
        cout<<endl;
    }
    for(int row=n;row>=1;row--)
    {
        for(int col=row-1;col>=1;col--)
        {
            cout<<"*";
        }
        for(int space=1;space<=(2*(n-(row-1)));space++)
        {
            cout<<" ";
        }
         for(int col=row-1;col>=1;col--)
        {
            cout<<"*";
        }

        cout<<endl;
    }


    return 0;
}