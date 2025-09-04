/*
背包容量：总重量
物品：砝码
物品的容量：砝码的重量
多重背包：（多一个循环，表示数量维度）
1.定状态：dp[j]:第i种砝码。是否能用j个凑出重量j
2.状态转移方程：dp[j]=dp[j]||dp[j-k*a[i]]
3.答案的输出：if(dp[j]!=0)cnt++; 
*/
#include<bits/stdc++.h>
using namespace std;
int a[7],dp[1005];
int sum;//根据输入，计算总重量 
int t[7]={0,1,2,3,5,10,20};//每个砝码的个数 
int main(){
	for(int i=1;i<=6;i++){
		cin>>a[i];
		sum+=a[i]*t[i];//背包重量 
	}dp[0]=1;
	for(int i=1;i<=6;i++){
		for(int j=sum;j>=1;j--){
			for(int k=1;k<=a[i]&&k*t[i]<=j;k++){
				dp[j]=dp[j]|dp[j-k*t[i]];
			}
		}
	}int cnt=0;
	for(int i=1;i<=sum;i++){
		if(dp[i]!=0)cnt++;
	}cout<<"Total="<<cnt;
	return 0;
}
