#include <iostream>
#include <cstdlib> 
using namespace std;
string n;
double a,b;
int r;
char y;
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
int main(){
	cout<<"����:��ð�����������"<<endl;
	while(1==1){
		cout<<"��:";
		cin>>n;
		cout<<"����:";
		chuli(n); 
	} 
} 
