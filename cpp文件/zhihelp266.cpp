#include <iostream>
#include <cstdlib>
using namespace std;
int cnt,qian,a,b,c,d,g;
char x;
string n,ma,str;
int s,r;
struct hao{
	string name;
	string mail;
}h[3];
int cundang,cundang2,shu;
int main(){
	cout<<"����������:";
	cin>>h[1].name;
	cout<<"����������/�ֻ���:";
	cin>>h[1].mail;
	cout<<"��ӭ!������zhihelp366"<<endl;
	while(1==1){
		cout<<"��������Ҫ��ʲô 1.���� 2.����С��Ϸ 3.������������������ 4.���±� 5.�˳� 6.���ݿ⣨Ҫ���룩"<<endl;
		cin>>s;
		if(s==1){
			cout<<"��������Ҫʲô���͵ļ��� 1.�������� 2.��������"<<endl;
			cin>>r;
			if(r==1){
				cout<<"��������ʽ��*�ǳ˺ţ�/�ǳ��ţ���:1*0)"<<endl;
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
			else{
				cout<<"�������һ�����ķ�ĸ:";
				cin>>a;
				cout<<"�������һ�����ķ���:";
				cin>>b;
				cout<<"������ڶ������ķ�ĸ:";
				cin>>c;
				cout<<"������ڶ������ķ���:";
				cin>>d;
				cout<<"��������ţ�*�ǳ˺ţ�/�ǳ���)"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==c){
						cout<<"���:"<<a<<"/"<<b+d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"/"<<b*c+d*a<<endl;
					}
				}
				else if(x=='-'){
					if(a==c){
						cout<<"���:"<<a<<"/"<<b-d<<endl;
					}
					else{
						cout<<"���:"<<a*c<<"/"<<b*c-d*a<<endl;
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
		}
		else if(s==2){
			cout<<"��������Ҫ��ʲô 1.������Ϸ 2.����ģ����(�д浵)"<<endl;
			cin>>r;
			if(r==1){
				cout<<"�Ѿ���������������������ְ�!"<<endl;
				shu=rand()%100;
				while(1==1){
					cin>>a;
					if(a==shu){
						cout<<"��ϲ��¶��˰�"<<endl;
						break;
					}
					else if(a<shu){
						cout<<"С��"<<endl;
					}
					else{
						cout<<"����"<<endl;
					}
				}
			}
			else{
				cout<<"���������д浵�� 1.�� 2.û��"<<endl;
				cin>>d;
				if(d==1){
					cout<<"������浵��1:";
					cin>>cundang;
					cnt=cundang;
					cout<<"������浵��2:";
					cin>>cundang2;
					cout<<"����"<<endl;
					qian=cundang2;
				}
				else{
					cout<<"û���⣬�Ѿ�Ϊ�㿪������Ϸ"<<endl;
				}
				cout<<"�㿪ʼ����"<<endl;
				while(1==1){
					cout<<"��������Ҫ��ʲô 1.��� 2.��Ϸ"<<endl;
					cin>>c;
					qian+=5;
					cout<<"��׬��5��Ǯ����������:"<<qian<<"��Ǯ"<<endl;
					cnt++;
					if(cnt%3==0){
						cout<<"�пͻ�˵��ܺã����Ǹ�����:"<<cnt/3<<"��Ǯ"<<endl;
						qian+=cnt/3;
					}
					if(cnt%5==0){
						cout<<"����˵���������̼ң���˵:1.û�� 2.�һ�����Ҫ�Ľ��ĵط�";
						cin>>b;
						if(b==1){
							cout<<"�ͻ�˵:ϣ�����������"<<endl;
						}
						else{
							cout<<"�ͻ�˵:���ǫ�飬Ҫ������Ͷ����8��Ǯ"<<endl;
							qian+=8;
						}
					}
					if(cnt%7==0){
						cout<<"�ͻ���������⣬������10��Ǯ!"<<endl;
						qian+=10;
					}
					if(cnt==50){
						cout<<"��Ҫ��������:1.Ҫ 2.��Ҫ"<<endl;
						cin>>g;
						if(g==1){
							cout<<"����"<<endl;
						}
						else{
							cout<<"�浵1����:"<<cnt<<endl;
							cout<<"�浵2����:"<<qian<<endl;
						}
					}
				}
			}
		}
		else if(s==3){
			cout<<"ih"<<endl;
			cout<<"�˹�����:";
			for(int i=1;i<=7;i++){
				cout<<"��:";
				cin>>n;
				if(n=="���"){
					cout<<"��Ҳ��"<<endl;
				}
				else if(n=="������"){
					cout<<"����"<<endl;
				}
				else{
					cout<<"���ɰ���"<<endl;
				}
			}
		}
		else if(s==4){
			cout<<"��������Ҫ��ʲô 1.�����±� 2.д����"<<endl;
			cin>>a;
			if(a==1){
				cout<<"���±�:"<<str<<endl;
			}
			else{
				cout<<"����������:";
				cin>>str;
				cout<<"ok"<<endl; 
			}
		}
		else if(s==5){
			cout<<"��лʹ��"<<endl;
			return 0;
		}
		else if(s==6){
			cout<<"����������:";
			cin>>ma;
			if(ma=="0929NIHAOZHIZI++"){
				cout<<"��ӭ"<<endl;
				cout<<"��������Ҫ��ʲô 1.�鿴��������������ַ 2.bot�汾"<<endl;
				cin>>g;
				if(g==1){
					cout<<"name:"<<h[1].name<<endl;
					cout<<"abcd:"<<&a<<&b<<&c<<&d<<endl;
				}
				else{
					cout<<"�汾:2.0"<<endl; 
				}
			}
		}
	}
}
