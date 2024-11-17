#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M, Q;
    cin >> N >> M;
    vector<vector<char>> grid(N, vector<char>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> grid[i][j];
        }
    }
    cin >> Q;
    char DULUR;
    for(int i = 0; i < Q; i++){
    	cin >> DULUR;
	        if (DULUR == 'L') { 
	            for (int i = 0; i < N; i++) {
	                int grid_kosong = 0;
	                for (int j = 0; j < M; j++) {
	                    if (grid[i][j] == '*') {
	                        grid[i][j] = '#';
	                        grid[i][grid_kosong] = '*';
	                        grid_kosong++;
	                    }
	                }
	            }
	        } else if (DULUR == 'R') { 
	            for (int i = 0; i < N; i++) {
	                int grid_kosong = M - 1;
	                for (int j = M - 1; j >= 0; j--) {
	                    if (grid[i][j] == '*') {
	                        grid[i][j] = '#';
	                        grid[i][grid_kosong] = '*';
	                        grid_kosong--;
	                    }
	                }
	            }
	        } else if (DULUR == 'U') {  // Move Up
	            for (int j = 0; j < M; j++) {
	                int grid_kosong = 0;
	                for (int i = 0; i < N; i++) {
	                    if (grid[i][j] == '*') {
	                        grid[i][j] = '#';
	                        grid[grid_kosong][j] = '*';
	                        grid_kosong++;
	                    }
	                }
	            }
	        } else if (DULUR == 'D') { 
	            for (int j = 0; j < M; j++) {
	                int grid_kosong = N - 1;
	                for (int i = N - 1; i >= 0; i--) {
	                    if (grid[i][j] == '*') {
	                        grid[i][j] = '#';
	                        grid[grid_kosong][j] = '*';
	                        grid_kosong--;
	                    }
	                }
	            }
	        }
	}
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }
}

