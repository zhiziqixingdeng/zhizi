#include <iostream>
using namespace std;
struct hua{
	string zhu;
	string hao;
}c[10000];
int n,a,cnt;
int main(){
	for(int i=1; ;i++){
		cout<<"��ã�����ͨѶ¼����ϵͳ��������Ҫ��ʲô 1.�����ϵ�� 2.�鿴������ϵ�� 3.������ϵ�� 4.�˳�"<<endl;
		cin>>n;
		if(n==1){
				cout<<"������˵绰�����֣�";
				cin>>c[cnt].zhu;
				cout<<endl<<"������˵绰�ĺ���:";
				cin>>c[cnt].hao;
				cout<<"��ӳɹ�������ı���ǣ�"<<cnt<<endl; 
		}
		else if(n==2){
			cout<<"����ΪͨѶ¼:"<<endl;
			for(int i=1;i<=cnt;i++){
				cout<<"���֣�"<<c[cnt].zhu<<" "<<"�绰����:"<<c[cnt].hao<<endl;
			}
		}
		else if(n==3){
			cout<<"������Ҫ���ҵ��˵ı��"<<endl;
			cin>>a;
			if(a>cnt){
				cout<<"δ�ҵ���ϵ��"<<endl;
			}
			else{
				cout<<"���֣�"<<c[a].zhu<<"�绰���룺"<<c[a].hao<<endl;
			} 
		}
		else{
			cout<<"��Ч�Ĳ���"<<endl;
		}
	} 
}
