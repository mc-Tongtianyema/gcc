//1.��״̬:dp[j]--i����Ʒ������Ϊjʱ��������Сʣ��ռ� 
//2.״̬ת�Ʒ���:dp[j]=max(dp[j],dp[j-a[i]]+a[i])
#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[35],dp[20005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++)cin>>a[i];
	for(int i=1;i<=m;i++){
		for(int j=n;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}
	}cout<<n-dp[n];
	return 0;
}
