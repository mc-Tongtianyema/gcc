/*
什么背包:01背包
背包容量:能用来采药的时间
物品:山里的草药数量
物品容量:草药采摘需要的时间
1.定状态:i种草药，采摘时间不超过j下能带走草药的最大价值
2.状态转移方程:
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105],b[105];
int dp[1005];
int main(){
	cin>>m>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++){
		for(int j=m;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-b[i]]+a[i]);
		}
	}cout<<dp[n];
	return 0;
}
