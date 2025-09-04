/*
什么背包:01背包 
背包容量:做完老师的作业最少时间(及格就行)
物品:作业数量
物品容量:做完一道作业的时间
物品价值:做完一道作业的分值 
1.定状态:dp[j]--i个作业，分数凑满j分的最少时间
2.状态转移方程:dp[j]=min(dp[j],dp[j-c[i]]+b[i]);
*/
#include<bits/stdc++.h>
using namespace std;
int n,m,k,r;
int a[15],b[15],c[15],dp[1555];
int main(){
	cin>>n>>m>>k>>r;
	memset(dp,0x3f3f3f3f,sizeof(dp));
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=m;i++)cin>>b[i];
	for(int i=1;i<=m;i++)cin>>c[i];
	for(int i=1;i<=n;i++){
		for(int j=k;j>=c[i];j--){
			dp[j]=min(dp[j],dp[j-c[i]]+b[i]);
		}
	}r-=dp[m];
	sort(a+1,a+1+n);
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(r!=0){
			r=r-a[i];
			cnt++;
		}
	}cout<<cnt;
	return 0;
}

