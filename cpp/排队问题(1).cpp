#include<bits/stdc++.h>
using namespace std;
//�Ŷ����� 
//˼·�� ����������ӣ�Ȼ��ģ�ⱨ�����̼���
queue<int> q; //����
int n; //n����
int a[105]; //�洢����ı�� 
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		q.push(a[i]); 
	}
	//ģ�ⱨ������
	while(!q.empty()){   //1628    6000
		//1.����1�����+����
		cout<<q.front()<<" "; 
		q.pop(); 
		//2.����2�����+����
		q.push(q.front());
		q.pop();	
	} 

	return 0;
}

