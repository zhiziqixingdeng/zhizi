#include <iostream>
#include <cstdlib>
using namespace std;
string a,b,c,d,e,f,g,h;
string n; 
string name;
int main(){
	cout<<"��ӭ����������������ı�����ϵͳ���������������:";
	cin>>name;
	cout<<endl<<"��ӭ"<<name<<endl;
	cout<<"��������Ҫ���ĵ�һ������:";
	cin>>a;
	cout<<endl<<"��������Ҫ���ĵ�2������:";
	cin>>b; 
	cout<<endl<<"��������Ҫ���ĵ�3������:";
	cin>>c; 
	cout<<endl<<"��������Ҫ���ĵ�4������:";
	cin>>d;
	cout<<endl<<"��������Ҫ���ĵ�1�����ʵ�����:";
	cin>>e;
	cout<<endl<<"��������Ҫ���ĵ�2�����ʵ�����:";
	cin>>f;
	cout<<endl<<"��������Ҫ���ĵ�3�����ʵ�����:";
	cin>>g;
	cout<<endl<<"��������Ҫ���ĵ�4�����ʵ�����:";
	cin>>h;
	cout<<"ok"<<endl;
	for(int i=1;i<=40;i++){
		cout<<endl;
	}
	while(1==1){
		int r=rand()%3;
		if(r==0){
			cout<<"������"<<a<<"��������˼"<<endl;
			cin>>n;
			if(n==e){
				cout<<"��ȷ"<<endl;
			}
			else{
				cout<<"����������˼��:"<<e<<endl;; 
			}
		}
		else if(r==1){
			cout<<"������"<<b<<"��������˼"<<endl;
			cin>>n;
			if(n==f){
				cout<<"��ȷ"<<endl;
			}
			else{
				cout<<"����������˼��:"<<f<<endl;; 
			}
		}
		else if(r==2){
			cout<<"������"<<c<<"��������˼"<<endl;
			cin>>n;
			if(n==g){
				cout<<"��ȷ"<<endl;
			}
			else{
				cout<<"����������˼��:"<<g<<endl;; 
			}
		}
		else if(r==3){
			cout<<"������"<<d<<"��������˼"<<endl;
			cin>>n;
			if(n==h){
				cout<<"��ȷ"<<endl;
			}
			else{
				cout<<"����������˼��:"<<h<<endl;; 
			}
		}
	}
}
