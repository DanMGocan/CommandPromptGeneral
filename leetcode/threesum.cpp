#include <vector>
#include <algorithm>

// Function to find all unique triplets in the array which gives the sum of zero.
std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
    // This will store the result (all triplets).
    std::vector<std::vector<int>> result;

    // Sort the array to make it easier to skip duplicates and use two pointers.
    std::sort(nums.begin(), nums.end());

    // Loop through the array. We can stop at nums.size() - 2 because we need at least 3 numbers for a triplet.
    for (int i = 0; i < nums.size() - 2; ++i) {
        // If the current value is the same as the previous one, skip it to avoid duplicates.
        if (i > 0 && nums[i] == nums[i - 1]) continue;

        // Set two pointers: one at the element right after the current one and the other at the end of the array.
        int left = i + 1;
        int right = nums.size() - 1;

        // Keep moving the left and right pointers towards each other until they meet.
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            // If the sum is less than zero, move the left pointer to the right to increase the sum.
            if (sum < 0) {
                left++;
            } 
            // If the sum is more than zero, move the right pointer to the left to decrease the sum.
            else if (sum > 0) {
                right--;
            } 
            // If the sum is zero, we found a triplet.
            else {
                // Add the triplet to the result.
                result.push_back({nums[i], nums[left], nums[right]});

                // Move the left pointer and skip all duplicates.
                while (left < right && nums[left] == nums[left + 1]) left++;

                // Move the right pointer and skip all duplicates.
                while (left < right && nums[right] == nums[right - 1]) right--;

                // Move both pointers towards each other after processing a valid triplet.
                left++;
                right--;
            }
        }
    }

    // Return all found triplets.
    return result;
}
