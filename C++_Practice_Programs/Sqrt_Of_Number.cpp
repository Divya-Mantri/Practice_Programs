#include<iostream>
using namespace std;

 int sqrt(int n,int i)
     {
        int flag;
        for(i=0;i<=n;i++)
        {
            if(i!=0 && i>INT32_MAX/i)
            {
                flag=i-1;
                break;
            }
            if(i*i==n && i*i<=n)
            {
                return i;
            }
            else if(i*i>n)
            {
                return i-1;
            }
        }
     };

int main()
{
     int n;
     cout<<"Enter the number:";
     cin>>n;
     int i;
    cout<<"Sqrt is: "<<sqrt(n,i)<<endl;
}