#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105],b[105],dp[105];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>a[i]>>b[i];
	for(int i=1;i<=n;i++){
		for(int j=m;j>=1;j--){
			if(a[i]<=j)dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
		}
	}cout<<dp[n];
	return 0;
}
