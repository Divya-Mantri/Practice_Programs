#include<iostream>
using namespace std;

int swap(int &c, int &d)
{
    c=(c+d);
    d=c-d;
    c=c-d;
    
};



int main()
{
    int a,b;
    cout<<"Enter the values of 3 variables:";
    cin>>a>>b;
    swap(a,b);
    cout<<"Value of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
    

}