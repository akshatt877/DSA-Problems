// GFG PROBLEM  LINK -->  https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > matrix) {
        // code here
        int n = matrix.size();
    vector<int> arr;

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            // Even row → left to right
            for (int j = 0; j < n; j++) {
                arr.push_back(matrix[i][j]);
            }
        } else {
            // Odd row → right to left
            for (int j = n - 1; j >= 0; j--) {
                arr.push_back(matrix[i][j]);
            }
        }
    }

    return arr;

}};
