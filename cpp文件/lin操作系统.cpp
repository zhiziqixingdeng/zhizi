#include <iostream>
#include <cstdlib>
using namespace std;
int r,s,q,w;
string name,mail,str,id,qian,sss,asdf;
void chuli(string x){
	if(x.find("���")!= std::string::npos||x.find("hi")!= std::string::npos||x.find("Hi")!= std::string::npos){
		cout<<"��ð����������������"<<endl;
	}
	else if(x.find("��ô")!= std::string::npos||x.find("����")!= std::string::npos||x.find("��ô��")!= std::string::npos||x.find("��")!= std::string::npos){
		r=rand()%2; 
		if(r==0){
			cout<<"Ӧ����������......"<<endl; 
		}
		if(r==2){
			cout<<"���ѻش�"<<endl;
		}
		if(r==1){
			cout<<"�����������İ�"<<endl;
		}
	}
	else if(x.find("��")!= std::string::npos||x.find("��")!= std::string::npos||x.find("6")!= std::string::npos||x.find("9")!= std::string::npos){
		r=rand()%2;
		if(r==0){
			cout<<"emmm"<<endl;
		}
		else{
			cout<<"����"<<endl; 
		}
	}
	else{
		r=rand()%2;
		if(r==0){
			cout<<"�Һ�����������"<<endl;
		}
		else{
			cout<<"�Ҳ���"<<endl;
		}
	}
}
int main(){
	cout<<"�������û���:";
	cin>>name;
	cout<<"����������ID:";
	cin>>id;
	cout<<"��ӭ"<<name<<endl;
	while(1==1){
		r=rand()%9;
		cout<<"��������Ҫ��ʲô�� 1.��ȡ������� 2.������������� 3.������Ϸ 4.�ڶ������� 5.��Ȩ 6.�鿴������"<<endl;
		if(q==1){
			cout<<"����ר��:7.����ID 8.��������˼򵥰� 9.����ǩ�� 10.�鿴ǩ��"<<endl;
		}
		cin>>s;
		if(s==1){
			cout<<"�������:"<<r<<endl; 
		}
		if(s==2){
			cout<<"������@�����:";
			cin>>mail;
			cout<<"�漴����:"; 
			for(int i=1;i<=14;i++){
				r=rand()%9;
				cout<<r;
			}
			cout<<"@"<<mail<<endl;
		}
		if(s==3){
			cout<<"��������������!"<<endl;
			while(1==1){
				cout<<"����������:";
				cin>>w;
				if(w>r){
					cout<<"����"<<endl;
				}
				if(w<r){
					cout<<"С��"<<endl;
				}
				if(w==r){
					cout<<"��ϲ�㣡�¶��ˣ�"<<endl;
				}
			}
		}
		if(s==4){
			cout<<"����������"<<endl;
			cin>>str;
			cout<<"���ˣ�"<<endl;
		}
		if(s==5){
			cout<<"��������Ȩ����:";
			cin>>sss;
			if(sss=="/sudo-awa-qwq"){
				cout<<"��Ȩ�ɹ���"<<endl;
				q=1;
				
			} 
		}
		if(s==6){
			cout<<"������:"<<str<<endl;
		}
		if(s==7&&q==1){
			cout<<"�������µ�id"<<endl;
			cin>>id;
			cout<<"���ĳɹ�!"<<endl; 
		}
		if(s==7&&q==0){
			cout<<"Ȩ�޲���"<<endl; 
		}
		if(s==8&&q==1){
			cout<<"���������:���"<<endl;
			for(int i=1;i<=10;i++){
				cout<<"��:";
				cin>>asdf;
				cout<<"������:"; 
				chuli(asdf);
			}
			cout<<"������:�ټ�ඣ�"<<endl;
		}
		if(s==8&&q==0){
		cout<<"Ȩ�޲���"<<endl; 
		}
		if(s==9&&q==1){
			cout<<"������ǩ��:";
			cin>>qian;
			cout<<"����"<<endl; 
		}
		if(s==9&&q==0){
			cout<<"Ȩ�޲���"<<endl; 
		}
		if(s==10&&q==1){
			cout<<"���ǩ��:"<<qian<<endl; 
		}
			if(s==10&&q==0){
			cout<<"Ȩ�޲���"<<endl; 
		}
	}
} 
