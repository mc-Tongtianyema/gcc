#include<bits/stdc++.h>
using namespace std;
int n,m;
string a=" /\\";
string b="/__\\";
int main(){
	cin>>n;
	m=n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= 2*(n-i); ++j)cout << " ";
		for (int j = 1; j <= i; ++j)cout<<" "<< "/\\ ";
		cout << endl;
		for (int j = 1; j <= 2*(n-i); ++j) cout << " ";
		for (int j = 1; j <= i; ++j) cout << "/__\\";
		cout << endl;
	}
	return 0;
}
