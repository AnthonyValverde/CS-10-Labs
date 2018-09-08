#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

void clearScreen() {
    cout << endl;

    if (CLEAR_SCREEN) {
        cout << "\033c";
    }

    cout << endl;

    return;
} 
void drawBoard(const vector < char >&gameBoard) {
    clearScreen();
    for (int i = 0; i < 9; i += 3) {
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6) {
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;

    return;
}


void initVector(vector <char> &v) {
   unsigned int i = 0 ;
    if (v.size() < 26 ) {
            for(i = 0; i < v.size(); ++i) {
                v.at(i) = 'a' + i;
            }
    
    }    return;
}

int convertPosition(char boardPosition) {
   int cell = boardPosition - 'a'; 
    // TODO: implement function
    return cell; 
}
bool validPlacement(const vector<char>  &gameBoard, unsigned int positionIndex) {
    
    // TODO: implement function                                                             
    if( positionIndex > gameBoard.size())
    {
        return false;
    }
    if ( gameBoard.at(positionIndex ) == 'X' || gameBoard.at(positionIndex) == 'O')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int getPlay(const vector<char> &gameBoard) {
    // TODO: implement function
    char boardPosition = ' ';

    do {
    cout << "Please choose a position: ";
    cin  >> boardPosition;
    cout << endl;
    }
    while (!validPlacement(gameBoard, convertPosition(boardPosition)));
    return convertPosition(boardPosition);
}

bool gameWon(const vector<char> &gameBoard) {
  
    unsigned int i = 0;
    
    for (i = 0; i <= 2; ++i)
    {
    if (gameBoard.at(i) == 'O'){
        if (gameBoard.at(i + 3) == 'O' && gameBoard.at(i+6) == 'O') {
        return true;
    }
    else if (i == 0 && gameBoard.at(i + 4) == 'O' && gameBoard.at(i + 8) == 'O') {
                return true;
    }
    else if (i == 2 && gameBoard.at(i + 2) == 'O' && gameBoard.at(i + 4) == 'O') {
        return true;
    }
    }
    if ((gameBoard.at(2) == 'O') && (gameBoard.at(4) == 'O') && (gameBoard.at(6) == 'O')){
        return true;
    }
         if ((gameBoard.at(2) == 'X') && (gameBoard.at(4) == 'X') && (gameBoard.at(6) == 'X')){
        return true;
    }
    
    if (gameBoard.at(i) == 'X'){
        if (gameBoard.at(i+3) == 'X' && gameBoard.at(i+6) == 'X') {
        return true;
    }
    else if (i == 0 && gameBoard.at(i + 4) == 'X' && gameBoard.at(i + 8) == 'X') {
        return true;
    }
    else if (i == 2 && gameBoard.at(i+2) == 'O' && gameBoard.at(i+4) == 'O') {
        return true;
            }
        }
    }
    
for (i = 0; i < gameBoard.size(); i += 3) {
    if ((gameBoard.at(i) == 'X') && (gameBoard.at(i+1) == 'X') && (gameBoard.at(i+2) == 'X')) {
        return true;
    }
    if ((gameBoard.at(i) == 'O') && (gameBoard.at(i+1) == 'O') && (gameBoard.at(i+2) == 'O')) {
        return true;
    }
}
    
    return false;
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector<char> &gameBoard) {
  int numFull = 0;
  unsigned int i = 0;
    for (i = 0; i < gameBoard.size(); ++i) {
        if ((gameBoard.at(i) == 'X') || (gameBoard.at(i) == 'O')) {
            
             numFull = numFull + 1;
             }
    } 
    if (numFull == 9) {
        return true;
    }
    else {
    return false;
    }
}
// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
    
vector<char> gameBoard(9);
int whosTurn = PLAYER1; 
   
    initVector(gameBoard);
    drawBoard(gameBoard);

while ((boardFull(gameBoard) != true)  && (gameWon(gameBoard) != true)) { 
    if (whosTurn == PLAYER1) {
      gameBoard.at(getPlay(gameBoard)) = 'X';
        }
    else {
    gameBoard.at(getPlay(gameBoard)) = 'O';
    }
        
    if (whosTurn == PLAYER1) {
    whosTurn = PLAYER2;
    }
    
    else {
    whosTurn = PLAYER1;
        }
        drawBoard(gameBoard);
    }

 if (gameWon(gameBoard) == true) {
     if (whosTurn == 1) {
         cout << "PLAYER 1 WINS!" << endl;
     }
     if (whosTurn == 0) {
         cout << "PLAYER 2 WINS!" << endl;
     }
 }
 if (boardFull(gameBoard) == true) {
     cout << "No one wins";
 }

    return 0;
}