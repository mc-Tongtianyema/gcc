#include<bits/stdc++.h>
using namespace std;
stack<int> s;
int j=1;
int a[105];
string b;
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	cin>>b;
	for(int i = 0;i<b.size();i++){
		if(b[i]=='x'){
			s.push(a[j]);
			j++;
		}else if(b[i]=='z'){
			cout<<s.top()<<" ";
			s.pop();
		}
	}

	return 0;
}

