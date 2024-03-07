#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout << "Hello there";


    cout << "Right angle triangle : \n";
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " " ; 
        }
        cout <<endl;

    }
    cout << endl;
    cout << "Reverse Right angle triangle : \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            cout <<"  " ; 
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* " ; 
        }
        cout <<endl;

    }

    cout << endl;
    cout << "Equilateral triangle : \n";

    for (int i = 0; i < 4; i++)
    {
        for (int j = 4; j > i; j--)
        {
            cout <<" " ; 
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*" << " " ; 
        }
        cout <<endl;

    }
    

    return 0;
}
