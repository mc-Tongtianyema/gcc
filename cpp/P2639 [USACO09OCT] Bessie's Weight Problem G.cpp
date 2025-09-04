/*
什么背包:01背包 
背包容量:H千克干草
物品:N捆草
物品容量:干草重量
物品价值:干草重量
1.定状态:i捆干草,重量不超过j KG下可以吃掉多少干草
2.状态转移方程:dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
*/
#include<bits/stdc++.h>
using namespace std;
int h,n;
int a[505],dp[45005];
int main(){
	cin>>h>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=h;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}
	}cout<<dp[h];
	return 0;
}

