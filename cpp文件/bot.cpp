#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
int a,b,c,d,q,w,s;
double t,f;
char x;
string name,mail,str,mima;
int main(){
	cout<<"�������������:";
	cin>>name;
	cout<<"�������������:";
	cin>>mail;
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.���� 2.С��Ϸ 3.������Ϣ 4.���ݿ⣨��Ҫ��Ȩ�� 5.���±� 6.�˳�"<<endl;
		cin>>q;
		if(q==1){
			cout<<"��������Ҫ��ʲô 1.�������� 2.�������� 3.С������"<<endl;
			cin>>w;
			if(w==1){
				cout<<"������Ҫ�������ʽ(�˺���*,������/,��:7*4)"<<endl;
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
					cout<<"���:"<<a/b<<"��������������"<<a%b<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==2){
				cout<<"�������һ�����ֵķ�ĸ:"<<endl;
				cin>>a;
				cout<<"�������һ�����ֵķ���:"<<endl;
				cin>>b;
				cout<<"������ڶ������ֵķ�ĸ:"<<endl;
				cin>>c;
				cout<<"������ڶ������ֵķ���:"<<endl;
				cin>>d;
				cout<<"������������ţ��˺���*��������/)"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==c){
						cout<<"���:"<<a<<"/"<<b+d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"/"<<b*c-d*a<<endl; 
					}
				}
				else if(x=='-'){
					if(a==c){
						cout<<"���:"<<a<<"/"<<b-d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"/"<<b*c-a*d<<endl; 
					}
				}
				else if(x=='*'){
					cout<<"���:"<<a*c<<"/"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"���:"<<a*d<<"/"<<b*c<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==3){
				cout<<"��������ʽ(*�ǳ˺�,/�ǳ���,��:5.0-2.3)"<<endl;
				cin>>t>>x>>f;
				if(x=='+'){
					cout<<"���:"<<t+f<<endl;
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
			
		}
		else if(q==2){
		cout<<"��������Ҫ��ʲôС��Ϸ 1.ʯͷ������ 2.������Ϸ 3.�����ʦ 4.����С��Ϸ"<<endl;
		cin>>w;
		if(w==1){
			d=rand()%2;
			cout<<"��������Ҫ��ʲô 1.ʯͷ 2.���� 3.��"<<endl;
			cin>>a;
			if(d==0){
				cout<<"������"<<endl;
			} 
			if(d==1){
				cout<<"��Ӯ��"<<endl;
			}
			if(d==2){
				cout<<"ƽ��"<<endl;
			}
		}
		else if(w==2){
			c=rand()%100;
			cout<<"��ӭ����������Ϸ"<<endl;
			while(true){
				cout<<"��������Ҫ�µ�����:";
				cin>>a;
				if(a>c){
					cout<<"����"<<endl; 
				}
				else if(a<c){
					cout<<"С��"<<endl;
				}
				else{
					cout<<"��ϲ�㣬�¶���!"<<endl;
					break;
				}
			}
		}
		else if(w==3){
			cout<<"��������Ҫ��ϰ��������"<<endl;
			cin>>a;
			for(int i=1;i<=a;i++){
				b=rand()%100;
				c=rand()%100;
				d=rand()%1;
				if(d==0){
					cout<<b<<"+"<<c<<"=��";
					cin>>s;
					if(s==b+c){
						cout<<"��ȷ"<<endl;
					}
				}
			}
		}
	}
	else if(q==3){
		cout<<"����:"<<name<<endl;
		cout<<"����:"<<mail<<endl;
	}
	else if(q==4){
		cout<<"������������ܽ������ݿ�:";
		cin>>mima;
		if(mima=="shukudfs"){
			cout<<"��ӭ!"<<endl;
			cout<<"������Ҫ���ҵ����� 1.�洢��ַ 2.bot�汾"<<endl;
			cin>>w;
			if(w==1){
				cout<<"name�Ĵ洢��ַΪ:"<<&name<<endl;
				cout<<"mail�Ĵ����ַΪ:"<<&mail<<endl;
				cout<<"���±��Ĵ洢��ַ:"<<&str<<endl;
			}
			else if(w==2){
				cout<<"bot�汾:"<<"1.0"<<endl; 
			}
		}
		else{
			cout<<"�������Ȩ�޲���!"<<endl;
		}
	}
	else if(q==5){
		cout<<"��������Ҫ��ʲô 1.���� 2.�鿴"<<endl;
		cin>>w;
		if(w==1){
			cout<<"��������±�����:";
			cin>>str;
			cout<<"Ok"<<endl;
		}
		else{
			cout<<"���±�����:"<<str<<endl;
		}
	}
	else if(q==6){
		cout<<"�ټ��"<<endl;
		return 0;
	}
	else{
		cout<<":/����û���������"<<endl;
	}
	}
}
