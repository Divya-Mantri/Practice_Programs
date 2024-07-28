#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    int zeros=0;
    while(n>=5)
    {
        n=n/5;
        zeros=zeros+n;
    }
    cout<<"Number of zeros is:"<<zeros<<endl;
}