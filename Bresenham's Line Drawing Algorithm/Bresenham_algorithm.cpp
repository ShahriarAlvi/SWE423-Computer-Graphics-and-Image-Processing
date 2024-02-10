#include <bits/stdc++.h>

using namespace std;

const int MAX_SIZE = 10;  // Adjust the size as needed

void drawLine(int x1, int y1, int x2, int y2) {
    char grid[MAX_SIZE][MAX_SIZE];

    // Initialize the grid
    for (int i = 0; i < MAX_SIZE; ++i) {
        for (int j = 0; j < MAX_SIZE; ++j) {
            grid[i][j] = '.';
        }
    }

    int dx = x2 - x1;
    int dy = y2 - y1;

    // Check if the slope m goes for '0 < m < 1' or 'm > 1'

    if (abs(dy) < abs(dx)) {

        // Case 1 (0 < m < 1) starts here

        int yi = 1;

        if (dy < 0) {
            yi = -1;
            dy = -dy;
        }

        int D = 2 * dy - dx;
        int y = y1;

        for (int x = x1; x <= x2; x++) {

            // Plot the pixel at (x, y)
            cout << "(" << x << ", " << y << ") ";

            // Mark the point on the grid

            grid[y][x] = '*';

            if (D > 0) {
                y = y + yi;
                D = D - 2 * dx;
            }

            D = D + 2 * dy;
        }

    } else {

        // Case 2 (m > 1) starts here

        int xi = 1;

        if (dx < 0) {
            xi = -1;
            dx = -dx;
        }

        int D = 2 * dx - dy;
        int x = x1;

        for (int y = y1; y <= y2; y++) {
            
            // Plot the pixel at (x, y)
            cout << "(" << x << ", " << y << ") ";

            // Mark the point on the grid
            grid[y][x] = '*';

            if (D > 0) {
                x = x + xi;
                D = D - 2 * dy;
            }

            D = D + 2 * dx;
        }
    }

    cout << "\n";

    // Print the grid
    for (int i = 0; i < MAX_SIZE; ++i) {
        for (int j = 0; j < MAX_SIZE; ++j) {
            cout << grid[i][j] << ' ';
        }
        cout << endl;
    }
}

int main() {

    // Case 1: (1,1), (8,4)
    cout << "Case 1:\n";
    drawLine(1, 1, 8, 4);

    // Case 2: (1,1), (4,8)
    cout << "\nCase 2:\n";
    drawLine(1, 1, 4, 8);

    return 0;
}
