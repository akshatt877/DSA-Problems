class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
         int missing = 0;
    int current = 1;
    int i = 0;

    while (true) {
        if (i < arr.size() && arr[i] == current) {
            i++;  // current is in the array, skip it
        } else {
            missing++;  // current is missing
            if (missing == k) return current;
        }
        current++;
    }

    }
};