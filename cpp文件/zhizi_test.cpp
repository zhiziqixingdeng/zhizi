#include <iostream>
#include <cstdlib>
using namespace std;
string n,a,m;
int r,cnt;
void chuli(string x){
	if(x.find("���")!=std::string::npos||x.find("����")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("Hi")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"��ã�"<<endl;
		}
		else{
			cout<<"hi yoooooooo"<<endl;
		}
	}
	else if(x.find("Ц��")!=std::string::npos||x.find("����")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"Ҫ��������һ����"<<endl;
		}
		else{
			cout<<"����ҽ���"<<endl;
		}
	}
	else if(x.find("��ǰ")!=std::string::npos){
		cout<<"�������ܳ��õ��°�"<<endl; 
	}
	else if(x.find("����")!=std::string::npos||x.find("����˭")!=std::string::npos){
		r=rand()%1;
		if(r==0){
			cout<<"����zhizi_test"<<endl; 
		}
		else{
			cout<<"�ҵ����ֽ���zhizi_test"<<endl; 
		}
	}
	else if(x.find("������")!=std::string::npos){
		cout<<"em,�����ҵ�����"<<endl;
		cout<<"�����������"<<endl;
		cout<<"zhizi_bot:�㲻Ҫ���ң�"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�Ұ��ù㷺���м���������пƻ�С˵��"<<endl; 
	}
	else if(x.find("����")!=std::string::npos||x.find("help")!=std::string::npos){
		cout<<"���ֲ�����������ˣ�ΪʲôҪ�а�����"<<endl; 
	}
	else if(x.find("��Ϊ")!=std::string::npos){
		cout<<"��Ϊ���ԣ���ѧ����"<<endl; 
	}
	else if(x.find("250")!=std::string::npos||x.find("ɵ��")!=std::string::npos||x.find("sb")!=std::string::npos){
		cout<<"�벻Ҫ����лл�����򲻺���˵����"<<endl; 
		cnt++;
	}
	else if(x.find("awa")!=std::string::npos||x.find("uwu")!=std::string::npos){
		cout<<"awa��qwq��"<<endl;
	}
	else if(x.find("c++")!=std::string::npos){
		cout<<"�Һ����Ӷ���c++��"<<endl;
	}
	else if(x.find("6")!=std::string::npos){
		cout<<"9"<<endl;
	}
	else if(x.find("hhh")!=std::string::npos||x.find("yyds")!=std::string::npos){
		cout<<"xswl"<<endl;
	}
	else if(x.find("���Ը�ʲô")!=std::string::npos||x.find("���Ը�ɶ")!=std::string::npos){
		cout<<"�ҿ��Ժ�������"<<endl; 
	}
	else if(x.find("������ʶ")!=std::string::npos){
		cout<<"����������Ϊ���ǻ�ȡ�����ǣ�������ʵ����Ϊ��������������������Ҳ�������ǻ۵�����"<<endl;
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"�ҵ�������������"<<endl; 
	}
	else if(x.find("�԰�")!=std::string::npos){
		cout<<"���ԶԶ�"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"��ϲ������"<<endl; 
	}
	else if(x.find("����")!=std::string::npos){
		cout<<"��嫵����氡��"<<endl; 
	}
	else if(x.find("�ټ�")!=std::string::npos){
		cout<<"�ٻأ�"<<endl;
	}
	else if(x.find("em")!=std::string::npos){
		cout<<"e���Ҳ�֪����"<<endl;
	}
	else{
		r=rand()%3;
		if(r==0){
			cout<<"�Ҳ�����"<<endl;
		}
		else if(r==1){
			cout<<"awa!"<<endl; 
		}
		else if(r==2){
			cout<<"�ø��"<<endl; 
		}
		else if(r==3){
			cout<<"emmmmm"<<endl; 
		}
	}
}
int main(){
	cout<<"��ã�������γƺ���"<<endl;
	cout<<"��:";
	cin>>a;
	cout<<"zhizi_test:��ð�"<<"��"<<a<<endl;
	while(1==1){
		cout<<"��:";
		cin>>n;
		cout<<endl;
		cout<<"zhizi_test:";
		chuli(n);
		cout<<endl;
		if(cnt==2){
		cout<<"�Ѿ���������ģʽ�����ѱ��߳�-������"<<endl;
		return 0;
		}
	} 
} 
