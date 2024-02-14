// Name: Dawlat Hamad
// ID: GV5450
// Lab 9 - Hamming Code
// Source 1: https://www.youtube.com/watch?v=AGo8MP1xgVk
// Source 2: https://www.geeksforgeeks.org/how-to-concatenate-two-integer-values-into-one/amp/

#include <iostream>
#include <string>
using namespace std;

//Creates a binary number form the bits - four int to one
//Concatenate function
int concat(int a, int b, int c, int d)
{
    //int to string
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(c);
    string s4 = to_string(d);

    //Concatenate strings
    string s = s1 + s2 + s3 + s4;

    //Convert string to int
    int m = stoi(s);
    
    return m;
}

//Binary to Decimal Function
int Bin2Dec(int num)
{
    //Declare Variables
    int dec = 0;
    int base = 1;
    int rem;
    int temp = num;

    //Convert loop
    while (temp) 
    {
        rem = temp % 10;
        temp = temp / 10;
        dec += rem * base;
        base = base * 2;
    }
 
    return dec;
}

int main ()
{
    //Declare Variables
    int c[10];
    int p1;
    int p2;
    int p4;
    int totalp;

    //Prompt user for input
    cout << endl;
    cout << "This program will take a 7-bit code and check for errors using Hamming code. " << endl;
    cout << "Enter the 7-bit code: ";
    for (int i = 1; i < 8; i++)
    {
        cin >> c[i];
    }

    //Parity Check
    p1 = c[1] ^ c[3] ^ c[5] ^ c[7];
    p2 = c[2] ^ c[3] ^ c[6] ^ c[7];
    p4 = c[4] ^ c[5] ^ c[6] ^ c[7];
    totalp = p1*1 + p2*2 + p4*4;

    if (totalp == 0)
    {
        cout << "No errors found." << endl;
    }
    else 
    {
        cout << "Error found in bit: " << totalp << endl;
        cout << "Correct code is:";

        //Correct Error bit
        if (c[totalp] == 0)
        {
            c[totalp] = 1;
        }
        else 
        {
            c[totalp] = 0;
        }
        for (int i = 1; i < 8; i++)
        {
            cout << " " << c[i];
        }
        cout << endl;
    }

    //Print Output
    cout << "The Binary Number recieved is: ";
    cout << c[3] << c[5] << c[6] << c[7] << endl;
    cout << "The Decimal Number is: ";
    cout << Bin2Dec(concat(c[3], c[5], c[6], c[7])) << endl;
    cout << endl;
    return 0;
}