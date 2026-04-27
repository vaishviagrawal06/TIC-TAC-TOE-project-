#include <iostream>
using namespace std;

//declared global variable to track current player and marker 
int currentPlayer;
char currentMarker;

// 3x3 Tic Tac Toe board initialized with positions 1–9
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

// function to display board
void drawBoard()
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;

    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;

    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}
// Function to place marker on the board
bool placeMarker(int slot)
{
        // Convert slot (1–9) to row and column index
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    // Check if the slot is not already occupied
    if (board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = currentMarker;  //place marker
        return true;
    }
    else
        return false;  //slot already occupied
}

// Function to check if there is a winner
int winner()
{
    // rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return currentPlayer;
    }

    // column
    for (int j = 0; j < 3; j++)
    {
        if (board[0][j] == board[1][j] && board[1][j] == board[2][j])
            return currentPlayer;
    }

    // diagonally

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
    {
        return currentPlayer;
    }

    //anti diagonal
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return currentPlayer;
    }

    return 0;
}

//function to switch player and marker after each turn 
void swapPlayerAndMarker()
{
    //switch marker
    if (currentMarker == 'X')
    {
        currentMarker = 'O';
    }
    else
    {
        currentMarker = 'X';
    }

    //player switch 
    if (currentPlayer == 1)
    {
        currentPlayer = 2;
    }
    else
    {
        currentPlayer = 1;
    }
}

//main game function
void game()
{
    cout << "----------------WELCOME---------------- \n";
    cout << "--------TIC - TAC - TOE GAME-----------" << endl;

    // player one will choose  whether X OR O
    cout << "Player1 choose your marker : X OR O -> ";
    char markerP1;
    cin >> markerP1;

    currentPlayer = 1;
    currentMarker = markerP1;

    drawBoard();

    int PlayerWon;

    //max 9 possible
    for (int i = 0; i < 9; i++)
    {
        cout << "ITS PLAYER" << currentPlayer << "'s TURN ENTER YOUR SLOT:" << endl;
        int slot;
        cin >> slot;

        //validate slot range
        if (slot < 1 || slot > 9)
        {
            cout << "it is not a valid slot";
            i--; //retry
            continue;
        }

        if (!placeMarker(slot))
        {
            cout << "slot is occupied! try again:" << endl;
            i--;  //retry
            continue;
        }
        //update board
        drawBoard();
           // Check if current player won
        PlayerWon = winner();

        if (PlayerWon == 1)
        {
            cout << "Player 1 Wins!";
            break;
        }
        if (PlayerWon == 2)
        {
            cout << "Player 2 wins!";
            break;
        }

        swapPlayerAndMarker();
    }
     // If no winner after all moves → tie
    if (PlayerWon == 0)
    {
        cout << "Its a tie!";
    }
}
int main()
{
    game();

    return 0;
}