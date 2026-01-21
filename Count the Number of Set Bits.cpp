#include <iostream>
using namespace std;

class Solution {
public:
    int countSetBits(int n) {
        // Your code goes here
        int count = 0;
        while(n > 0){
            n = n & (n-1);
            count++;
        }
        return count;
    }
};

int main() {
    int n;
    cin >> n;
    Solution obj;
    cout << obj.countSetBits(n) << endl;
    
    return 0;
}