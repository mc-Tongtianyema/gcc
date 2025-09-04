#include<bits/stdc++.h>
using namespace std;
//背包容量：总成绩的一半，学生人数的一半
//物品： 学生
//物品的容量： 学生的分数
//物品的价值： 学生的分数
//01背包 
//dp[j][k]：i个学生，选了不超过j个，是否能凑k分 (k: 总分一半~1 的倒序变化) 
//dp[j][k] = dp[j][k] | dp[j-1][k-a[i]] 
int dp[105][10005];
int n;
int a[105];
int sum;
int main(){	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum +=a[i];
	} 
	sum/=2; //背包容量
	dp[0][0] = 1;
	for(int i=1;i<=n;i++){
		for(int j=i;j>=1;j--){ //i个人中选j个 
			for(int k=sum;k>=a[i];k--){
				dp[j][k] = dp[j][k] | dp[j-1][k-a[i]];
			} 
		}
	} 
	for(int k=sum;k>=1;k--){
		if(dp[n/2][k]==1){
			cout<<k;
			return 0;
		}
	}	

	return 0;
}

