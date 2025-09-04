#include<bits/stdc++.h>
using namespace std;
//原问题：   N+1个城市，M天内达到的最小疲劳度
//定状态：dp[i][j]：i个城市，j天内到达的最小疲劳度
//状态转移方程：dp[i][j] = min(休息，不休息)
//dp[i][j] = min(dp[i][j-1]，dp[i-1][j-1] +  a[i]*b[j])
//
//初始化1：dp[i][j] 初始化最大
//初始化2：
//从0城市出发
//dp[0][1] = 0
//dp[0][2] = 0

int a[1005],b[1005];
int dp[1005][1005]; 
int n,m;
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=m;i++) cin>>b[i];
	memset(dp,0x3f,sizeof(dp));
	for(int i=0;i<=m;i++) dp[0][i] = 0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j] = min(dp[i][j-1],dp[i-1][j-1] +  a[i]*b[j]);
		}
	}
	cout<<dp[n][m];
	return 0;
}

