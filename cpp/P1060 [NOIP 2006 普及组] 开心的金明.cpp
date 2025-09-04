#include<bits/stdc++.h>
using namespace std;
//定状态：dp[j]--i个物品，不超过j元下的最大值 
//状态转移方程:dp[j]=max(dp[j],dp[j-a[i]]+b[i])
int n,m;
int a[30],b[30],dp[30005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];
		b[i]=b[i]*a[i];
	}for(int i=1;i<=m;i++){
		for(int j=n;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
		}
	}cout<<dp[n];
	return 0;
}
