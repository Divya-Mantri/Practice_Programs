#include<iostream>
using namespace std;

int main()
{
     int n;
     cout<<"Enter the number:";
     cin>>n;
     int flag=1;

     while(n!=1)
     {
        if(n%2==1)
        {
        flag=0;
        break;
        }
        n=n/2;
     }

     if(flag==1)
     {
        cout<<"Yes"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
}