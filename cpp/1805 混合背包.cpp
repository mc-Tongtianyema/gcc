#include<bits/stdc++.h>
using namespace std;
int dp[5005];
int v[20005],w[20005];
int x,y,z,n,m;
int cnt;
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>x>>y>>z;
		if(z==0)z=200;//完全转化多重
		int t=1;
		while(z-t>=0){
			z-=t;
			v[++cnt]=t*x;
			v[cnt]=t*y;
			t*=2;
		}v[++cnt]=z*x;
		v[cnt]=z*y;
	}for(int i=1;i<=cnt;i++){
		for(int j=m;j>=v[i];j--){
			dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
		}
	}cout<<dp[m];
	return 0;
}

