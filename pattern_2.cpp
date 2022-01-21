#include<bits/stdc++.h>
using namespace std;
void alternativeSolution(int n){
	for(int i = 1;i<=n;i++){
		for(int j = n;j>=i;j--){
			cout << " ";
		}
		for(int j = 1;j<=i;j++){
			cout << "* ";
		}
		cout << endl;
	}
	
}
int main(){
	int n;
	cin >> n;
	int counter = 1;
	for(int i = n;i>=1;i--){
		for(int j = 1;j<=i;j++){
			cout << " ";
		}
		for(int j = 1;j<=counter;j++){
			cout << "* ";
		}
		counter++;
		cout << endl;
	}
	cout << "Alternative Solution\n";
	cout << endl;
	alternativeSolution(n);
	
	return 0;
}
