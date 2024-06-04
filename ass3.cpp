#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Input Matrix
    vector<vector<int>> matrix = {
        {10, 42, 53},
        {4, 15, 6},
        {27, 8, 92}
    };

    // Variables for matrix dimensions
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Flag to indicate direction
    bool isGoingDown = true;

    // Print the matrix in wave form
    for (int col = 0; col < cols; col++) {
        if (isGoingDown) {
            for (int row = rows - 1; row >= 0; row--) {
                cout << matrix[row][col] << " ";
            }
        } else {
            for (int row = 0; row < rows; row++) {
                cout << matrix[row][col] << " ";
            }
        }
        isGoingDown = !isGoingDown;
    }

    cout << endl;

    return 0;
}


// Output is 

27 4 10 42 15 8 92 6 53