#include<bits/stdc++.h>
using namespace std;
//ʲô������01����
//����������S
//��Ʒ��1-S
//��Ʒ��������i
//��Ʒ�ļ�ֵ��Լ����--w[i]=find(i) 
//1.��״̬��dp[j]--i�����֣����ֺͲ�����j�µ����Լ����
//2.״̬ת�Ʒ��̣�dp[j]=max(dp[j].dp[j-i]+w[i])
int find(int x){
	int sum=0;
	for(int i=1;i<x;i++){
		if(x%i==0)sum+=i;
	}return sum;
}int w[1005],dp[1005];
int n; 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		w[i]=find(i);
	}for(int i=1;i<=n;i++){
		for(int j=n;j>=i;j--){
			dp[j]=max(dp[j],dp[j-i]+w[i]); 
		}
	}cout<<dp[n];
	return 0;
}

