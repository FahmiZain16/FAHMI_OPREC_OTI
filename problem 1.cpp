#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	int n;
	cin >> n;
	string pemain[n];
	for(int i = 0; i < n; i++) cin >> pemain[i];
	for(int i = 0; i < n-1; i++){
		if(pemain[i] == pemain[i +1]){
			cout << pemain[i];
		}
	}
}
