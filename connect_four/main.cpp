#include <iostream>

using namespace std;

#define Player1turn 0
#define Player2turn 1
void getboardsize();
void memfree_board(int height, int width, char** p_p_connect4board);
void printstartboard(int height, int width, char** p_p_connect4board);
void printboard(int height, int width, char** p_p_connect4board);
bool isGameOver(int totalmoves, int width, int height);

int main()
{
int width=1;
int height=1;
cout << "How wide would you like the board: ";
cin >> width;
cout << "How high would you like the board: ";
cin >> height;
//---------- Organising pointers for connect 4 board:
char **p_p_connect4board;
p_p_connect4board = new char*[height]; //allocating an array of pointers, each pointing to a row of the board.
for (int i=0;i<height;i++) {
    p_p_connect4board[ i ] = new char[width];
} //allocating to each row pointer an array representing a row of the board.
//----------
cout << "\nConnect 4: \nPlayer 1 to move, choose column (one for the leftmost column, 2 for the second from the left, and so on):\n";
printstartboard(height, width, p_p_connect4board);
bool turn = Player1turn;
int columnchoice=0;
int totalmoves=0;
//------
int discheight[width-1]; //initialising a counter of how many discs there are in each column ie starts with 0 for all columns
for (int i=0;i<width;i++) {
    discheight[i]=0;
}
//------
while (isGameOver(totalmoves, width, height)) {
    if (turn == Player1turn) {
        cout << "\nPlayer 1 to move, choose column:\n";
        cin >> columnchoice;
        if (discheight[columnchoice-1]<height) {
        p_p_connect4board[ height-discheight[columnchoice-1] -1][ columnchoice -1] = '+';
        printboard(height, width, p_p_connect4board);
        turn = Player2turn;
        discheight[columnchoice-1]++;
        totalmoves++;
        }
        else {
            cout << "Invalid move!\n";
        }
    }
    else if (turn == Player2turn) {
        cout << "\nPlayer 2 to move, choose column:\n";
        cin >> columnchoice;
        if (discheight[columnchoice-1]<height) {
        p_p_connect4board[ height-discheight[columnchoice-1]-1 ][ columnchoice -1] = 'x';
        printboard(height, width, p_p_connect4board);
        turn = Player1turn;
        discheight[columnchoice-1]++;
        totalmoves++;
        }
        else {
            cout << "Invalid move!\n";
        }
    }
}
/*
while (game not over **function to check whether game is over**)
{ if player 1 to move, say player 1 to move, get move, print new board, now its player 2 to move.
    else if player 2 to move, say player 2 to move, get move, print new board, now its player 1 to move. }
*/
memfree_board(height, width, p_p_connect4board);
cout << "\nGame Over!";

}


void memfree_board(int height, int width, char** p_p_connect4board) { //destroys memory pointed to by pointers relating to the connect 4 board
for (int i=0;i<height;i++) {
    delete [] p_p_connect4board[i];
}
delete [] p_p_connect4board;
}

void printstartboard(int height, int width, char** p_p_connect4board) {
    for (int i=0;i<height;i++) {
            cout << "\n";
        for (int j=0;j<width; j++) {
            p_p_connect4board[ i ][ j ] = '_';
            cout << p_p_connect4board[ i ][ j ] << " ";
        }
    }
// code for printing board after move is chosen (i.e which column (1-8) to drop "disc" into
}

void getboardsize() { //asks for width and height of board, returns values for use in creating board.
 //***perhaps store values in array?
 //perhaps split into getboardhaight and getboardwidth?
 // perhaps get values by writing eg height = getboardheight()
}

bool isGameOver(int totalmoves, int width, int height) {
if (totalmoves== width*height) {
return 0;
}
else {
return 1;
}
}

void printboard(int height, int width, char** p_p_connect4board) {
    for (int i=0;i<height;i++) {
            cout << "\n";
        for (int j=0;j<width; j++) {
            cout << p_p_connect4board[ i ][ j ] << " ";
        }
    }
}
