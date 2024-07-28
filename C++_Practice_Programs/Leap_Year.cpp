#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    if(n%400==0)
    {
        cout<<n<<" Is A Leap Year"<<endl;
    }
    else if((n%4==0) &&(n%100!=0))
    {
        cout<<n<<" Is a Leap Year"<<endl;
    }
    else
    {
        cout<<n<<" NOt a Leap Year"<<endl;
    }
        
        
       
}