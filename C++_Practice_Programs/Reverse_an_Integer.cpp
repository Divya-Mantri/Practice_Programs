#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;

    //Loop for inversing an integer 
    int sum=0;
    
    while(n!=0)
    {
        int rem=n%10;
        n=n/10;
        sum=sum*10+rem;

    }
    cout<<"The Reverse of an Integer is:"<<sum<<endl;
}