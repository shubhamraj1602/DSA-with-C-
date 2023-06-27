#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIdx = 0; // Index to track non-zero elements

    // Iterate through the array
    for (int i = 0; i < nums.size(); i++) {
        // If the current element is non-zero
        if (nums[i] != 0) {
            // Move the non-zero element to the nonZeroIdx position
            nums[nonZeroIdx] = nums[i];
            nonZeroIdx++;
        }
    }

    // Fill the remaining positions with zeros
    while (nonZeroIdx < nums.size()) {
        nums[nonZeroIdx] = 0;
        nonZeroIdx++;
    }
}

int main() {
    // Test the function
    vector<int> nums = {0, 1, 0, 3, 12};
    cout << "Original Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroes(nums);

    cout << "Modified Array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
