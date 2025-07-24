#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string simpleHash(const string& input) {
    string result = input;
    reverse(result.begin(), result.end());
    return result + "_hashed"; 
}
int main() {
    for (int i = 1; i <= 9; ++i) {
        string num = to_string(i);
        string hashed = simpleHash(num);
        cout << "Raqam: " << num << " -> Soxta Hash: " << hashed << endl;
    }
    return 0;
}


