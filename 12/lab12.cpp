// Name: Dawlat Hamad 
// ID: GV5450
// Lab 12 - Final Flashback
// Copy and paste of my other labs wit some adjustments.

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm> 
#include <vector>
using namespace std;

//For Lab 9 Question 3)
int concat(int a, int b, int c, int d)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = to_string(c);
    string s4 = to_string(d);
    string s = s1 + s2 + s3 + s4;
    int m = stoi(s);
    return m;
}

//For Lab 9 Question 3)
int Bin2Dec(int num)
{
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

int main()
{
    //Lab 7 - Brute Force (Question 1)
    int key;
    string cipher;
    string ch;
    cout << endl;
    cout << "---Question 1---" << endl;
    cout << "Enter cipher to decode: ";  
    getline(cin, cipher);
    for(key = 1; key <= 26; key++)
    {
        ch = "";
        cout << key << ") ";
        for(int i = 0; i < cipher.size(); i++)
        {
            if(isupper(cipher[i]))
            {
                ch += char (int (cipher[i] + key - 'A') % 26 + 'A');
            }
            else if(islower(cipher[i]))
            {
                ch += char (int (cipher[i] + key - 'a') % 26 + 'a');
            }
            else
            {
                ch += cipher[i];
            }
        }
        cout << ch << endl;
    }

    //Lab 4 - Base Converter (Question 2)
    int number;
    int base;
    int x;
    string letter;
    string answer;
    cout << endl;
    cout << "--Question 2---" << endl;
    cout << "Decimal Number: ";
    cin >> number;
    cout << "Base: ";
    cin >> base;
    while (number != 0)
    {
        x = number % base;
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
    cout << "Answer: " << answer << endl;

    //Lab 9 - Hamming Code (Question 3)
    int c[10];
    int p1;
    int p2;
    int p4;
    int totalp;
    cout << endl;
    cout << "--Question 3---" << endl;
    cout << "Enter the 7-bit code: ";
    for (int i = 1; i < 8; i++)
    {
        cin >> c[i];
    }
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
    cout << "The Binary Number recieved is: ";
    cout << c[3] << c[5] << c[6] << c[7] << endl;
    cout << "The Decimal Number is: ";
    cout << Bin2Dec(concat(c[3], c[5], c[6], c[7])) << endl;

    //Lab 8 - Set Theory (Question 4)
    int U[ ] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; 
    int A[ ] = {1,2,3,5,8,13};
    int B[ ] = {1,3,5,7,9,11,13,15,17,19};
    int C[ ] = {1,2,3,5,7,11,13,17,19};
    vector<int> v1(20); 
    vector<int>::iterator it1;
    vector<int> v2(20); 
    vector<int>::iterator it2;
    sort (U, U+20);
    sort (A, A+6); 
    sort (B, B+10); 
    sort (C, C+9);
    cout << endl;
    cout << "---Question 4---" << endl;
    cout << "Set U: 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20" << endl;
    cout << "Set A: 1 2 3 5 8 13" << endl;
    cout << "Set B: 1 3 5 7 9 11 13 15 17 19" << endl;
    cout << "Set C: 1 2 3 5 7 11 13 17 19" << endl;
    cout << "(A union B) intersect C:";
    it1 = set_union (A, A+6, B, B+10, v1.begin());
    v1.resize(it1 - v1.begin()); 
    it2 = set_intersection (v1.begin(), v1.end(), C, C+9, v2.begin());
    v2.resize(it2 - v2.begin());
    for (it2 = v2.begin(); it2 != v2.end(); ++it2)
    {
        if(*it2 == 0)
        {
            cout << " EMPTY SET";
        }
        else 
        {
            cout << ' ' << *it2;
        }
    }
    cout << endl;

    //Lab 2 - Truth Table (Question 5)
    int lista[8] = {0, 0, 0, 0, 1, 1, 1, 1};
    int listb[8] = {0, 0, 1, 1, 0, 0, 1, 1};
    int listc[8] = {0, 1, 0, 1, 0, 1, 0, 1};
    cout << endl;
    cout << "---Question 5---" << endl;
    cout << "!(A XOR C) NAND (B OR A)\t" << endl;
    cout << "A\tB\tC\tT" << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << lista[i] << "\t" << listb[i] << "\t" << listc[i] << "\t"; 
        cout << (!((!(lista[i] ^ listc[i])) & (listb[i] | lista[i]))) << "\t";
        cout << endl; 
    }

    cout << endl;
    return 0;
}