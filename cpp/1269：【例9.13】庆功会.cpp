/*
ʲô����:���ر���
��������:������ 
��Ʒ:����ܹ���ĸ��� 
��Ʒ����:��Ʒ�۸� 
��Ʒ��ֵ:��Ʒ��ֵ 
1.��״̬:i����Ʒ���������k����Ʒ���۸񲻳���j���ܴ��ߵ�����ֵ 
2.״̬ת�Ʒ���:dp[j]=max(dp[i-])
*/
#include<bits/stdc++.h>
using namespace std;
int n,m;
int x,y,z,t;
int cnt;
int v[505],w[505];
int dp[6000005];
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>x>>y>>z;
		t=1;
		while(z-t>=0){
			z-=t;
			v[++cnt]=t*x;
			w[cnt]=t*y;
			t*=2;
		}v[++cnt]=z*x;
		w[cnt]=z*y;
	}for(int i=1;i<=cnt;i++){
		for(int j=m;j>=v[i];j--){
			dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
		}
	}cout<<dp[m];
	return 0;
}

