// Name: Dawlat Hamad
// ID: GV5450
// Lab 11 - The Heap Sort
// Source 1: https://cseweb.ucsd.edu/classes/wi05/cse101/impl1.pdf
// Source 2: https://www.youtube.com/watch?v=MtQL_ll5KhQ

#include <iostream>
using namespace std;
  
void heap(int arr[], int n, int i) 
{
	// Parent, Left child, Right child formulas
	int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
  
	// When left is larger than parent swap
    if (left < n && arr[left] > arr[largest])
	{
      largest = left;
	}
	// When Right is larger than parent swap
    if (right < n && arr[right] > arr[largest])
	{
      largest = right;
	}
    // Swap when parent isn't the largest
    if (largest != i) 
	{
      swap(arr[i], arr[largest]);
      heap(arr, n, largest);
    }
}
  
void Sort(int arr[], int n) 
{
    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
	{
      heap(arr, n, i);
	}
    for (int i = n - 1; i >= 0; i--) 
	{
      swap(arr[0], arr[i]);
      heap(arr, i, 0);
    }
  }
  
int main() 
{
    // Declare Variables
    int arr[7];
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    // Prompt for Input
    cout << endl;
    cout << "This program will sort given list (max 7) of data and sort through Max Heap Sort." << endl;
    cout << "Enter the list: ";
    for (i = 0; i < 7; i++)
    {
        cin >> arr[i];
    }

    // Max Heap Sort
    Sort(arr, n);
  
    //Print Output
    cout << "Sorted array is: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << endl;
    return 0;
}