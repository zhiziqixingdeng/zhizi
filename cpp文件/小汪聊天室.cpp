#include <iostream>
using namespace std;
int a,b;
string n,s;
int main(){
	cout<<"��ӭ����С�������ң��������������";
	cin>>s; 
	cout<<endl<<"���ߵ��û���С�������ǵƣ��죬����"<<","<<s<<endl;
	for(int i=1; ;i++){
		cout<<"����������˵�Ļ�";
		cin>>n; 
		cout<<s<<"˵��"<<n<<endl;
		if(n=="���"||n=="��Һ�"||n=="hi"){
			cout<<"���ǵ�˵�� �������"<<endl;
		}
		if(n>="1"&&n<="9"){
			cout<<"��˵�� ˵�Ĳ���"<<endl;
		}
		if(n>="1"&&n<="5"){
			cout<<"С��������̫����"<<endl; 
		}
		if(n>="a"&&n<="z"){
			cout<<"��˵"<<" ���ѽ��д�Ĳ�����������"<<endl; 
		}
	} 
} 
