#include<bits/stdc++.h>
using namespace std;
int factorial(int x){
	int res = 1;
	for(int i =1 ;i<=x;i++){
		res*=i;
	}
	return res;
}
int nCr(int n,int r){
 // ans = a!/b!*(a-b)!;
 	return factorial(n)/(factorial(r)*(factorial(n-r)));
}
int main(){
	cout << nCr(0,0)<< endl;
	int n;
	cin >> n;
	for(int i = 1;i<=n;i++){
		for(int j = n;j>=i;j--)cout << " ";
		for(int j = 1;j<=i;j++){
			int a = i-1;
			int b = j-1;
			int ans = nCr(a,b);
			cout << ans << " ";
		}
		cout << endl;
	}
	return 0;
}
