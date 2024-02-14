// Name: Dawlat Hamad
// ID:   GV5450
// Lab 2 - Truth Table
// Source 1 - https://www.cplusplus.com/doc/tutorial/operators/ 
// ↑ used to understand how operators work in code
// Source 2 - https://code4coding.com/c-example-to-print-elements-of-an-array/
// ↑ used because I forgot how to print arrays

#include <iostream>
#include <cstdio>
using namespace std;

int main ()
{
    //Declare Variables
    int a[8] = {0, 0, 0, 0, 1, 1, 1, 1};
    int b[8] = {0, 0, 1, 1, 0, 0, 1, 1};
    int c[8] = {0, 1, 0, 1, 0, 1, 0, 1};

    //List the Functions
    cout << "F1 = (A ∧ B) ∨ (A ∧ C)\t" << endl;
    cout << "F2 = (A ∧ C) ∧ (B ∧ ¬C)\t" << endl;
    cout << "F3 = (A ∨ B) ∧ ¬(B ∨ C)\t" << endl;
    cout << "F4 = (A ∨ (B ∧ C)) ∧ ( ¬A ∧ ¬B)\t" << endl;
    cout << "F5 = ((B ∧ C) ∨ (C ∧ A)) ∧ ( ¬(A ∨ B) ∧ C)\n" << endl;

    //Print the Header
    cout << "A\tB\tC\tF1\tF2\tF3\tF4\tF5" << endl;;

    //Output the answers
    for (int i = 0; i < 8; i++)
    {
        cout << a[i] << "\t" << b[i] << "\t" << c[i] << "\t"; 
        cout << ((a[i] && b[i]) || (a[i] && c[i])) << "\t";
        cout << ((a[i] && c[i]) && (b[i] && !c[i])) << "\t";
        cout << ((a[i] || b[i]) && ( (!(b[i] || c[i])))) << "\t";
        cout << ((a[i] || (b[i] && c[i])) && ( (!a[i]) && (!b[i]))) << "\t";
        cout << (((b[i] && c[i]) || (c[i] && a[i])) && ( (!(a[i] || b[i])) && c[i])) << "\t";
        cout << endl; 
    }
    return 0;
}