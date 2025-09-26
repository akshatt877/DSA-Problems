/*Question Name: Print Diagonally   Platform GFG LInk-->  https://www.geeksforgeeks.org/problems/print-diagonally4331/1
*/

class Solution {

  public:
    vector<int> downwardDiagonal(int N, vector<vector<int>> A) {
        // Your code goes here
        
        vector<int> result;

    // Loop over all possible sums of indices (i + j)
    for (int sum = 0; sum <= 2 * (N - 1); ++sum) {
       

        // For each sum, find valid (i, j) pairs such that i + j == sum
        for (int i = 0; i < N; ++i) {
            int j = sum - i;
            if (j >= 0 && j < N) {
                result.push_back(A[i][j]);
            }
        }
    }

    return result;

    }
};
