#include <iostream>
using namespace std;

int main()
{
    char firstPerson, secondPerson;

    do
    {
        cout << "Enter the choosen move by person 1 (i.e. either R,P or S) :" << endl;
        cin >> firstPerson;
        cout << "Enter the choosen move by person 2 (i.e. either R,P or S) :" << endl;
        cin >> secondPerson;

        if(firstPerson!='R' && firstPerson!='P'&& firstPerson!='S'&& firstPerson!='E')
        {
            cout<<"Please Enter the valid input!"<<endl;
        }
        else if(secondPerson!='R' && secondPerson!='P' && secondPerson!='S'&& secondPerson!='E')
        {
            cout<<"Please Enter the valid input!"<<endl;
        }

        switch (firstPerson)
        {
        case 'R':
        {

            if (secondPerson == 'P')
            {
                cout << "Second One Won!" << endl;
            }
            else if (secondPerson == 'S')
            {
                cout << "First One Won!" << endl;
            }
            else
            {
                cout << "It's a Tie!" << endl;
            }
        }
        break;

        case 'P':
        {
            if (secondPerson == 'S')
            {
                cout << "Second one Won!" << endl;
            }
            else if (secondPerson == 'R')
            {
                cout << "First One Won!" << endl;
            }
            else
            {
                cout << "It's a Tie!" << endl;
            }
        }
        break;

        case 'S':
        {
            if (secondPerson == 'P')
            {
                cout << "First one Won!" << endl;
            }
            else if (secondPerson == 'R')
            {
                cout << "Second one Won!" << endl;
            }
            else
            {
                cout << "Its a Tie" << endl;
            }
        }
        break;

        case 'E':
        {
            cout << "Exiting from the Game!............Thanks for playing:)" << endl;
        }
        break;
        }
    } while (firstPerson != 'E');

    return 0;
}