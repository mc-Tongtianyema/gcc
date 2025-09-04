#include<bits/stdc++.h>
using namespace std;
int main(){
	//背包问题：
	//n个物品，背包容量不超过m的情况下，
	//能带走的最大价值 
	
	//01背包：物品只有1个 
	//dp[i][j]：i个物品，容量不超过j下的最大价值dp[i][j] 
	//dp[i][j]：第i个物品的决策是装入、不装入
	//装得下：dp[i][j] = max(dp[i-1][j],dp[i-1][j-v[i]]+w[i]) 
	//装不下：dp[i][j] = dp[i-1][j];
	//降维优化： 
	//dp[j]：i个物品，容量不超过j下的最大价值dp[j] 
	//dp[j]：第i个物品的决策是装入、不装入
	for(int j=T;j>=t[i];j--)
	//装得下：dp[j] = max(dp[j],dp[j-v[i]]+w[i]);
	//注意： 内层循环，容量维度，要倒序推导。 

	dp[T]
	
	
	//完全背包:01背包基础上进行改善(物品有无数个) 
	//在01降维基础上，让容量正序推导 

	return 0;
}

