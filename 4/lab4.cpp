// Name: Dawlat Hamad
// ID: GV5450
// Lab 4 - Base Converter
// Source 1: https://stackoverflow.com/questions/21832886/converting-letters-to-numbers-in-c
// Source 2: https://www.tutorjoes.in/cpp_programming_tutorial/convert_decimal_to_binary_using_while_loop_in_cpp


#include<iostream>
#include <cstdio>
using namespace std;

int main() 
{
    //Declare Variables
    int number;
    int base;
    int x;
    string letter;
    string answer;

    cout << endl;
    cout << "This program will take a given decimal number and output in the given base." << endl;

    // Prompt user for input
    cout << "Decimal Number: ";
    cin >> number;
    cout << "Base: ";
    cin >> base;

    // Converter: Base 10 to given base
    while (number != 0)
    {
        x = number % base;

        //For base 16, prints letters for 9 > x > 0
        if (x < 10)
        {
            letter = '0' + x;
        }
        else
        {
            letter = x - 10 + 'A';
        }
        answer = letter + answer;

        number /= base;                
    }

    // Prints Output
    cout << "Answer: " << answer << endl;
    cout << endl;

    return 0;
}