#include<bits/stdc++.h>
using namespace std;
int isprime(int x) {
	if (x == 1)return 0;
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return 0;
	}return 1;
}
int main(){
	int a;
	cin>>a;
	if(isprime(a)==0)cout<<"NO";
	else cout<<"YES";
	return 0;
}
