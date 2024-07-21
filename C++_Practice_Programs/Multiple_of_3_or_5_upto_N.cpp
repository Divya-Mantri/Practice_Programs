#include<iostream>
using namespace std;

int main()
{
    int t;
    cout<<"Enter the test cases:";
    cin >> t;
    int sum1,diff;

    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        cout<<"enter the number:"<<endl;
        cin >> n;
        sum1=0;
        diff=0;
        int mul=n;
        int i=1;
        while((3*i<mul) || (5*i<mul))
        {
            if(3*i<mul)
            sum1=sum1+3*i;
            if(5*i<mul)
            sum1=sum1+5*i;
            if(15*i<mul)
            {
                diff=diff+15*i;
            }
            i=i+1;
        }

        
        cout<<"Sum is:"<<sum1-diff<<endl;

    

    
      


        


    }
    return 0;
}
    
    
