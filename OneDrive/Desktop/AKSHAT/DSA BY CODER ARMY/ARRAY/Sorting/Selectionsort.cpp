//// Selection Sort variant where instead of placing the smallest element at the beginning, you place the largest element at the end in each pass.


#include <iostream>
#include <vector>
using namespace std;

vector<int> selectionSortDescendingToEnd(vector<int>& nums) {
    int n = nums.size();

    // Each pass places the largest element at the end of the unsorted part
    for (int i = n - 1; i > 0; i--) {
        int maxIndex = 0;

        // Find the index of the maximum element in the unsorted part
        for (int j = 1; j <= i; j++) {
            if (nums[j] > nums[maxIndex]) {
                maxIndex = j;
            }
        }

        // Swap the maximum element with the last element of the unsorted part
        swap(nums[maxIndex], nums[i]);
    }

    return nums;
}
