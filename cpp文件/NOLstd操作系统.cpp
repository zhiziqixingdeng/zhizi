#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <cmath> 
using namespace std;
int a,b,c,d,w,flag,html;
char x;
string n;
string name;
string shi,str,sss;
int qing,ans,hhh;
bool tt; 
char tu[7][7];
struct wen{
	string ming;
	string rong;
}m[1000];
struct ju{
	string wen;
}ju[1000];
int t,f,r,ssdds;
int red=1,blue=2;
int main(){
	cout<<"��ӭʹ��nol stdϵͳ"<<endl;
	sleep(1);
	system("cls");
	cout<<"�������������:";
	cin>>name;
	cout<<"��ӭʹ�ø�ϵͳ!"<<endl;
	sleep(1);
	system("cls");
	while(1==1){
		cout<<"NOL std"<<endl;
		cout<<"***********************"<<endl;
		cout<<"������������"<<endl;
		cout<<"================================"<<endl;
		cout<<"1.���±�    2.�½��ļ�   3.��Ϸ"<<endl;
		cout<<"  4.cmd   5.����   6.��ѧ������     ��������:"<<name<<endl;
		cout<<" 7.�ٶ������    8.ÿ��һ��    9.С˵����   ��������:";
		if(qing==1){
			cout<<"����!"<<endl;
		}
		else if(qing==2){
			cout<<"�ѹ�"<<endl;
		}
		else if(qing==3){
			cout<<"�ھ�"<<endl;
		}
		else{
			cout<<"����"<<endl;
		}
		cout<<"   10.��ʱ��   11.�ļ���  12.��ͼ   "<<endl;
		cout<<"     13.��¼����   14.���Թܼ�"<<endl;	
		cout<<"==================================="<<endl;
		cin>>n;
		if(n=="1"){
			cout<<"��������Ҫ 1.�鿴��ʱ 2.д����"<<endl;
			cin>>w;
			if(w==1){
				if(shi==""){
					cout<<"��Ǹ������û����д����Ŷ"<<endl;
				} 
				else{
					cout<<"����:"<<shi<<endl;
				}
			}
			else if(w==2){
				cout<<"�������������:";
				cin>>shi;
				cout<<"�������!"<<endl;
			}
			else{
				cout<<"����!"<<endl;
			}
		}
		else if(n=="2"){
			ans++;
			cout<<"��������ļ�����:";
			cin>>m[ans].ming;
			cout<<"����������:";
			cin>>m[ans].ming;
			cout<<"�ļ��������!"<<endl;
		}
		else if(n=="3"){
		cout<<"����������(0~100)"<<endl;
				a=rand()%100;
				while(b!=a){
					if(a>b){
						cout<<"����"<<endl;
					}
					if(a<b){
						cout<<"С��"<<endl;
					}
				}
				cout<<"�¶���!"<<endl;
			}
		else if(n=="4"){
			cout<<"����������:";
			cin>>str;
			if(str=="help"){
				cout<<"����start���Դ��ļ�"<<endl;
				cout<<"��ʱ��û�и��๦��"<<endl; 
			}
			else if(str=="start"){
				cout<<"����������ļ����ļ���:";
				cin>>sss;
				for(int i=1;i<=ans;i++){
					if(sss==m[i].ming){
						cout<<"�ļ�����:";
						cout<<m[i].ming<<endl;
						cout<<"�ļ�����:";
						cout<<m[i].rong<<endl;
						cout<<"=====================";
						sleep(1);
					}
					cout<<"�򿪽���"<<endl;
				}
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n=="5"){
			cout<<"����������ʹ��"<<endl;
			cout<<"������󶼻�����ʾ"<<endl;
			sleep(1);
			system("cls");
		}
		else if(n=="6"){
			cout<<"��������Ҫʲô���͵ļ��� 1.���� 2.���� 3.�ٷֱ� 4.����ֵ"<<endl;
			cin>>w;
			if(w==1){
				cout<<"����������������һ���������*�ǳ˺ţ�/�ǳ���,����˵:6*9):";
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
					cout<<"���:"<<a/b;
					if(a%b==0){
						cout<<endl;
					} 
					else{
						cout<<"......"<<a%b<<endl;
					}
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==2){
				cout<<"�������һ�������ķ�ĸ:";
				cin>>a;
				cout<<"�������һ�������ķ���:";
				cin>>b;
				cout<<"������ڶ��������ķ�ĸ:";
				cin>>c;
				cout<<"������ڶ������ķ���:";
				cin>>d;
				cout<<"�����������(*�ǳ˺�,/�ǳ���):"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==c){
						cout<<"���:"<<a<<"��֮"<<b+d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"��֮"<<b*c+a*d<<endl;
					}
				}
				else if(x=='-'){
					if(a==c){
						cout<<"���:"<<a<<"��֮"<<b-d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"��֮"<<b*c-a*d<<endl;
					}
				}
				else if(x=='*'){
					cout<<"���:"<<a*c<<"��֮"<<b*d<<endl;
				}
				else if(x=='/'){
					cout<<"���:"<<a*d<<"��֮"<<b*c<<endl; 
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else if(w==3){
				cout<<"��������ֵ:";
				cin>>a;
				cout<<"��������Ҫ�ٷ�֮��:";
				cin>>b;
				cout<<"������"<<endl;
				sleep(1);
				c=a/100;
				cout<<"���:"<<b*c<<endl;
			}
			else if(w==4){
				cout<<"�������׼:";
				cin>>a;
				cout<<"��������Ҫ�����ֵ����:";
				cin>>b;
				if(b==a){
					cout<<"0"<<endl; 
				}
				else if(b<a){
					cout<<a-b;
				}
				else{
					cout<<a+b<<endl;
				}
			}
			else{
				cout<<"�������"<<endl;
			}
		}
		else if(n=="7"){
			system("start https://www.baidu.com/");
	}
		else if(n=="8"){
			cout<<"�������ȡ��ʽ 1.ϵͳ�Դ� 2.�Զ���"<<endl;
			cin>>w;
			if(w==1){
				a=rand()%2;
				if(a==0){
					cout<<"��ˮ���ۣ���������"<<endl;
				}
				else if(a==1){
					cout<<"�����յ��磬���κ�����"<<endl;
				}
				else{
					cout<<"���������ڷܣ�������ڻ��ۡ�"<<endl;
				}
			}
			else if(w==2){
				cout<<"��������Ҫ��ʲô 1.�鿴���� 2.��������"<<endl;
				cin>>hhh;
				if(hhh==1){
					if(ans==0){
						cout<<"����û����������"<<endl;
					}
					else{
						while(a!=0){
						a=rand()%ans;
					}
					cout<<ju[a].wen<<endl;
					}
				}
				else if(hhh==2){
					cout<<"��������������:";
					ans++;
					cin>>ju[ans].wen;
					cout<<"���!"<<endl;
				}
				else{
					cout<<"����"<<endl;
				} 
			}
		}
		else if(n=="9"){
			cout<<"��ʼ����С˵"<<endl;
			system("start http://www.qidian.com");
		}
		else if(n=="10"){
			cout<<"��������Ҫ��ʱ����Сʱ:";
			cin>>a;
			cout<<"��������Ҫ��ʱ��������:";
			cin>>b;
			cout<<"��������Ҫ��ʱ����:";
			cin>>c;
			d=a*3600+b*60+c;
			sleep(d);
			cout<<"��ʱ���"<<endl; 
		}
		else if(n=="11"){
			cout<<"����������ļ�"<<endl;
			for(int i=1;i<=ans;i++){
				cout<<i<<":"<<m[ans].ming;
			}
			sleep(1);
			cout<<"��������Ҫ�򿪵��ļ�:";
			cin>>a;
			if(a>ans||a<=0){
				cout<<"����!"<<endl;
			}
			else{
				cout<<"�ļ�����:"<<m[a].ming;
				cout<<"�ļ�����:"<<endl;
				cout<<m[a].rong<<endl;
			}
		}
		else if(n=="12"){
			cout<<"��ӭ���������λ�ͼ"<<endl;
			cout<<"�����볤:";
			cin>>a;
			cout<<"�������:";
			cin>>b;
			cout<<"��������Ҫ��ӡ��ͼ��:";
			cin>>x;
			cout<<"��������ʵ�Ļ��ǿ��� 1.ʵ�� 2.����"<<endl;
			cin>>c;
			cout<<"���ɵ�ͼ��:";
			sleep(1);
			for(int i=1;i<=a;i++){
				for(int j=1;j<=b;j++){
					if(c==1){
						cout<<x;
					}
					else{
						if(i==1||j==1){
							cout<<x;
						}
						else{
							cout<<" "; 
						}
					}
				}
				cout<<endl;
			} 
		}
		else if(n=="13"){
			cout<<"������������� 1.���� 2.�ѹ� 3.�ھ�:";
			cin>>qing;
			if(qing!=1||qing!=2||qing!=3){
				cout<<"����!"<<endl;
				qing=0;
			} 
			else{
				cout<<"ok"<<endl;
			}
		}
		else if(n=="14"){
			cout<<"��������Ҫ 1.�ػ� 2.ˢ��"<<endl;
			cin>>w;
			if(w==1){
				system("shutdown -s -t 3");
			} 
			else if(w==2){
				sleep(1);
				system("cls");
			} 
			else{
				cout<<"����"<<endl;
			}
		}
	}
}
