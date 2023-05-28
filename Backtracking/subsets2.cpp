#include <bits/stdc++.h>

using namespace std;

// Function to generate all subsets of an array
void generateSubsets(vector<int>& nums, vector<int>& subset, int index) {
    // Base case: all elements have been processed
    if (index == nums.size()) {
        // Print the current subset
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    // Generate subsets by including the current element
    subset.push_back(nums[index]);
    generateSubsets(nums, subset, index + 1);
    subset.pop_back();

    // Generate subsets by excluding the current element
    generateSubsets(nums, subset, index + 1);
}

int main(){

    vector<int> nums = {1, 2, 3};
    vector<int> subset;
    generateSubsets(nums, subset, 0);
    return 0;
}