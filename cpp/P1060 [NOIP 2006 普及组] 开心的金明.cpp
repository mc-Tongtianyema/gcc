#include<bits/stdc++.h>
using namespace std;
//��״̬��dp[j]--i����Ʒ��������jԪ�µ����ֵ 
//״̬ת�Ʒ���:dp[j]=max(dp[j],dp[j-a[i]]+b[i])
int n,m;
int a[30],b[30],dp[30005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		cin>>a[i]>>b[i];
		b[i]=b[i]*a[i];
	}for(int i=1;i<=m;i++){
		for(int j=n;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-a[i]]+b[i]);
		}
	}cout<<dp[n];
	return 0;
}
