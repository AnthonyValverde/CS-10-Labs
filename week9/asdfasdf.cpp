#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen() {
    cout << endl;

    if (CLEAR_SCREEN) {
        cout << "\033c";
    }

    cout << endl;

    return;
}


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
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



/// @brief Fills vector with characters starting at lower case a.
///
///     If the vector is size 3 then it will have characters a to c.
///     If the vector is size 5 then it will have characters a to e.
///     If the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &v) {

                                                                                    // TODO: implement function
    unsigned int i = 0;
    
    for(i = 0; i < v.size(); ++i)
    {
        char letter = 'a';  
        v.at(i) =  letter + i;
    }
    return;
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char boardPosition) {

                                                                                    // TODO: implement function
    int cell = boardPosition;
    char userLetter = 'a';
    int deez = cell - userLetter;
    
    return deez;
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {

                                                                                    // TODO: implement function
    int boardSize = gameBoard.size();                                                                                
    if( positionIndex > boardSize)
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

/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector<char> &gameBoard) {


    char boardPosition = ' ';
    cout << "Please choose a position: ";
    cin >> boardPosition;
    
    while( validPlacement(gameBoard, convertPosition(boardPosition) == false))
    {
        cout << "Please choose a position: ";
        cin >> boardPosition;
        
        cout << endl;
    }
    
    cout << endl;

    return convertPosition( boardPosition);
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector<char> &gameBoard) {

                                                                                    // TODO: implement function
    unsigned int i = 0;
    for ( i = 0; i < gameBoard.size(); ++i)
    {
        if(gameBoard.at(i) == gameBoard.at(i) && gameBoard.at(i + 1) && gameBoard.at(i + 2))
        {
            return true;
        }
        else if(gameBoard.at(i) == gameBoard.at(i) && gameBoard.at(i + 3) && gameBoard.at(i + 6))
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
    return false;
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector<char> &gameBoard) 
{
    char charA = 'a';
    char character;
    unsigned int i = 0;
    for(i =0; i < gameBoard.size(); ++i)
    {
        character = charA + i;
        if(gameBoard.at(i) == character)
        return false;                   
    }
                                                                                    // TODO: i