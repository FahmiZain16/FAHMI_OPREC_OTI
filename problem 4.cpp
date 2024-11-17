#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    string hasil[n];
    pair<int, int> skor[n];

    for (int i = 0; i < n; i++) {
        cin >> hasil[i];
    }

    for (int i = 0; i < n; i++) {
        for (const char &menang : hasil[i]) {
            if (menang == 'o') {
                sum++;
            }
        }
        skor[i].first = sum;
        skor[i].second = i + 1;
        sum = 0;
    }
    sort(skor, skor + n, [](pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first) {
            return a.first > b.first;
        }
        return a.second < b.second; 
    });

    for (int i = 0; i < n; i++) {
        cout << skor[i].second << " ";
    }
    cout << endl;

    return 0;
}

