#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array which should be greater than 3 :";
    cin>>n;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(INT32_MAX,'\n');

        cout<<"Invalid input!.........Please Enter an integer value::";
        cin>>n;
    }

    int a[n];
    cout<<"Enter the elements of an array:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int prev=-1;
    int max=INT32_MIN;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            prev=max;
            max=a[i];
        }
        else
        {
           if(a[i]>prev)
           {
            prev=a[i];
           }   
        }
    }
    cout<<"The Second largest element in the array is: "<<prev;
}