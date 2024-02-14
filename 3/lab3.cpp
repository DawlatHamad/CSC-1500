// Name: Dawlat Hamad
// ID: GV5450
// Lab 3 - Validator
// Repurposed a majority of Lab 2 changed what need to be changed

#include <iostream>
//#include <cstdio>
using namespace std;

int main ()
{
    //Declare Variables
    int r[16] = {0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
    int a[16] = {0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1};
    int h[16] = {0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1};
    int e[16] = {0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};


    //List the Functions
    cout << "P1 = If someone has a rocket, that implies they are an astronaut.\t" << endl;
    cout << "P2 = If someone is an astronaut, that implies they are highly trained.\t" << endl;
    cout << "P3 = If someone is highly trained, that implies they are educated.\t" << endl;
    cout << "C1 = A person is educated, that implies they have a rocket.\t" << endl << endl;
    cout << "R = rocket, A = astronaut, H = highly trained, E = educated" << endl << endl;

    //Print the Header
    cout << "R\tA\tH\tE\tP1\tP2\tP3\tC1" << endl;

    //Output the answers
    for (int i = 0; i < 16; i++)
    {

        //Print Truth Table
        cout << r[i] << "\t" << a[i] << "\t" << h[i] << "\t" << e[i] << "\t"; 
        cout << ((!r[i])|| a[i]) << "\t";
        cout << ((!a[i])|| h[i]) << "\t";
        cout << ((!h[i])|| e[i]) << "\t";
        cout << ((!e[i])|| r[i]) << "\t";
    
        //Print Invalid Statements
        if (((!r[i])|| a[i]) == 1 && ((!a[i])|| h[i]) == 1 && ((!h[i])|| e[i]) == 1 && ((!e[i])|| r[i]) == 0)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            cout <<  endl;
        }

    }
    return 0;
}