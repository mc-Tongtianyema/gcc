#include<bits/stdc++.h>
using namespace std;
int jc(long long x){
	if(x==1)return 1;
	return jc(x-1)*x;
}
int main(){
	long long n;
	cin>>n;
	cout<<jc(n);
	return 0;
}
