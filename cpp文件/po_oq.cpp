#include <iostream>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <unistd.h>
using namespace std;
string str,name,jishi;
int n;
int a,b,c,d,cnt,flag,sss,ans;
char y;
double h[1000];
struct ju{
	string biao;
	string rong;
	int flag1;
}ju[10000];
void chuli(string x){
	if(x.find("���")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("����")!=std::string::npos||x.find("ello")!=std::string::npos){
		cout<<"��ð�������po_oq����zhizi�����Ļ�����"<<endl;
	}
	else if(x.find("�ټ�")!=std::string::npos||x.find("bye")!=std::string::npos){
		cout<<"�ټ��"<<endl;
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"��������Ҫʲô���͵ļ��� 1.���� 2.����"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������ʽ(*�ǳ˺ţ�/�ǳ���,��:7*8)"<<endl;
			cin>>a>>y>>b;
			if(y=='+'){
				cout<<"���:"<<a+b<<endl;
			}
			else if(y=='-'){
				cout<<"���:"<<a-b<<endl;
			}
			else if(y=='*'){
				cout<<"���:"<<a*b<<endl;
			}
			else if(y=='/'&&b!=0){
				cout<<"���:"<<a/b<<endl;
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
			cout<<"�������������(*�ǳ˺ţ�/�ǳ���):";
			cin>>y;
			if(y=='+'){
				if(a==c){
					cout<<"���:"<<a<<"/"<<b+d<<endl;
				}
				else{
					cout<<"���:"<<a*c<<"/"<<b*c+a*d<<endl;
				}
			}
			else if(y=='-'){
				if(a==c){
					cout<<"���:"<<a<<"/"<<b-d<<endl;
				}
				else{
					cout<<"���:"<<a*c<<"/"<<b*c-a*d<<endl;
				}
			}
			else if(y=='*'){
				cout<<"���:"<<a*c<<"/"<<b*d<<endl; 
			}
			else if(y=='/'){
				cout<<"���:"<<a*d<<"/"<<b*c;
			}
			else{
				cout<<"����"<<endl; 
			}
		}
	}
	else if(x.find("��ʱ")!=std::string::npos){
		cout<<"��������Ҫ��ʱ��ʱ��(��):";
		cin>>a;
		sleep(a);
		cout<<"��ʱ���"<<endl;
	}
	else if(x.find("��Ϸ")!=std::string::npos||x.find("game")!=std::string::npos){
		cout<<"��ӭ����������Ϸ"<<endl;
		cout<<"���������£���Χ0~100"<<endl;
		d=rand()%100;
		while(a!=d){
			cin>>a;
			if(a>d){
				cout<<"����"<<endl;
			}
			if(a<d){
				cout<<"С��"<<endl;
			}
		}
		cout<<"��ϲ�㣬�¶���!"<<endl;
	}
	else if(x.find("��ʫ")!=std::string::npos||x.find("����")!=std::string::npos){
		int r=rand()%4;
		if(r==0){
			cout<<"��������ǰ���¹⣬���ǵ���˪����ͷ�����£���ͷ˼����"<<endl;
		}
		else if(r==1||r==2){
			cout<<"�����յ��磬���κ�����!"<<endl;
		}
		else if(r==3){
			cout<<"���һ�������ϣ�����ʫ�鵽����"<<endl; 
		}
		else{
			cout<<"�������ķ����ˣ���ɽ���⻯Ϊ��"<<endl; 
		}
	}
	else if(x.find("c++")!=std::string::npos||x.find("���")!=std::string::npos||x.find("java")!=std::string::npos){
		cout<<"�������?��Ҳѧ"<<endl;
	}
	else if(x.find("��ѧ")!=std::string::npos){
		cout<<"�һ�һЩ�������ѧ������������Ҫ�ĸ� 1.ƽ�����������) 2.�����ֵ 3.����(ʱ��) 4.��������� 5.����"<<endl;
			cin>>c;
			if(c==1){
				cout<<"�����볤�Ϳ�(�ÿո����):";
				cin>>a>>b;
				cout<<"���:"<<a*b<<endl;
			}
			else if(c==2){
				cout<<"������Ҫ�����ֵ������:";
				cin>>a;
				cout<<"���:"<<abs(a)<<endl;
			}
			else if(c==3){
				cout<<"����������:";
				cin>>a;
				sss=c;
				b=0;
				c=0;
				d=0;
				for(int i=1;a<3600;i++){
					a=a/3600;
					b++;
				}
				for(int i=1;a<60;i++){
					a=a/60;
					c++;
				}
				d=a;
				cout<<"ʱ��Ϊ"<<b<<"Сʱ"<<c<<"��"<<d<<"��"<<endl;
				c=sss;
			}
			else if(c==4){
				cout<<"��������Ҫʲô���͵� 1.ƽ�� 2.����"<<endl;
				cin>>n;
				if(n==1){
					cout<<"������׺͸�(֮���ÿո��������������):";
					cin>>a>>b;
					cout<<"���:"<<a*b/2<<endl;
				}
				else{
					cout<<"������׺͸�(֮���ÿո��������������):";
					cin>>a>>b;
					cout<<"���:"<<a*b/3<<endl; 
				}
			}
			else if(c==5){
				cout<<"��������Ҫ���ٸ�������:";
				cin>>n;
				for(int i=1;i<=n;i++){
					cout<<"�������"<<i<<"����:";
					cin>>h[i];
				}
				sort(h+1,h+n+1);
				cout<<"������:"; 
				for(int i=1;i<=n;i++){
					cout<<h[i]<<" ";
				}
				cout<<endl;
			}
		}
	else if(x.find("����")!=std::string::npos){
		cout<<"��������Ҫ��ʲô 1.�鿴���� 2.д���£��Ḳ�ǵ���ǰ��)"<<endl;
		cin>>n;
		if(n==1){
			cout<<"��������:";
			if(jishi!=""){
				cout<<jishi<<endl;
			}
			else{
				cout<<"��ʱ��û�м���Ŷ"<<endl;
			}
		}
		else if(n==2){
			cout<<"�������������:";
			cin>>jishi;
			cout<<"�������"<<endl;
		}
		else{
			cout<<"����"<<endl;
		}
	}
	else if(x.find("�齱")!=std::string::npos){
		cout<<"��ʼ�齱��������1"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�齱��"<<endl;
			int r=rand()%2;
			sleep(2);
			cout<<"��Ʒ:";
			if(r==1){
				cout<<"һ����"<<endl;
			}
			else{
				cout<<"���"<<endl; 
			}
		}
		else{
			cout<<"û�п�ʼ�齱"<<endl;
		}
	}
	else if(x.find("����")!=std::string::npos||x.find("help")!=std::string::npos){
		cout<<"�������һ�´���ľ���:"<<endl;
		cout<<"�齱�����£���ѧ�����㣬���£���ʫ����Ϸ��game����ã��ټ���hi,����"<<endl;
		cout<<"����������ϲ"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"��ӭ�������ݿ�,��������Ҫ��ʲô 1.�������� 2.�鿴���� 3.�鿴�����б�"<<endl;
		cin>>n;
		if(n==1){
			ans++;
			cout<<"������������ݵı���"<<endl;
			cin>>ju[ans].biao;
			cout<<"������������ݵ�����:"<<endl;
			cin>>ju[ans].rong;
			cout<<"����������ɣ����ı����"<<ans<<endl;
			ju[ans].flag1=1;
		}
		else if(n==2){
			cout<<"������������ݵı��:";
			cin>>n;
			if(ju[n].flag1==1){
				cout<<"����:"<<ju[n].biao<<endl;
				cout<<"����:"<<ju[n].rong<<endl;
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==3){
			cout<<"���ݱ�:"<<endl;
			sleep(1);
			for(int i=1;i<=ans;i++){
				cout<<"����:"<<ju[i].biao<<" "<<"���:"<<i<<endl;
			}
		} 
	}
	else{
		cout<<"�Բ����Һ�����������������������鿴����o"<<endl;
	}
}
int main(){
	cout<<"��ã�����po_oq����������?";
	cin>>name;
	cout<<"��ð���"<<name<<endl;
	cout<<"zhizi��ܰ��ʾ������������Ի�ð���"<<endl;
	while(1==1){
		cout<<"��:";
		cin>>str;
		cout<<"po_oq��";
		chuli(str);
	}
}
