// Name: Dawlat Hamad
// ID: GV5450
// Lab 10 - Rock Paper Scissors
// Source 1: My tutor: Meryem Y. 
// Source 2: https://www.w3schools.com/cpp/cpp_do_while_loop.asp
// Source 3: https://www.cs.stir.ac.uk/~kms/schools/rps/learnprob.pdf
// Source 4: http://www.datasmith.org/2020/05/17/ai-for-rock-paper-scissors/

#include <iostream>
using namespace std;

int main()
{
    //Declare Variables
    int user;
    int comp;
    char answer;

    //Intro
    cout << endl;
    cout << "The computer will play a game of Rock, Paper, Scissors with user." << endl;
    cout << endl;
	int thewheel[9] = {1,2,3,1,2,3,1,2,3};//list

    do 
    { 
        //Prompt user for input
        cout << "Rock, Paper, Scissors, Shoot: " << endl;
        cout << "Please Choose - 1)Rock 2)Paper 3)Scissor : ";
        cin >> user;
        cout << "You played: ";
        if(user == 1)
        {
            cout << "Rock" << endl;
        }
        else if (user == 2)
        {
            cout << "Paper" << endl;
        }
        else if (user == 3)
        {
            cout << "Scissors" << endl;
        }
        else
        {
            cout << "Invalid option, please read instructions carefully!" << endl;
        }

        //Computer Choice
        srand(time(NULL));
        comp = thewheel[rand() % 9];
        
        //Print Players choice
        cout << "Computer played: ";
        if(comp == 1)
        {
            cout << "Rock" << endl;
        }
        else if (comp == 2)
        {
            cout << "Paper" << endl;
        }
        else if (comp == 3)
        {
            cout << "Scissors" << endl;
        }

        //the updating of the "wheel"
        for(int i = 1; i < 9; i++)
        {
            thewheel[i] = thewheel[i - 1];
        }
      	if(user == 1)
        {
            thewheel[0] = 2;
        }
      	else if(user == 2)
        {
            thewheel[0] = 3;
        }
      	else if(user == 3)
        {
            thewheel[0] = 1;
        }

        //Outcomes      
        if (user == 1 && comp == 1) 
        {
            cout << "Tie!" << endl;
        }
        else if (user == 1 && comp == 2) 
        {
            cout << "Computer Wins!" << endl;
        }
        else if (user == 1 && comp == 3) 
        {
            cout << "You win!" << endl;
        }
        else if (user == 2 && comp == 1) 
        {
            cout << "You win!" << endl;
            
        }
        else if (user == 2 && comp == 2) 
        {
            cout << "Tie!" << endl;
            
        }
        else if (user == 2 && comp == 3) 
        {
            cout << "Computer Wins!" << endl;
        }
        else if (user == 3 && comp == 1) 
        {
            cout << "Computer Wins!" << endl;
        }
        else if (user == 3 && comp == 2) 
        {
            cout << "You win!" << endl;
        }
        else if (user == 3 && comp == 3) 
        {
            cout << "Tie!" << endl;
        }
        else
        {
            cout << "Default! You lose." << endl;
        }

        //Repeat rounds
        cout << endl;
        cout << "Would you like to play a game? (Y/N): ";
        cin >> answer;
        cout << endl;

    } while (answer == 'Y' || answer == 'y'); 

return 0;
}
