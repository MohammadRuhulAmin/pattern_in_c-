#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int mid = n/2;
	for(int i = 1;i<=mid-1;i++){
		if(i<mid+1){
			for(int j = mid;j>=i;j--){
			cout << " ";
			}
			for(int j = 1;j<=i;j++){
				cout << "* ";
			}
			cout << endl;
		}
	}
	for(int i = 1;i<=mid;i++){
		for(int j = 1;j<=i;j++){
			cout << " ";
		}
		for(int j = mid;j>=i;j--){
			cout << "* ";
		}
		cout << endl;
	}
	return 0;
}
