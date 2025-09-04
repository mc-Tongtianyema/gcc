#include<bits/stdc++.h>
using namespace std;
string a;
stack<char>s;
int main(){
	cin>>a;
	for(int i=0;i<s.size();i++){
		if(a[i]=='[')s.push(a[i]);
		else{
			if(s.empty()){
				cout<<"NO";
				return 0;
			}else{
				s.pop();
			}
		}
	}if(s.empty())cout<<"YES";
	else cout<<"NO";
	return 0;
}
