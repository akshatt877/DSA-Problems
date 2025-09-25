LEETCODE 54 SPIRAL MATRIX 
(LINK -> https://leetcode.com/problems/spiral-matrix/)


class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

    vector<int> ans;
    int rows = matrix.size();
    int cols = matrix[0].size();

    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        // Traverse top row
        for (int j = left; j <= right; j++)
            ans.push_back(matrix[top][j]);
        top++;

        // Traverse right column
        for (int i = top; i <= bottom; i++)
            ans.push_back(matrix[i][right]);
        right--;

        // Traverse bottom row
        if (top <= bottom) {
            for (int j = right; j >= left; j--)
                ans.push_back(matrix[bottom][j]);
            bottom--; // if is used because we already increased top in first loop so maybe we get the answer from that loop
        }

        // Traverse left column
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                ans.push_back(matrix[i][left]);
            left++;  // if is used because we already decreased right in second loop so maybe we get the answer from that loop
        }
    }

    return ans;

}
};
