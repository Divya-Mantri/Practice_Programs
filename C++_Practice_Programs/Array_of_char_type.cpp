#include<iostream>
using namespace std;

int main()
{
    //Intialize the array of charcters with variable name c  
    char c[26];
    cout<<"Enter the lowercase alphabets from a to z :";

    

    //Taking input from the user & ensuring user should enter valid letter  in any order   
    // for(int i=0;i<26;i++)
    // {
    //     cin>>c[i];
    //     while(c[i]<'a' || c[i]>'z')
    //     {
    //         cout<<"Please Enter the valid letter!"<<endl;
    //         cin>>c[i];
    //     }
    // }

    //If we want to ensure user should enter the alphabet series in order 
    for(int i=0;i<26;i++)
    {
        cin>>c[i];

        while(c[i]!='a'+i)
        {
            cout<<"Please enter the valid alphabet letter!"<<endl;
            cin>>c[i];
        }
    }

    //Print the entered value by the user on output screen 
    cout<<"Elements of the array entered by the user are :"<<endl;

    for(int i=0;i<26;i++)
    {
        cout<<c[i]<<" ";  
    }
}