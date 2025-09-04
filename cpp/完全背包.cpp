#include<bits/stdc++.h>
using namespace std;
int n,m;
int a;
int sum;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(30-n-m==i+j&&i!=n&&j!=n&&j!=m)cout<<i<<" "<<j<<endl;
			a=1;
		}
	}if(a==0)cout<<"0 0";
	return 0;
}

