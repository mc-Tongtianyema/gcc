#include<bits/stdc++.h>
using namespace std;
//深搜，枚举所有放花的方案
//优化： 记忆化搜索 
int n,m;
int a[105]; 
int dp[105][105]; //i种花，放了j盆的方案数 
int dfs(int x,int y){ //有x种花，放了y盆的方案数 
	if(y==m) return 1;
	if(x>n || y>m) return 0;  //n种花放完 或 共放了超过m盆  即返回
	if(dp[x][y]!=0) return dp[x][y];
	int ans = 0; //统计当前方案 
	for(int i=0;i<=a[x];i++){ //列举放第x种花的所有数量可能 
		ans = (ans+dfs(x+1,y+i))%1000007;
		dp[x][y] = ans; 
	} 
	return dp[x][y];
} 
 
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	cout<<dfs(1,0);
	
	
	return 0;
}
