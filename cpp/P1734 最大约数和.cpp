#include<bits/stdc++.h>
using namespace std;
//什么背包：01背包
//背包容量：S
//物品：1-S
//物品的容量：i
//物品的价值：约数和--w[i]=find(i) 
//1.定状态：dp[j]--i个数字，数字和不超过j下的最大约数和
//2.状态转移方程：dp[j]=max(dp[j].dp[j-i]+w[i])
int find(int x){
	int sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0)sum+=i;
	}return sum;
}int w[1005],dp[1005];
int n; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		w[i]=find(i);
	}for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			dp[j]=max(dp[j],dp[j-i]+w[i]); 
		}
	}cout<<dp[n];
	return 0;
}

