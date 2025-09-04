#include<bits/stdc++.h>
using namespace std;
//摆花
//多重背包： 每个物品有限定的个数
//定状态： dp[j]: 有i种花，放了j盆的方案数  
//状态转移方程： 对于第i种花，有1~a[i]种不同数量的放入 
//方案数： 不放入第i种的方案 + 放入第i种的方案(区分数量) 
//dp[j] = (dp[j]+dp[j-k])%1000007; 
//dp[0] = 1; 
int n,m;
int a[105]; 
int dp[105]; //i种花，放了j盆的方案数 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	dp[0] = 1;
	//01背包推导
	
	
	???
	cout<<dp[m];
	 

	return 0;
}

