#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int decimal=0;
    int i=0;
    while(n!=0)
    {
        int rem=n%10;
        n=n/10;
        decimal=decimal+(rem * pow(2,i));
        i=i+1;
    }
    cout<<"Decimal Number of "<<n<<" is "<<decimal;
}