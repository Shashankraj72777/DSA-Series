#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNumber(){
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << "Your entered number is: " << num << "\n";
    }
};

int main() {
    Solution sol;
    sol.printNumber();
    return 0;
}