#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <cmath>
#include <windows.h>
#include <unistd.h>
using namespace std;
struct hao{
	string name;
	int vip;
}s[3];
int a,b,c,d,r;
string shi;
struct shuju{
	string biaoti;
	string rong;
	string ma;
	int cun; 
}cv[100];
int ruan1,ruan2,ruan3,ruan4,ruan5,n,w,cnt;
char x,y;
void chuli(string x){
	if(x.find("���")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("Hi")!=std::string::npos||x.find("����")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"��ã���������"<<endl;
		}
		else{
			cout<<"hi��"<<endl; 
		}
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�Ѿ�������������"<<endl;
		cout<<"��������������һ��������ţ�*�ǳ˺ţ�/�ǳ��ţ��磺3 * 4)"<<endl;
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
			cout<<"�����Ѿ�����"<<endl;
		}
		else{
			cout<<"����������0���߷��Ŵ���"<<endl;
		}
	}
	else if(x.find("ְҵ")!=std::string::npos||x.find("����")!=std::string::npos){
		cout<<"�ҵĳ����ڼ����+��ѧ�������ϼ�򵥵�"<<endl; 
	}
	else if(x.find("��ʫ")!=std::string::npos){
		r=rand()%2;
		if(r==0){
			cout<<"�����յ��磬���κ�������˭֪���вͣ����������ࡣ"<<endl; 
		}
		else if(r==1){
			cout<<"�Ҽ�ϴ���ͷ�飬��໨����ī�ۣ���Ҫ�˿����ɫ��ֻ��������Ǭ��"<<endl;
		}
		else{
			cout<<"Ҫ��������һ�ף�"<<endl;
		}
	}
	else if(x.find("����")!=std::string::npos||x.find("��")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"���������ѡ��"<<endl;
		}
		else{
			cout<<"��ͬ�����ѡ��"<<endl;
		}
	}
	else if(x.find("ש��")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"��ש�ҡ�"<<endl;
		}
		else{
			cout<<"ש�ҵĽ�����ǽ���"<<endl;
		}
	}
	else if(x.find("���")!=std::string::npos){
		cout<<"���⣬������û�����"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"������嫵����氡"<<endl; 
	}
	else if(x.find("��")!=std::string::npos){
		cout<<"������������Ľ��ݣ��Ұ������壡"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�����й���"<<endl; 
	}
	else if(x.find("ɳ��")!=std::string::npos||x.find("ɵ��")!=std::string::npos||x.find("ɷ��")!=std::string::npos||x.find("������")!=std::string::npos){
		r=rand()%2;
		if(r==0){
			cout<<"�벻Ҫ���ˣ�лл���"<<endl;
		}
		else if(r==1){
			cout<<"���ڳ���"<<endl;
		}
		else{
			cout<<"��Ҳ�Ƿ������������"<<endl;
		}
	}
	else if(x.find("��")!=std::string::npos){
		cout<<"��ʲô�Ҳ���ش�"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�Ҳ�ϣ�������������"<<endl; 
	}
	else if(x.find("Сè")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"����Сè�ܿɰ���"<<endl;
		} 
		else{
			cout<<"�Ҿ���Сèͦ����"<<endl;
		}
	}
	else if(x.find("������")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"�ҵĴ�������С����"<<endl;
		}
		else{
			cout<<"�ҵĴ�������һ��΢������-����"<<endl;
		}
	}
	else if(x.find("��ɱ")!=std::string::npos){
		cout<<"����������ã�Ϊ��Ҫ�벻���أ�"<<endl; 
	}
	else if(x.find("help")!=std::string::npos||x.find("����")!=std::string::npos){
		cout<<"ֻ��˵һ�����������������Ұ������"<<endl; 
	}
	else if(x.find("����")!=std::string::npos||x.find("ʱ��")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"�Լ���������"<<endl;
		}
		else{
			cout<<"�Լ������Ҳ��뿴��"<<endl;
		}
	}
	else if(x.find("��ʱ")!=std::string::npos){
		cout<<"�Ҳ����ʱ��"<<endl; 
	}
	else if(x.find("��Ϸ")!=std::string::npos||x.find("game")!=std::string::npos){
		cout<<"�������������Ϸ��"<<endl;
		cout<<"���뵽��һ��100���ڵ��飬��������"<<endl;
		r=rand()%100;
		while(1==1){
			cout<<"��������Ҫ�µ�����";
			cin>>a;
			if(a<r){
				cout<<"С��"<<endl;
			}
			else if(a>r){
				cout<<"����"<<endl;
			}
			else{
				cout<<"�¶��ˣ�"<<endl;
				break;
			}
		}
	}
	else if(x.find("������")!=std::string::npos||x.find("����")!=std::string::npos){
		cout<<"���ǻ�������"<<endl; 
	}
	else if(x.find("qq")!=std::string::npos||x.find("QQ")!=std::string::npos){
		cout<<"��û��qq"<<endl;
	}
	else if(x.find("΢��")!=std::string::npos){
		cout<<"Ŷ����Ҫ��΢�ţ�û��"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�������ҵĴ�����"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"����Ҫ��������ĺܶడ"<<endl; 
	}
	else if(x.find("yyds")!=std::string::npos||x.find("YYDS")!=std::string::npos){
		cout<<"��Զ����"<<endl;
	}
	else if(x.find("666")!=std::string::npos){
		cout<<"999"<<endl; 
	}
	else if(x.find("����")!=std::string::npos||x.find("����")!=std::string::npos){
		cout<<"���ˣ�zhizi_bot���Ǹ�ϰ�ˣ��ҵ�ȥ����һ��awa"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�������Ǻ����ܵİ�"<<endl; 
	}
	else{
		r=rand()%2;
		if(r==0){
			cout<<"���Ʋ���"<<endl; 
		}
		else if(r==1){
			cout<<"�Һ�����������"<<endl; 
		}
		else{
			cout<<"����������"<<endl;
		}
	}
}
string acd;
int main(){
	cout<<"�������������:";
	cin>>s[1].name;
	if(s[1].name=="zhizi"){
		cout<<"��ӭ�����ߣ�"<<endl;
		s[1].vip=1;
	}
	else{
		cout<<"�û�����"<<endl;
	}
	while(1==1){
		cout<<"��������Ҫ���ĸ��ļ��� 1.���㹤�� 2.С��Ϸ 3.��ʱ�� 4.Ӧ���̵� ";
			cout<<"5.AIС���� ";
			cout<<"6.���±� ";
			cout<<"7.˭���Ե� ";
			cout<<"8.С���ݿ� ";
			cout<<"9.����Ȥζ��ӡ�� ";
		cout<<endl;
		cout<<"��ʾ����������ǰ��ı�žͿ��Դ�Ŷ"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�����˼����ļ���"<<endl;
			cout<<"��������Ҫ�ĸ���� 1.�������� 2.��������"<<endl;
			cin>>w;
			if(w==1){
				cout<<"�������������ֺ������(*�ǳ˺ţ�/�ǳ��ţ�����˵��6*7)"<<endl;
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
					cout<<"���:"<<a/b<<"������������"<<a%b<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else{
				cout<<"�������һ�����ķ�ĸ:";
				cin>>a;
				cout<<"������ڶ������ķ�ĸ:";
				cin>>b;
				cout<<"�������һ�����ķ���:";
				cin>>c;
				cout<<"�������2�����ķ���:";
				cin>>d;
				cout<<"������������ţ�*�ǳ˺�,/�ǳ���)"<<endl;
				cin>>x;
				if(x=='+'){
					if(a==b){
						cout<<"���:"<<a<<"/"<<d+c<<endl;
					}
					else{
						cout<<"���:"<<a*b<<"/"<<a*c+d*b<<endl;
					}
				}
				
			}
		}
		else if(n==2){
			cout<<"��������Ҫ��ʲô��Ϸ 1.������Ϸ 2.����¼�"<<endl;
			cin>>w;
			if(w==1){
				cout<<"��Χ�ǣ�0~100"<<endl;
				cout<<"������������"<<endl; 
				r=rand()%100;
				while(a!=r){
					if(a<r){
						cout<<"С��"<<endl;
					}
					if(a>r){
						cout<<"����"<<endl;
					}
				}
				cout<<"���:"<<"��ϲ�㣬�¶���"<<endl;
			}
			else{
				cout<<"����1���Ծ����������"<<endl;
				cin>>a;
				if(a==1){
					r=rand()%3;
					if(r==0){
						cout<<"��һ��ˮ"<<endl;
					}
					else if(r==2){
						cout<<"�������������3����"<<endl;
					}
					else{
						cout<<"û��Ŷ"<<endl;
					}
				}
				else{
					cout<<"��ȡ����������"<<endl;
				}
			}
		}
		else if(n==3){
			cout<<"��������Ҫ��ʱ������"<<endl;
			cin>>a;
			sleep(a);
			cout<<"��ʱ���"<<endl; 
		}
		else if(n==4){
			cout<<"��������Ҫ����ʲô 1.AIС���� 2.���±� 3.˭���Ե� 4.С���ݿ� 5.Ȥζ���ֻ�"<<endl;
			cin>>w;
			if(w==1){
				cout<<"�������"<<endl;
				ruan1==1;
			}
			else if(w==2){
				cout<<"�������"<<endl;
				ruan2=1;
			} 
			else if(w==3){
				cout<<"�������"<<endl;
				ruan3=1;
			}
			else if(w==4){
				cout<<"�������"<<endl;
				ruan4=1;
			}
			else if(w==5){
				cout<<"�������"<<endl;
				ruan5=1;
			}
			else{
				cout<<"����"<<endl;
			}
		}
		else if(n==5){
			cout<<"��ã��������������"<<endl;
			cout<<"���ǿ�������10��"<<endl;
			for(int i=1;i<=10;i++){
				cout<<"��:";
				cin>>acd;
				cout<<"����:";
				chuli(acd);
			}
		}
		else if(n==6){
			cout<<"��������Ҫ��ʲô 1.д���� 2.�����±�"<<endl;
			cin>>w;
			if(w==1){
				cout<<"��������±�����"<<endl;
				cin>>shi;
				cout<<"ok"<<endl;
			}
			else{
				cout<<"���±�:"<<shi<<endl;
			}
		}
		else if(n==7){
			cout<<"������Ҫ���ž籾 1.ʳ�� 2.���ϣ�����籾׼���Ƴ���)"<<endl;
			cin>>w;
			if(w==1){
				cout<<"һ������ǣ�����"<<endl;
				cout<<"�ڶ�λ�����:"<<"������"<<endl;
				cout<<"����λ�����:����"<<endl;
			} 
			else{
				cout<<"�����Ƴ���"<<endl;
			}
		}
		else if(n==8){
			cout<<"��ӭ�������ݿ⣬��������Ҫ��ʲô 1.������� 2.���Ѱ������ 3.��ʾȫ������"<<endl;
			cin>>w;
			if(w==1){
				cout<<"��������������:";
				cin>>cv[cnt].biaoti;
				cout<<"��������������:";
				cin>>cv[cnt].rong;
				cout<<"�������������:";
				cin>>cv[cnt].ma;
				cout<<"���������ɣ����:"<<cnt<<endl;
				cv[cnt].cun=1;
				cnt++;
			}
			else if(w==2){
				cout<<"��������:";
				cin>>r;
				cout<<"�������������:";
				cin>>acd;
				if(acd==cv[r].ma&&cv[r].cun==1){
					cout<<"����Ϊ����������:";
					cout<<"����:"<<cv[r].biaoti;
					cout<<"����:"<<cv[r].rong;
					cout<<"����������"<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
			}
			else{
				for(int i=0;i<cnt;i++){
					cout<<"���ݱ��:"<<i<<endl;
					cout<<"����:"<<cv[i].biaoti<<endl;
					cout<<"����:"<<cv[i].rong<<endl;
					cout<<"-----------�ָ���-----------"<<endl;
				}
			}
		}
		else if(n==9){
			cout<<"��������ҪȤζ����ʲô:"<<endl;
			cin>>acd;
			cout<<"��ʼ�" <<endl;
			for(int i=1;i<=acd.length();i++){
				cout<<acd[i];
				sleep(100);
			}
			cout<<"Ȥζ�������"<<endl;
		}
		else{
			cout<<"����!"<<endl;
		}
	}
}
