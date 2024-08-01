#include<iostream>
using namespace std;

int main()
{
    //Initializing the integer array of size 20 
    int arr[20];
    cout<<"Enter the elements of an array:";

    //Taking the input from the user 
    for(int i=0;i<20;i++)
    {
        cin>>arr[i];
    }

    //Intializing & declaring the variable sum of integer type with value 0 so that it doesn't pick up any garbage value 
    int sum=0;

    //Iterating through all the elements 
    for(int i=0;i<20;i++)
    {
        //Adding each value in sum variable during every iteration
        sum+=arr[i];
    }

    //Displaying the sum of array elements on the screen 
    cout<<"Sum of Array elements is: "<< sum<<endl;
}