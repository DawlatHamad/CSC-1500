// Name: Dawlat Hamad 
// ID: GV5450
// Lab 7 - Brute Force
// Source 1: https://www.khanacademy.org/computing/computer-science/cryptography/ciphers/a/shift-cipher
// Source 2: https://www.geeksforgeeks.org/isupper-islower-application-c/
// Source 3: https://www.geeksforgeeks.org/modulo-operator-in-c-cpp-with-examples/
// This is my second method, I'm still figuring out how to get my method from the test to work. Until then I'll submit this.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    //declare variables
    int i;
    int key;
    string cipher;
    string ch;

    //prompt for input
    cout << endl;
    cout << "Enter cipher to decode: ";  
    getline(cin, cipher);
    

    //loop
    for(key = 1; key <= 26; key++)
    {
        ch = "";
        cout << key << ") ";
    
        for(int i = 0; i < cipher.size(); i++)
        {
            //Lower Letters
            if(isupper(cipher[i]))
            {
                ch += char (int (cipher[i] + key - 'A') % 26 + 'A');
            }
                
            //Upper Letters
            else if(islower(cipher[i]))
            {
                ch += char (int (cipher[i] + key - 'a') % 26 + 'a');
            }
            
            //Non-Letters
            else
            {
                ch += cipher[i];
            }
        }
            
        //Print Output
        cout << ch << endl;
    }
    cout << endl;
    return 0;
}