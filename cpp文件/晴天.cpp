#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,c,d,as,r;
int n;
string name,str,mail;
char x;
int fenshu(int t,int f){
	for(int i=1; ;i++){
		if(t==f){
			return f;
		}
		else{
			if(t>f){
				for(int j=1;j<f;j++){
					if(t%i==0&&f%i==0){
						t=i;
						f=i;
						return i;
					}
				}
			}
			if(t<f){
				for(int j=1;j<t;i++){
					if(t%i==0&&f%i==0){
						f=i;
						t=i;
						return i;
					}
				}
			}
		}
	} 
}
int main(){
	cout<<"��ð����������죬�������У�"<<endl;
	cin>>name;
	cout<<"��Ҫ����ſ��ԣ������Ҫ����������123456@qq.com"<<endl;
	cin>>mail;
	cout<<"��ӭ����"<<endl;
	while(1==1){
		cout<<"��������Ҫ��ʲô�� 1.���� 2.�������� 3.��ȡһ������� 4.ÿ��һ�� 5.���±� 6.�鿴�Լ��ļ��±� 7.�汾��Ϣ 8.�˳� 9.���������"<<endl;
		cin>>n;
		if(n==1){
			cout<<"���������ֺ���������˺���*��������/���磺1+1��"<<endl;
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
				cout<<"���:"<<a/b<<endl; 
			}
			else{
				cout<<"����������0���߷��Ŵ����ˣ�"<<endl; 
			}
		}
		else if(n==2){
			cout<<"Ŀǰ��֧�ּӷ�������������+����-"<<endl;
			cin>>x;
			if(x=='+'){
				cout<<"�������һ�����ķ�ĸ:";
				cin>>a;
				cout<<"�������һ�����ķ���:";
				cin>>b;
				cout<<"������ڶ������ķ�ĸ:";
				cin>>c;
				cout<<"������ڶ������ķ���:";
				cin>>d;
				while(1==1){
				if(a==c){
				cout<<"���:"<<a<<"��֮"<<b+d<<endl; 
				break;
				}
				else{
					as=fenshu(a,c);
					b=as*b;
					d=as*d;
					cout<<"���:"<<a<<"��֮"<<b+d<<endl; 
				}
				}
			}
			else{
				cout<<"Ŀǰ������֧��ͬ��ĸ(��Ϊ������)"<<endl;
				cout<<"�������ĸ"<<endl;
				cin>>a;
				cout<<"�������һ�����ӣ�"<<endl;
				cin>>b;
				cout<<"������ڶ�������"<<endl;
				cin>>c;
				cout<<"�����"<<a<<"��֮"<<b-c<<endl; 
			}
		}
		else if(n==3){
			r=rand();
			cout<<"�����:"<<r<<endl; 
		}
		else if(n==4){
			r=rand()%2;
			if(r==0){
				cout<<"��ˮ���ۣ���������"<<endl;
			} 
			else{
				cout<<"ǰ��ǰ���������ֶε�ǰ����"<<endl;
			}
		}
		else if(n==5){
			cout<<"��������±�����"<<endl;
			cin>>str;
			cout<<"ok"<<endl;
		}
		else if(n==6){
			cout<<"���±�����:"<<str<<endl;
		}
		else if(n==7){
			cout<<"�汾��Ϣ:"<<endl;
			cout<<"����:"<<"����"<<endl;
			cout<<"�汾��1.0"<<endl; 
		}
		else if(n==8){
			cout<<"��лʹ��"<<endl;
			return 0;
		}
		else if(n==9){
			r=rand()%2;
			if(r==0){
				cout<<"(*_*)"<<endl; 
			}
			else if(r==1){
				cout<<"��&����0��"<<endl;
			}
			else{
				cout<<"AWA"<<endl;
			}
		}
	} 
}
