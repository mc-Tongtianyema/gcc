/*
什么背包:01背包 
背包容量:伪装能力，工资
物品:总人数
物品容量:伪装能力
物品价值:能带走的资料
1.定状态:dp[j][k]--i格个士兵，不超过k元工资且侦查能力不超过j下的资料总数 
2.决策:
状态转移方程:
*/
#include<bits/stdc++.h>
using namespace std;
int n,m,x;
int a[105],b[105],c[105],dp[1005][1005];
int main(){
	cin>>n>>m>>x;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=m;j>=b[i];j--){
			for(int k=x;k>=c[i];k--){
				dp[j][k]=max(dp[j][k],dp[j-b[i]][k-c[i]]+a[i]);
			}
		}
	}cout<<dp[m][x];
	return 0;
}

