/*
完全背包--货币
物品：货币
背包容量：要凑的金额N
物品的容量：每种货币的面额
原问题：V种货币凑够n元的方案数
1.定状态：dp[j]:i种货币，凑够j元的方案数
2.决策：2个选择，用第i个货币凑j元，不用第i个货币凑j元
状态转移方程：dp[j]=dp[j]+dp[j-v[i]];
对于方案数问题，一定初始化:dp[0]=1; 
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[35];
long long dp[10005];
int main(){
	dp[0]=1; 
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		for(int j=a[i];j<=n;j++){
			dp[j]=dp[j]+dp[j-a[i]];
		}
	}cout<<dp[n];
	return 0;
}

