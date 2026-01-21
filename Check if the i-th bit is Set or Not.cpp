#include <iostream>
using namespace std;

class Solution {
public:
    bool checkIthBit(int n, int i) {
        // Your code goes here
        if((n & (1 << i)) != 0){
            return true;
        }

        return false;
    }
};

int main() {
    int n , i;
    cin >> n >> i;
    Solution obj;
    if(obj.checkIthBit(n , i)){
        cout << "SET" << endl;
    }
    else{
        cout << "NOT SET" << endl;
    }
    
    return 0;
}