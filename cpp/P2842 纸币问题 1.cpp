/*
什么背包:完全背包
背包容量:要凑的金币面额
物品:金币
物品容量:金币面额
1.定状态:i种纸币，面额不超过j下最多有多少种方案数
2.状态转移方程:dp[j]=dp[j-a[i]]+1;
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1005];
int dp[10005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=a[i];j<=m;j++){
			dp[j]=dp[j-a[i]]+1;
		}
	}cout<<dp[n];
	return 0;
}
