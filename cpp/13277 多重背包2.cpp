#include<bits/stdc++.h>
using namespace std;
int n,m;
int x,y,z,t;
int dp[5005];
int w[100005],v[100005];//2���Ʒ���������Ʒ��������ֵ
int cnt;//����Ʒ���� 
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>x>>y>>z;//��i����Ʒ����Ϣ
		//�Ե�i����Ʒ��z������2���Ʒ��飬�������Ʒ��01�Ƶ� 
		t=1;//ÿ������Ʒ�ĸ��� 
        while(z-t>=0){
        	z-=t;
        	v[++cnt]=t*x;//¼������Ʒ��Ϣ 
        	w[cnt]=t*y;
        	t*=2;
		}v[++cnt]=z*x;
        w[cnt]=z*y;
    }//n����Ʒ��2���Ʒ��������Ʒ�ж��ٸ� 
	//01�Ƶ� 
	for(int i=1;i<=n;i++){
        for(int j=m;j>=v[i];j--){
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }cout<<dp[m];
    return 0;
}

