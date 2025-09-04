/*
模型：最大子段和
1.下定义:以第i块奶酪结尾的最大美味度
2.决策：对于第i块奶酪：吃，不吃
不吃
吃
max(吃，不吃，自身)
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int t;
long long a[200005];
long long dp[200005],mx=0;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++){
			dp[i]=max(max(dp[i-2]+a[i],a[i]),dp[i-2]);
		}for(int i=1;i<=n;i++){
			mx=max(mx,dp[i]);
		}cout<<mx;
	}
	return 0;
}
