#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int row = n;
	int col = n;
	for(int i = 1;i<=n;i++){
		for(int j = 1;j<=n;j++){
			if(i == 1 || i == row)cout << "-";
			else if(j == 1 )cout << "#";
			else if(j == n)cout << "#";
			else cout << " ";
		}
		cout << endl;
		
	}
	
	
	
	return 0;
}
