#include<bits/stdc++.h>
using namespace std;
queue<char> q; //����
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++){
		q.push(s[i]); 
	}
	//ģ�ⱨ������
	while(!q.empty()){   //1628    6000
		//1.����1�����+����
		cout<<q.front(); 
		q.pop(); 
		//2.����2�����+����
		q.push(q.front());
		q.pop();	
	} 

	return 0;
}

