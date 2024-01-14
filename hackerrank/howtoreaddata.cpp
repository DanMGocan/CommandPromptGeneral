#include <iostream>
#include <vector>
#include <sstream>
#include <string>

int main () {
// One number
int n{};
std::cin >> n;


// Vector with spaces 
   std::stringstream ss(str);
   std::string token;
   std::vector<int> results;

   while (getline(ss, token, ',')) {
      if (!token.empty()) {
         int num = stoi(token); // Convert the token to an integer
         results.push_back(num);
      }
   }

// Series of numbers 

// Series of elements when you know how many elements
std::vector<int> initial;
    initial.reserve(n); // Reserve space for n elements to avoid reallocations

    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        initial.emplace_back(num);
    }
}