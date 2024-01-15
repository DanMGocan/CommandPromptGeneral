/*

std::unordered_map: This is a hash table implementation of a map which stores key-value pairs. It allows for fast access to individual elements based on keys.
std::unordered_map<std::string, int> myMap;
myMap["key1"] = 100;
myMap["key2"] = 200;


std::unordered_set: This is a hash table implementation of a set which stores individual elements. It's useful for ensuring that no duplicate elements are stored.
std::unordered_set<int> mySet;
mySet.insert(10);
mySet.insert(20);

*/

#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::unordered_map<int, int> hashTable;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target - nums[i];
        if (hashTable.find(complement) != hashTable.end()) {
            return {hashTable[complement], i};
        }
        hashTable[nums[i]] = i;
    }
    return {}; // Return an empty vector if no solution is found
}
