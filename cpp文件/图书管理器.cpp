#include <iostream>
#include <cstdlib>
using namespace std;
struct shu{
	string name;
	int flag;
	string banshe;
	string zhe;
}s[100000];
int n,w,a,cnt;
string c;
int main(){
	cout<<"��ӭ����ͼ�����ϵͳ"<<endl;
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.���ͼ�� 2.�޸�ͼ�� 3.����ͼ�� 4.ͼ���б� 5.�ͻ��˽���"<<endl;
		cin>>n;
		if(n==1){
			cnt++;
			cout<<"�������Ȿ�������:";
			cin>>s[cnt].name;
			cout<<"�������Ȿ��ĳ�����:";
			cin>>s[cnt].banshe;
			cout<<"�������Ȿ�������:";
			cin>>s[cnt].zhe;
			cout<<"���,�Ȿ����Ϊ:"<<cnt<<endl;
		}
		else if(n==2){
			cout<<"�������Ȿ��ı��:";
			cin>>w;
			cout<<"�����������Ȿ�������:";
			cin>>s[w].name;
			cout<<"�������Ȿ��ĳ�����:";
			cin>>s[w].banshe;
			cout<<"�������Ȿ�������:";
			cin>>s[w].zhe;
			cout<<"�޸����"<<endl;
		
		}
		else if(n==3){
			cout<<"�������Ȿ�������:";
			cin>>
		}
	}
}
