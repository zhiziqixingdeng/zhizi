#include <iostream>
#include <cstdlib> 
using namespace std;
int r,n,s;
int main(){
	for(int i=1; ;i++){
		cout<<"��ã�����sa��������Ҫ��ʲô 1.������ 2.������Ϸ 3.����ը�� 4.�˳�"<<endl;
	cin>>n;
	if(n==1){
		cout<<"��������ʽ���˺���*��������/)"<<endl;
		int a,b;
		char x;
		cin>>a>>x>>b;
		if(x=='+'){
			cout<<a+b<<endl;
		}
		else if(x=='-'){
			cout<<a-b<<endl;
		}
		else if(x=='*'){
			cout<<a*b<<endl;
		}
		else if(x=='/'&&b!=0){
			cout<<a/b<<"......"<<a%b<<endl;;
		}
		else{
			cout<<"���������������������Ŵ���"<<endl;
		}
	}
	else if(n==2){
		r=rand()%100;
		cout<<"��ӭ����ϵͳ�Դ��Ĳ�����Ϸ��uwu!"<<endl;
		cout<<"���������������ɣ�"<<endl;
		int d;
		for(int i=1; ;i++){
			cin>>d;
			if(d>r){
				cout<<"����"<<endl;
			}
			if(d<r){
				cout<<"С��"<<endl;
			}
			if(d==r){
				cout<<"��ϲ�㣡�¶��ˣ�"<<endl;
				break;
			}
		}
	}
	if(n==3){
		int g;
		r=rand()%10;
		cout<<"��ӭ��������ը����awa!(��Χ��10���ڣ��п��Ա�ʤ��BUGŶ��)"<<endl;
		for(int i=1; ;i++){
			cout<<"������������"<<endl;
			cin>>g;
			if(g==r){
				cout<<"��ȵ���ը����"<<endl;
				break;
			}
			else{
				s=rand()%100;
				if(s==r){
					cout<<"�Ҳµ���ը���������ˣ�"<<endl;
					break;
				}
				else{
					cout<<"�����ˣ����Ƕ�û�ȵ�ը��"<<endl;
				}
			}
		}
	}
	if(n==4){
		cout<<"�ټ�����ӭ�ٴ�ʹ��saϵͳ��"<<endl;
		return 0;
	}
	}
}
