#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int Squares=0;
    for(int i=1;i<=N;i++)
    {
        Squares=Squares+i*i;
    }

    cout<<Squares;
}