// Name: Dawlat Hamad
// ID: GV5450
// Lab 6 - The Bubble Sorter

#include<iostream>
using namespace std;

int main()
{
    //Declare Variables
    int a[10];
    int i;
    int j;
    int swap;
    int count = 0;

    // Prompt for input
    cout << endl;
    cout << "This is a Bubble Sort Algorithm that also counts number of actions taken to sort." << endl;
    cout << "Comparing two integers counts as 1 action. Swapping two integers counts as 3 actions." << endl << endl;
    cout << "Enter 10 integers: " << endl;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }

    cout << endl;

    // Sort the input
    for (i = 0; i < 10; i++)
    {
        
        for (j = 0; j < (10 - i - 1); j++)
        {
            count++; 
            if (a[j] > a[j+1]) //Swap the numbers
            {
                swap = a[j];
                count++;
                a[j] = a[j+1];
                count++;
                a[j + 1] = swap;
                count++;
            }  
        }
    }

    //Print output
    cout << "Sorted List: " << endl;
    for (i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    //Outputs actions to sort
    cout << "- " << count << " Actions Preformed" << endl; 
    cout << endl << endl;
}