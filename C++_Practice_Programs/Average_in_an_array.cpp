#include<iostream>
using namespace std;

int main()
{
    //Initializing an integer array of size 18 
    int numbers[18];
    cout<<"Enter the elements of an array:"<<endl;;

    //Reading elements of the array from the user
    for(int i=0;i<18;i++)
    {
        cin>>numbers[i];
    }

    //Initializing & Declaring integer variable sum with zero 
    int sum=0;

    //Initializing an integer variable name average to store average of the elements 
    int average;

    //Iterating throught the each element & adding it in sum variable
    for(int i=0;i<18;i++)
    {
        sum+=numbers[i];
    }

    //Calculating the average
    average=(sum/18);

    //Displaying Average on the screen
    cout<<"Average of the given elemetns is : "<<average;
    
}