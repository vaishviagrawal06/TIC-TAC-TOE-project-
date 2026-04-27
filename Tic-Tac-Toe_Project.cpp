#include <iostream>
using namespace std;

int currentPlayer;
char currentMarker;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void drawBoard()
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << endl;
    cout << "---|---|---" << endl;

    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << endl;
    cout << "---|---|---" << endl;

    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << endl;
}

bool placeMarker(int slot)
{
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = currentMarker;
        return true;
    }
    else
        return false;
}

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

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
    {
        return currentPlayer;
    }

    return 0;
}

void swapPlayerAndMarker()
{
    if (currentMarker == 'X')
    {
        currentMarker = 'O';
    }
    else
    {
        currentMarker = 'X';
    }
    if (currentPlayer == 1)
    {
        currentPlayer = 2;
    }
    else
    {
        currentPlayer = 1;
    }
}

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
    for (int i = 0; i < 9; i++)
    {
        cout << "ITS PLAYER" << currentPlayer << "'s TURN ENTER YOUR SLOT:" << endl;
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9)
        {
            cout << "it is not a valid slot";
            i--;
            continue;
        }

        if (!placeMarker(slot))
        {
            cout << "slot is occupied! try again:" << endl;
            i--;
            continue;
        }
        drawBoard();
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