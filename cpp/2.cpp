//1.��״̬��dp[j]:��ʱ��Ϊi����Ʒ��������������»�õ�����ֵ 
//2.״̬ת�Ʒ��̣�dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
#include<bits/stdc++.h>
using namespace std;
int t,m;
int w[10005],v[10005],dp[10000005];
int main(){
	cin>>t>>m;
	for(int i=1;i<=m;i++)cin>>w[i]>>v[i];
	for(int i=1;i<=m;i++){
		for(int j=w[i];j<=t;j++){
			if(w[i]<=j)dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}cout<<dp[t];
	return 0;
}

