/*
ʲô����:01���� 
��������:αװ����������
��Ʒ:������
��Ʒ����:αװ����
��Ʒ��ֵ:�ܴ��ߵ�����
1.��״̬:dp[j][k]--i���ʿ����������kԪ�������������������j�µ��������� 
2.����:
״̬ת�Ʒ���:
*/
#include<bits/stdc++.h>
using namespace std;
int n,m,x;
int a[105],b[105],c[105],dp[1005][1005];
int main(){
	cin>>n>>m>>x;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=m;j>=b[i];j--){
			for(int k=x;k>=c[i];k--){
				dp[j][k]=max(dp[j][k],dp[j-b[i]][k-c[i]]+a[i]);
			}
		}
	}cout<<dp[m][x];
	return 0;
}

