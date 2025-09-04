#include<bits/stdc++.h>
using namespace std;
//背包容量： 总重量
//物品：砝码
//物品的容量：砝码的重量
//
//多重背包：（多一个循环，表示数量维度）
//1. 定状态：ｄｐ［ｊ］：第i种砝码，是否能用k个凑出重量ｊ　
//２．状态转移方程：ｄｐ［ｊ］　＝　ｄｐ［ｊ］｜｜ｄｐ［ｊ－k*ａ［ｉ］］
//３．答案的输出：if（ｄｐ［ｊ］！＝０）　ｃｎｔ＋＋：
int a[7] = {0,1,2,3,5,10,20};
int t[7]; //每个砝码的个数
int dp[1005];
int sum; //根据输入，计算总重量 
int main(){
	for(int i=1;i<=6;i++){
		cin>>t[i];
		sum+=t[i]*a[i]; //背包容量 
	}
	dp[0] = 1; // 
 	for(int i=1;i<=6;i++){
 		for(int j=sum;j>=1;j--){
 			for(int k=1;k<=t[i]&&k*a[i]<=j;k++){
 				dp[j] = dp[j] | dp[j-k*a[i]];
			}
		}
	} 
	int cnt=0;
	for(int i=1;i<=sum;i++){
		if(dp[i]!=0) cnt++;
	}
	cout<<"Total="<<cnt;
	return 0;
}

