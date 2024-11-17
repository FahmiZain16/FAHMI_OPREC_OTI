#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    vector<string> hasil;

    for (int i = 0; i < t; i++) {
        int n;
        string s; 

        cin >> n >> s;

        bool foundC = false;
        bool CPable = false;

        for (char c : s) {
            if (c == 'C') {
                foundC = true;
            }
            if (c == 'P' && foundC) {
                CPable = true;
                break;
            }
        }

        if (CPable) {
        	hasil.push_back("YES");
        } else {
            hasil.push_back("NO");
        }
    }

    for (const string& result : hasil) {
        cout << result << endl;
    }

    return 0;
}

