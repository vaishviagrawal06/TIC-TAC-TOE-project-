#include <iostream>

using namespace std;

int currentPlayer;
char currentMarker;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void drawBoard()
{
    cout << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << " | " << endl;
    cout << "---|---|---\n";
    cout << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << " | " << endl;
    cout << "---|---|---\n";
    cout << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << " | " << endl;
    // cout<<"---|---|---\n";
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

    // diagonal
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return currentPlayer;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return currentPlayer;

    return 0;
}

void swapPlayerAndMarker()
{
    if (currentMarker == 'X')
    {
        currentMarker = 'O';
    }
    else
        currentMarker = 'X';

    if (currentPlayer == 1)
    {
        currentPlayer = 2;
    }
    else
        currentPlayer = 1;
}

bool isWinningMove(int slot, char marker)
{
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] == 'X' || board[row][col] == 'O')
    {
        return false;
    }

    // board ko store kar liya
    char store = board[row][col];

    // fake move
    board[row][col] = marker;

    bool win = false;

    // row
    for (int i = 0; i < 3; i++)
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            win = true;
    // column
    for (int i = 0; i < 3; i++)
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            win = true;

    // diagonal

    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        win = true;

    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        win = true;

    // fake move hata diya
    // board original state me aa gya hai
    board[row][col] = store;
    return win;
}

int computerMove(char computerMarker, char playerMarker)
{

     // Winning move
    for (int i = 1; i <= 9; i++)
        if (isWinningMove(i, computerMarker))      // If computer places its marker here, will it win
            return i;
    //  Block player
    for (int i = 1; i <= 9; i++)
        if (isWinningMove(i, playerMarker))  //if player places its marker here,will it win
            return i;
    // center
    if (board[1][1] != 'X' && board[1][1] != 'O')
    {
        return 5;
    }

    // corner
    int corner[] = {1, 3, 7, 9};
    for (int i = 0; i < 4; i++)
    {
        int slot = corner[i];
        int r = (slot - 1) / 3;
        int c = (slot - 1) % 3;
        if (board[r][c] != 'X' && board[r][c] != 'O')
            return slot;
    }

    // any position
    for (int i = 1; i <= 9; i++)
    {
        int r = (i - 1) / 3;
        int c = (i - 1) % 3;

        if (board[r][c] != 'X' && board[r][c] != 'O')
            return i;
    }
    return -1;
}
void game()
{
    cout << "---TIC-TAC-TOE---" << endl;
    cout << "Player VS Computer" << endl;

    char playerMarker;
    cout << "Choose X or O: ";
    cin >> playerMarker;

    if (playerMarker == 'x')
        playerMarker = 'X';
    if (playerMarker == 'o')
        playerMarker = 'O';

    char computerMarker;
    if (playerMarker == 'X')
    {
        computerMarker = 'O';
    }
    else
    {
        computerMarker = 'X';
    }

    // currentPlayer = 1;
    // currentMarker = playerMarker;

    int choice;
    cout<<"do you want to start the game: "<<endl;
    cout<<"1.Player"<<endl;
    cout<<"2.Computer"<<endl;
    cout<<"Enter choice"<<endl;
    cin>>choice;

    if (choice ==1)
    {
        currentPlayer=1;   //player starts
        currentMarker=playerMarker;
    }
    else{
        currentPlayer=2;   //computer starts
        currentMarker=computerMarker;
    }

    drawBoard();

    int playerWon = 0;

    for (int i = 0; i < 9; i++)
    {
        int slot;

        if (currentPlayer == 1)
        {
            cout << "your move:";
            cin >> slot;
        }
        else
        {
            cout << "Now!Its computer's turn \n";
            // this_thread::sleep_for(chrono::seconds(1));
            slot = computerMove(computerMarker, playerMarker);
            cout << "computer chose:" << slot << endl;
        }

        if (slot < 1 || slot > 9 || !placeMarker(slot))
        {
            cout << "Invalid move! Try again..." << endl;
            i--;
            continue;
        }
        drawBoard();

        playerWon = winner();

        if (playerWon == 1)
        {
            cout << "You Won!" << endl;
            return;
        }
        else if (playerWon == 2)
        {
            cout << "Computer Won!" << endl;
            return;
        }

        swapPlayerAndMarker();
    }
    cout << "Its a draw!" << endl;
}
int main()
{
    game();
    return 0;
}
