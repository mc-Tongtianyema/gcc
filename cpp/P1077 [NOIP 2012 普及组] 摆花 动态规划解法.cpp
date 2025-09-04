#include<bits/stdc++.h>
using namespace std;
/*
多重背包
定状态：dp[j]:有i种花，放了j盆的方案数
状态转移方程对于第i种花，有i~a[i]中不同数量的放入
方案数：不放入第i种的方案+放入第i种的方案（区分数量）
dp[j]=(dp[j]+dp[j-k])%1000007;
dp[0]=1; 
*/
int n,m;
int a[105],dp[105];//i种花，放了j盆的方案数 
int main(){
	cin>>n>>m;
    dp[0]=1;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++){//01背包推导 
		for(int j=m;j>=1;j--){
			//要放进去，必须比背包容量小 
			for(int k=1;k<=min(a[i],j);k++){
				dp[j]=(dp[j]+dp[j-k])%1000007;
			}
		}
	}cout<<dp[m];
	return 0;
}

