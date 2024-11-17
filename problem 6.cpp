#include <bits/stdc++.h>
#include<vector>
using namespace std;

string pengubahkode(string kode){
	vector <char> ganjil, genap;
	for(char c : kode){
    		if(c % 2 == 0){
    			genap.push_back(c);
			} else {
				ganjil.push_back(c);
			}
		}
		string hasil ;
		int k = 0 , p = 0;
		while(k < genap.size() && p < ganjil.size()){
			if(genap[k] <= ganjil[p]){
				hasil += genap[k++];
			} else {
				hasil += ganjil[p++];
			}
		}
		
		while(k < genap.size()){
			hasil+= genap[k++];
		} 
		while(p < ganjil.size()){
			hasil+= ganjil[p++];
		}
		return hasil;
}


int main() {
    int n;
    cin >> n;
    string kode;
    string simpan[n];
    
    for(int i = 0; i < n; i++){
    	cin >> kode;
    	simpan[i] = pengubahkode(kode);
	}
	for(int i = 0; i < n; i++){
		cout << simpan[i] << endl;
	}
}	

