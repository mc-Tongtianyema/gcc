/*
原问题：T月获得的最大总收入
1.拆问题、下定义：第i月。在北京获得的最大总收入--dp1[i]
                  第i月。在南京获得的最大总收入--dp2[i]
决策：第i月的总收入：上个月的总收入+这个月的营业额
换城市：第i月的总收入=另一个城市的上月总收入+当前城市的第i月营业额-交通费
不换城市：第i月的总收入=当前城市的上月总收入+当前城市的第i月营业额
3.状态转移方程：
dp1[i]=max(dp2[i-1]+p[i]-M,dp1[i-1]+p[i]);
dp2[i]=max(dp1[i-1]+n[i]-M,dp2[i-1]+n[i]);
4.答案：mx=max(dp1[T],dp2[T]);
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a1[105],a2[105];
int dp1[105],dp2[105];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a1[i]>>a2[i];
	}for(int i=1;i<=n;i++){
		dp1[i]=max(dp2[i-1]+a1[i]-m,dp1[i-1]+a1[i]);
		dp2[i]=max(dp1[i-1]+a2[i]-m,dp2[i-1]+a2[i]);
	}cout<<max(dp1[n],dp2[n]);
	return 0;
}
