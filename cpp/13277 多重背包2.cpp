#include<bits/stdc++.h>
using namespace std;
int n,m;
int x,y,z,t;
int dp[5005];
int w[100005],v[100005];//2进制分组后的新物品容量、价值
int cnt;//新物品个数 
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>x>>y>>z;//第i个物品的信息
		//对第i种物品的z个进行2进制分组，变成新物品，01推导 
		t=1;//每次新物品的个数 
        while(z-t>=0){
        	z-=t;
        	v[++cnt]=t*x;//录入新物品信息 
        	w[cnt]=t*y;
        	t*=2;
		}v[++cnt]=z*x;
        w[cnt]=z*y;
    }//n个物品，2进制分组后，新物品有多少个 
	//01推导 
	for(int i=1;i<=n;i++){
        for(int j=m;j>=v[i];j--){
            dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    }cout<<dp[m];
    return 0;
}

