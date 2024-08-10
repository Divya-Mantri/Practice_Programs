#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of an array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int min=INT32_MAX;
    int Second=-1;
    int Third=-1;

    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            Third=Second;
            Second=min;
            min=a[i];
        }
        else
        {
            if(a[i]<Second)
            {
                Third=Second;
                Second=a[i];
            }
            else if(a[i]<Third)
            {
                Third=a[i];
            }
        }
    }
    cout<<"The Third Smallest Element is : "<<Third;

}