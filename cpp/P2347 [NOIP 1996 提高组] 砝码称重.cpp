/*
����������������
��Ʒ������
��Ʒ�����������������
���ر���������һ��ѭ������ʾ����ά�ȣ�
1.��״̬��dp[j]:��i�����롣�Ƿ�����j���ճ�����j
2.״̬ת�Ʒ��̣�dp[j]=dp[j]||dp[j-k*a[i]]
3.�𰸵������if(dp[j]!=0)cnt++; 
*/
#include<bits/stdc++.h>
using namespace std;
int a[7],dp[1005];
int sum;//�������룬���������� 
int t[7]={0,1,2,3,5,10,20};//ÿ������ĸ��� 
int main(){
	for(int i=1;i<=6;i++){
		cin>>a[i];
		sum+=a[i]*t[i];//�������� 
	}dp[0]=1;
	for(int i=1;i<=6;i++){
		for(int j=sum;j>=1;j--){
			for(int k=1;k<=a[i]&&k*t[i]<=j;k++){
				dp[j]=dp[j]|dp[j-k*t[i]];
			}
		}
	}int cnt=0;
	for(int i=1;i<=sum;i++){
		if(dp[i]!=0)cnt++;
	}cout<<"Total="<<cnt;
	return 0;
}
