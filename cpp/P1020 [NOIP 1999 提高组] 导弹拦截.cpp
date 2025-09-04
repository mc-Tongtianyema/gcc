#include<bits/stdc++.h>
using namespace std;
int x;
int mx;
int h[100005];
int a[100005],dp[100005];
int main(){
	int n=0;
	while(cin>>x){
		a[++n]=x;
		dp[n]=1;
	}for(int i=1;i<=n;i++){
		for(int j=i-1;j>=1;j--){
			if(a[j]>a[i])dp[i]=max(dp[i],dp[j]+1);
		}mx=max(mx,dp[i]);
	}cout<<mx<<endl;
	int cnt=1;
	h[cnt]=a[1];
	for(int i=2;i<=n;i++){
		if(h[cnt]>=a[i]){
			int L=1,R=cnt,mid,ans;
			while(L<=R){
				mid=(L+R)/2;
				if(h[mid]>=a[i]){
					ans=mid;
					R=mid-1;
				}else L=mid+1;
			}h[ans]=a[i];
		}else{
			cnt++;
			h[cnt]=a[i];
		}
	}cout<<cnt;
	return 0;
}

