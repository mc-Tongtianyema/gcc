/*
ʲô����:01���� 
��������:Hǧ�˸ɲ�
��Ʒ:N����
��Ʒ����:�ɲ�����
��Ʒ��ֵ:�ɲ�����
1.��״̬:i���ɲ�,����������j KG�¿��ԳԵ����ٸɲ�
2.״̬ת�Ʒ���:dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
*/
#include<bits/stdc++.h>
using namespace std;
int h,n;
int a[505],dp[45005];
int main(){
	cin>>h>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=h;j>=a[i];j--){
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);
		}
	}cout<<dp[h];
	return 0;
}

