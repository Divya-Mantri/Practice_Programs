#include<iostream>
using namespace std;

int main()
{
    //Initializing an integer variable n for storing size of an array
    int n;
    cout<<"Enter the size of array: ";
    //Taking input from the user
    cin>>n;

    //Checking if the array size is greater than 1 or not 
    if(n<=0)
    {
        cout<<"Array size must be greater than zero!"<<endl;
        return 1;
    }

    //Initializing an integer array of size n
    int a[n];
    cout<<"Enter the elements of array:";

    //Reading input from the user
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //Initializing an integer variable x for storing the element whose index we have to find 
    int x;
    cout<<"Enter the elements you want to find:";
    //Taking input from the user 
    cin>>x;

    //Initializing an integer variable index to store the index value of the element , Declaring it with value -1 as -1 cannot be the index of any element 
    int index=-1;

    //Iterating through the array elements 
    for(int i=0;i<n;i++)
    {
        // Checking if the element's value is matching with any element of the array
        if(a[i]==x)
        {
            //if it is then assigning it to index variable & break the loop
            index=i;
            break;
        }
    }

    // Now Checking if the index value is not equal to -1 as we declared if it is not means we found the element at an index and displaying it on the screen else display error message 
    if(index!=-1)
    {
        cout<<"Index of the given element is: "<<index;
    }
    else
    {
        cout<<"The given element is not present in the array!"<<endl;
    }
    



}