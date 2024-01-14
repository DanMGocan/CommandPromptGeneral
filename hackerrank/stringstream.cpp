#include <iostream>
#include <vector>
#include <sstream>

std::vector<int> parseInts(std::string str) {
   std::stringstream ss(str);
   std::string token;
   std::vector<int> results;

   while (getline(ss, token, ',')) {
      if (!token.empty()) {
         int num = stoi(token); // Convert the token to an integer
         results.push_back(num);
      }
   }

   return results;
}

int main () {

}

