#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long lower = abs(a - b) + 1;
    long long upper = a + b - 1; 
    
    if (lower > upper) {
        cout << 0 << endl;
    } else {
        cout << upper - lower + 1 << endl;
    }
}

