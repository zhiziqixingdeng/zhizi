#include <iostream>
using namespace std;
int a,b,c,d;
double t,f;
int n;
char x;
int main(){
	while(true){
		cout<<"��ӭ��������������������Ҫʲô���͵ļ��� 1.�������� 2.�������� 3.С������ 4.�ٷֱ� 5.�˳� "<<endl;
		cin>>n;
		if(n==1){
			cout<<"���������ֺͷ��ţ�*�ǳˣ�/�ǳ�����:5 * 1)"<<endl;
			cin>>a>>x>>b;
			if(x=='+'){
				cout<<"�����"<<a+b<<endl;
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
				cout<<"����"<<endl;
			}
		}
		else if(n==2){
			cout<<"�������һ�����ķ�ĸ"<<endl;
			cin>>a;
			cout<<"�������һ�����ķ���"<<endl;
			cin>>b;
			cout<<"������ڶ������ķ�ĸ"<<endl;
			cin>>c;
			cout<<"������ڶ������ķ���"<<endl;
			cin>>d;
			cout<<"�������������(*�ǳˣ�/�ǳ�)"<<endl;
			cin>>x;
			if(x=='+'){
				if(a==c){
					cout<<"���"<<a<<"/"<<b+d<<endl; 
				}
				else{
					cout<<"���:"<<a*c<<"/"<<b*c+d*a<<endl; 
				}
			}
			else if(x=='-'){
				if(a==c){
					cout<<"���"<<a<<"/"<<b-d<<endl; 
				}
				else{
					cout<<"���:"<<a*c<<"/"<<b*c-d*a<<endl; 
				}
			}
			else if(x=='*'){
				cout<<"���:"<<a*c<<"/"<<b*d<<endl;
			}
			else if(x=='/'){
				cout<<"���:"<<a*d<<"/"<<b*c;
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==3){
			cout<<"���������ֺͷ��ţ�*�ǳˣ�/�ǳ�����:5.0 * 1.5)"<<endl;
			cin>>t>>x>>f;
			if(x=='+'){
				cout<<"�����"<<t+f<<endl;
			} 
			else if(x=='-'){
				cout<<"���:"<<t-f<<endl;
			}
			else if(x=='*'){
				cout<<"���:"<<t*f<<endl;
			}
			else if(x=='/'&&f!=0){
				cout<<"���:"<<t/f<<endl;
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==5){
			cout<<"ȷ��Ҫ�˳��� 1.�˳� 2.���˳�"<<endl;
			cin>>d;
			if(d==1){
				return 0;
			}
			else{
				cout<<"δ���˳�"<<endl;
			}
		}
		else if(n==4){
			cout<<"������ٷֱ���"<<endl;
			cin>>a;
			cout<<"������Ҫ�ٷ�֮��"<<endl;
			cin>>b;
			c=a/100*b;
			cout<<"���:"<<c<<endl;
		}
	} 
}
