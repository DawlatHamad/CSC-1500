// Name: Dawlat Hamad
// ID: GV5450
// Lab 5 - Operation Counting

#include <iostream>
using namespace std;

int main() 
{
    // Declare Variables 
    int x;
    int loop_sum = 0;
    int formula_sum = 0;
    int count = -1;

    // Prompt for input
    cout << endl;
    cout << "This program will find the natural sum of all the numbers between 1 and given number." << endl;
    cout << "Enter a positive integer: ";
    cin >> x;
    cout << endl;

    // Natural Sum through looping
    for (int i = 1; i <= x; i++) 
    {
        loop_sum += i;
        count++;
    }

    // Natural Sume through formula
    formula_sum = ((x * (x + 1)) / 2);

    // Print output
    cout << "LOOP OUTPUT" << endl;
    cout << "Sum = " << loop_sum << "\t";
    cout << "Number of Operators = " << count << endl;
    cout << endl;
    cout << "Formula OUTPUT" << endl;
    cout << "Sum = " << formula_sum << "\t";
    cout << "Number of Operators = 3" << endl;
    cout << endl;
    return 0;
}