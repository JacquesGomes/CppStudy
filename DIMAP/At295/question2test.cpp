#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

const int MAX_ROWS = 20;
const int MAX_COLS = 20;
const int MAX_BOMB_POWER = 9;

char board[MAX_ROWS][MAX_COLS];
int rows, cols;

// Function to mark all squares within the bomb's blast radius as empty
void explode(int row, int col, int power) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] != '#' && abs(i - row) + abs(j - col) >= 0 && abs(i - row) + abs(j - col) <= power){
                int x = board[i][j] - '0';
                cout << x << endl;
                board[i][j] = '.';
                board[i][j-1] = '.';
                board[i-1][j] = '.';
                board[i][j+1] = '.';
                board[i+1][j] = '.';

            }
        }
    }

    }



int main() {
    // Parse the input
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> board[i][j];

        }
    }

    // Simulate the explosions
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board[i][j] >= '1' && board[i][j] <= '9') {
                int power = board[i][j] - '0';
                explode(i, j, power);
            }
        }
    }

    // Print the resulting board
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }

    return 0;
}