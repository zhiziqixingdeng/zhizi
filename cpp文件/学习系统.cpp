#include <iostream>
#include <cstdlib>
using namespace std;
string name,shi;
int a,b,c,d;
char x;
struct ci{
	string ying;
	string zhong;
}dan[999999];
int n,w,cnt,flag;
int t,f,s;
int main(){
	cout<<"��ӭ����ѧϰϵͳ���������������:";
	cin>>name;
	cout<<"��ð���"<<name<<"������������Ծ���ѧϰ"<<endl;
	while(1==1){
		cout<<"��������Ҫѧʲô 1.��ѧ 2.���� 3.Ӣ�� 4.��������"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������Ҫѧʲô 1.������ϰ 2.�������� 3.����"<<endl;
			cin>>w;
			if(w==1){
				cout<<"�õģ���������Ҫ���㼸��:";
				cin>>cnt;
				for(int i=1;i<=cnt;i++){
					a=rand()%100+2;
					b=rand()%a+2;
					c=rand()%3;
					cout<<a;
					if(c==0){
						cout<<"+"<<b<<"=?"<<endl; 
					}
					else if(c==1){
						cout<<"-"<<b<<"=?"<<endl;
					}
					else if(c==2){
						cout<<"x"<<b<<"=��"<<endl;
					}
					else{
						cout<<"��"<<b<<"=?(�������С����)"<<endl;
					}
					cin>>d;
					if(c==0){
						if(d==a+b){
							cout<<"��ȷ!"<<endl;
							flag++;
						}
						else{
							cout<<"����Ŷ"<<endl;
						}
					}
					else if(c==1){
						if(d==a-b){
							cout<<"��ȷ!"<<endl;
							flag++;
						}
						else{
							cout<<"����Ŷ"<<endl;
						}
					}
					else if(c==2){
						if(d==a*b){
							cout<<"��ȷ�"<<endl;
							flag++;
						}
						else{
							cout<<"������"<<endl;
						}
					}
					else{
						if(d==a/b){
							cout<<"��ȷ!"<<endl;
						}
						else{
							cout<<"����"<<endl;
						}
					}
				}
				cout<<"һ����"<<cnt<<"����"<<"��������"<<flag<<"��"<<endl;
				flag=0;
			}
			else if(w==2){
				cout<<"��������Ҫ��ϰ��������������:";
				cin>>cnt;
				for(int i=1;i<=cnt;i++){
					a=rand()%10+1;
					b=rand()%10+1;
					c=a;
					d=rand()%b+1;
					int r=rand()%1;
					if(r==1){
						cout<<a<<"��֮"<<b<<"+"<<c<<"��֮"<<d<<"=(����Ҫ����)"<<endl;
						cout<<"�������ĸ:"<<endl;
						cin>>t;
						cout<<"���������:"<<endl;
						cin>>f;
						if(t==a&&f==b+d){
							cout<<"��ȷ!"<<endl;
							flag++;
						}
						else{
							cout<<"����"<<endl;
						}
					}
					else{
						cout<<a<<"��֮"<<b<<"-"<<c<<"��֮"<<d<<"=(����Ҫ����)"<<endl;
						cout<<"�������ĸ:";
						cin>>t;
						cout<<"���������:";
						cin>>f;
						if(t==a&&f==b-d){
							cout<<"��ȷ!"<<endl;
							flag++;
						}
						else{
							cout<<"����"<<endl;
						}
					}
				}
			}
			else if(w==3){
				cout<<"��������Ҫ��ϵʲô 1.���� 2.�����ֵ 3.��׳� 4.����� 5.�෴��"<<endl;
				cin>>s;
				if(s==1){
					cout<<"�����������"<<endl;
					t=rand()%100;
					cout<<"���������°�"<<endl;
					while(t!=f){
						cin>>f;
						if(f<t){
							cout<<"С��Ŷ(ע����ֲ���)"<<endl;
						}
						if(f>t){
							cout<<"����Ŷ��ע����ֲ���)"<<endl;
						}
					}
					cout<<"��ϲ��¶���!"<<endl;
				}
				else if(s==2){
					t=rand()%100;
					f=rand()%100;
					cout<<"������"<<f<<"�����"<<t<<"�ľ���ֵ"<<endl;
					cin>>a;
					if(t>f){
						flag=t-f;
					}
					else if(t<f){
						flag=t+f;
					}
					else{
						flag=0;
					}
					if(a==flag){
						cout<<"��ϲ�㣬�����"<<endl;
					}
					else{
						cout<<"�����Ŷ"<<endl;
					}
				}
				else if(s==3){
					t=rand()%10;
					cout<<"������"<<t<<"���Ľ��:";
					cin>>a;
					flag=1;
					for(int i=1;i<=t;i++){
						flag=flag*i;
					}
					if(a==flag){
						cout<<"��ϲ������!"<<endl;
					}
					else{
						cout<<"�����Ŷ!"<<endl;
					}
				}
				else if(s==5){
					t=rand()%100-50;
					cout<<"������"<<t<<"���෴��:";
					cin>>a;
					if(t>0){
						if(a==t-t*2){
							cout<<"��ȷ~"<<endl;
						}
						else{
							cout<<"������Ŷ"<<endl;
						}
					}
				}
				else if(s==4){
					a=rand()%100;
					b=rand()%100;
					c=rand()%1;
					if(c==0){
						cout<<"�����������͵����:"<<"����:"<<a<<"����:"<<b<<"�������:";
						cin>>d;
						if(d==a*b/2){
							cout<<"��ȷ!"<<endl;
						}
						else{
							cout<<"����Ŷ!"<<endl;
						}
					}
					else{
						for(int i=1;i<=a;i++){
							for(int j=1;j<=b;j++){
								cout<<"*"�� 
							}
							cout<<endl; 
						}
						cout<<endl;
						cout<<"��������������͵����:";
						cin>>d;
						if(d==a*b){
							cout<<"��ȷ"<<endl;
						}
						else{
							cout<<"����!"<<endl;
						}
					}
				}
				else{
					cout<<"û�����ѡ��Ŷ!"<<endl;
				}
			}
		}
	}
}
