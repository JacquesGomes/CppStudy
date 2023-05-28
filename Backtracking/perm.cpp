#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to process the permutation
void processPermutation(vector<int>& permutation) {
    // Print the current permutation
    for (int num : permutation) {
        cout << num << " ";
    }
    cout << endl;
}

// Function to generate all permutations
void generatePermutations(vector<int>& nums, int start, int end) {
    if (start == end) {
        processPermutation(nums);
        return;
    }

    for (int i = start; i <= end; i++) {
        swap(nums[start], nums[i]);
        cout << "Pre call " << i << endl;
        generatePermutations(nums, start + 1, end);

        cout << "Post call " << i << endl;
        swap(nums[start], nums[i]);

        cout << endl;
    }
}

// Main function
int main() {
    vector<int> nums = {1, 2, 3}; // Input array

    cout << "All permutations: " << endl << endl';
    generatePermutations(nums, 0, nums.size() - 1);

    return 0;
}