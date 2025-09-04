/*
什么背包:01背包
物品:路径
物品容量:路径值
1.定状态:dp[i][j]-->在i,j点下，求最大路径和
2.状态转移方程:dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005][1005];
int dp[1005][1005];
int mx;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cin>>a[i][j];
		}
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+a[i][j];
		}
	}for(int i=1;i<=n;i++){
		mx=max(mx,dp[n][i]);
	}cout<<mx;
	return 0;
}
