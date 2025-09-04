/*
物品：货币
背包容量：要凑的金额N
物品的容量：每种货币的面额
原问题：V种货币凑够n元的方案数
1.定状态：dp[j]:i种货币，凑够j元的方案数
状态转移方程：dp[j]=dp[j]+dp[j-v[i]];
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[25];
long long dp[4005];
int main(){
	dp[0]=1; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=a[i];j<=m;j++){
			dp[j]=dp[j]+dp[j-a[i]];
		}
	}cout<<dp[m];
	return 0;
}

