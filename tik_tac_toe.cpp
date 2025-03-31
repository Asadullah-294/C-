#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'},
                    {'4', '5', '6'},
                    {'7', '8', '9'}};
char currentMarker;
int currentPlayer;

void drawBoard() {
    cout << "Current Board:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool placeMarker(int slot) {
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = currentMarker;
        return true;
    }
    return false;
}

int winner() {
    // Rows and columns
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return currentPlayer;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return currentPlayer;
    }
    // Diagonals
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return currentPlayer;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return currentPlayer;

    return 0;
}

void swapPlayerAndMarker() {
    currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    currentPlayer = (currentPlayer == 1) ? 2 : 1;
}

void game() {
    cout << "Player 1, choose your marker (X or O): ";
    char markerP1;
    cin >> markerP1;

    currentPlayer = 1;
    currentMarker = markerP1;

    drawBoard();

    int turns = 0;
    while (turns < 9) {
        cout << "Player " << currentPlayer << ", enter your slot: ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9) {
            cout << "Invalid slot! Try again.\n";
            continue;
        }

        if (!placeMarker(slot)) {
            cout << "Slot already occupied! Try again.\n";
            continue;
        }

        drawBoard();
        turns++;

        int gameWinner = winner();
        if (gameWinner == 1) {
            cout << "Player 1 wins!\n";
            break;
        }
        if (gameWinner == 2) {
            cout << "Player 2 wins!\n";
            break;
        }

        swapPlayerAndMarker();
    }

    if (turns == 9) cout << "It's a tie!\n";
}

int main() {
    game();
    return 0;
}
