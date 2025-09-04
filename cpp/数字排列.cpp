#include<bits/stdc++.h>
using namespace std;
int a[10],vis[10],n;
void dfs(int x){
	if(x>n){
		for(int i=1;i<n;i++)cout<<a[i];
		cout<<endl;
		return;
	}for(int i=1;i<=n;i++){
		if(vis[i]==0){
			vis[i]=1;
			a[x]=i;
			dfs(x+1);
			vis[i]=0;
		}
	}
}
int main(){
	cin>>n;
	dfs(1);
	return 0;
}
