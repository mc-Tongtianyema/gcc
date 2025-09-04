/*
原问题：系统最多能完成几个任务？
1.定状态：i个任务，数据量不超过j下最多能完成几个任务
2.状态转移方程：
1.求出以每个点结尾的最长下降子序列长度（从左往右）dp1[i]
2.求出以每个点结尾的最长上升子序列（从右往左）--dp2[i]
3.在第i个用一次重启得到的任务数量-dp1[i]+dp2[i]-1;
*/
#include<bits/stdc++.h>
using namespace std;
int n;
int a[1005];
int mx1,mx2;
int dp1[1005],dp2[1005];
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		dp1[i]=1;
		dp2[i]=1;
	}for(int i=1;i<=n;i++){
		for(int j=1;j<=i-1;j++){
			if(a[i]>a[j])dp1[i]=max(dp1[i],dp1[j]+1);
		}mx1=max(dp1[i],mx1);
	}for(int i=n;i>=1;i--){
		for(int j=i+1;j<=n;j++){
			if(a[i]<a[j])dp2[i]=max(dp2[i],dp2[j]+1);
		}mx2=max(dp2[i],mx2);
	}cout<<mx1+mx2;
	return 0;
}

