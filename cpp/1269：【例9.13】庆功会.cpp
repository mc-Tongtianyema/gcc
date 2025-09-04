/*
什么背包:多重背包
背包容量:拨款金额 
物品:最多能购买的个数 
物品容量:奖品价格 
物品价值:奖品价值 
1.定状态:i个物品，最多能卖k个物品，价格不超过j下能带走的最大价值 
2.状态转移方程:dp[j]=max(dp[i-])
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int x,y,z,t;
int cnt;
int v[505],w[505];
int dp[6000005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x>>y>>z;
		t=1;
		while(z-t>=0){
			z-=t;
			v[++cnt]=t*x;
			w[cnt]=t*y;
			t*=2;
		}v[++cnt]=z*x;
		w[cnt]=z*y;
	}for(int i=1;i<=cnt;i++){
		for(int j=m;j>=v[i];j--){
			dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
		}
	}cout<<dp[m];
	return 0;
}

