/*
物品:数字个数
物品容量:数字的值
1.定状态:i个数字，形成的最大子段和
2.状态转移方程:
*/
#include<bits/stdc++.h>
using namespace std;
long long n;
long long a[200005];
long long dp[200005],mx=-100005;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		dp[i]=max(dp[i-1]+a[i],a[i]);
	}for(int i=1;i<=n;i++){
		mx=max(mx,dp[i]);
	}cout<<mx;
	return 0;
}
