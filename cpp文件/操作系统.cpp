#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
using namespace std;
int a,b,c,d,s[100];
string name,mail,qian,jishi,ming;
char x;
int main(){
	cout<<"����������:";
	cin>>name;
	cout<<"����������:";
	cin>>mail;
	cout<<"���������ǩ��:";
	cin>>qian;
	cout<<"�õ�"<<endl;
	while(true){
		cout<<"��������������Ҫ������help"<<endl;
		cin>>ming;
		if(ming=="help"){
			cout<<"����jishi������Ӽ��±����ݣ�����jishiz���Բ鿴��������"<<endl;
			cout<<"����zhishu���Կ�ʼ�ж�����"<<endl;
			cout<<"����abs������һ�����ľ���ֵ"<<endl;
			cout<<"����suan���Կ��ٿ���������"<<endl;
			cout<<"����rand���Ի�ȡ�����"<<endl;
			cout<<"����sort���Զ�һ�����ֽ�������"<<endl;
			cout<<"����game���Կ�������С��Ϸ"<<endl; 
		}
		else if(ming=="jishi"){
			cout<<"��������±�����:";
			cin>>jishi;
			cout<<"����"<<endl;
		} 
		else if(ming=="jishiz"){
			cout<<"���±�����:"<<jishi<<endl;
		}
		else if(ming=="zhishu"){
			cout<<"��������Ҫ�жϵ���Ȼ��"<<endl;
			cin>>a;
			if(a<=1){
				cout<<"�������������"<<endl;
				b=1;
			} 
			for(int i=2;i<a;i++){
					if(a%i==0){
						cout<<"�������������"<<endl;
						b=1; 
					}
			}
			if(b==0){
				cout<<"�������������"<<endl;
			}
		}
		else if(ming=="abs"){
			cout<<"������Ҫ�жϾ���ֵ����:";
			cin>>c;
			d=abs(c);
			cout<<"����ֵ:"<<d<<endl;
		}
		else if(ming=="suan"){
			cout<<"������������Ȼ����һ���������*�ǳ˺ţ�/�ǳ��ţ��磺3 / 1)"<<endl;
			cin>>a>>x>>b;
			if(x=='+'){
				cout<<"���:"<<a+b<<endl;
			}
			else if(x=='-'){
				cout<<"���:"<<a-b<<endl;
			}
			else if(x=='*'){
				cout<<"���:"<<a*b<<endl;
			}
			else if(x=='/'&&b!=0){
				cout<<"���:"<<a/b<<"......"<<a%b<<endl;
			}
			else{
				cout<<"���Ŵ�����߳�������Ϊ��"<<endl;
			}
		}
		else if(ming=="rand"){
			a=rand();
			cout<<"�����:"<<a<<endl;
		}
		else if(ming=="sort"){
			cout<<"�������������ĸ���:";
			cin>>b;
			cout<<"����������������磺2 6 7��"<<endl;
			for(int i=1;i<=b;i++){
				cin>>s[i];
			}
			sort(s+1,s+b+1);
			cout<<"��������";
			for(int i=1;i<=b;i++){
				cout<<s[i]<<" ";
			}
			cout<<endl;
		}
		else if(ming=="game"){
			cout<<"��ӭ����������Ϸ"<<endl;
			cout<<"�����������£�100���ڣ�"<<endl;
			a=rand()%100;
			for(int i=1; ;i++){
				cin>>d;
				if(d>a){
					cout<<"����"<<endl;
				}
				if(d<a){
					cout<<"С��"<<endl;
				}
				if(d==a){
					cout<<"��ϲ�㣬����ˣ�����"<<endl;
					break;
				}
			}
		}
		else{
			cout<<"δ֪����"<<endl;
		}
	}
}
