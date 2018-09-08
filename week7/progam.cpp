
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PLAYER1 = 0;
const int PLAYER2 = 1;
const int WINNING_SCORE = 100;


//FIXME (1): Implement the printIntro function
  void printIntro() {
        string player1name;
        string player2name;
        
     cout << "Welcome to the dice game Pig!" << endl;
     cout << "The objective is to be first to score 100 points."  << endl;
     cout << endl;
     cout << "Player 1 - Enter your name: " << player1name << endl;
     cout << "Player 2 - Enter your name: " << player2name << endl;

    return;
   }

//FIXME (4, 5, 6): Implement the humanTurn function
int humanTurn(string player1name, int player1score) {
    char userInput = '-';
    int dieRoll = 5;
    int oldscore = player1score;

while ((userInput != 'n') && (dieRoll > 1) && (player1score < 100)) {
  
    dieRoll =  ((rand() % 6) + 1);
    if (dieRoll > 1) {
    player1score =  dieRoll + player1score;
    cout << player1name << endl;
    cout << "You rolled a " << dieRoll << endl;
    cout << "Your score: " << player1score << endl;
    if (player1score < 100) {
        
    cout << "Do you want to roll again? (y/n): " << endl;
     cin >> userInput;
    }
    else {
    }
    }
    
    else { 
    cout << player1name << endl;
    cout << "You rolled a 1 (PIG!)" << endl;
    cout << "Your turn is over" << endl;
    cout << "Your score: "<< oldscore << endl;
    cout << endl;
    return oldscore;
    } 
}
   return player1score;

}

int main() {
    srand(4444);

    // setup and initialize variables
    int turn = PLAYER1;
    int player1score = 0;
    int player2score = 0;
    string player1name;
    string player2name;

    printIntro();

    // FIXME (2): get names of players
    cin >> player1name;
    cin >> player2name;



    //play game
    while (player1score < WINNING_SCORE && player2score < WINNING_SCORE) {

        //player 1's turn or player 2's turn
        if (turn == PLAYER1) {
            player1score = humanTurn(player1name, player1score);
        }
        else {
            player2score = humanTurn(player2name, player2score);
        }

        
        //FIXME (3): switch whose turn it is
    if (turn == PLAYER1) {
      turn = PLAYER2;
      }
      
      else {
         turn = PLAYER1;
      }
      }
    // FIXME (7): Output who won the game.
   if (player1score >= 100) {
       cout << endl;
      cout << player1name << " wins!";
      cout << endl;
   }
   else if (player2score >= 100) {
       cout << endl;
      cout << player2name << " wins!";
      cout << endl;
    return 0;
   }
 
}