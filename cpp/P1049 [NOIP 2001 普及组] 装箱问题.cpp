//1.定状态:dp[j]--i个物品，容量为j时的箱子最小剩余空间 
//2.状态转移方程:dp[j]=max(dp[j],dp[j-a[i]]+a[i])
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[35],dp[20005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		for(int j=n;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}
	}cout<<n-dp[n];
	return 0;
}
