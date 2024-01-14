#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n{};
    cin >> n;
    std::vector<int> initial(n);
    
    for (int &num : initial) {
        cin >> num;
    };
    
    sort(initial.begin(), initial.end());
    for (int element : initial ) { std::cout << element << " "; }

}
