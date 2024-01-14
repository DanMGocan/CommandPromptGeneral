#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#include <vector>
#include <sstream>
#include <numeric>

// Write your Student class here
class Student {
    public:
        std::vector<int> scores;
        Student(std::initializer_list<int> scores = {}); 
        // We cannot have an empty constructor, as the compiler needs to know how much space to allocate 
        // for the instance of the class 
        
        void input() {
            for (int i{0}; i < 5; i++) {
                int number{};
                std::cin >> number;
                scores.push_back(number);
            }
        }
        
        int calculateTotalScore() {
            return std::accumulate(scores.begin(), scores.end(), 0);
        }
};

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
