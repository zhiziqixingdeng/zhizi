
#include <iostream>
#include <cstdlib>
using namespace std;
string n,a;
int s,d,cnt,ses,t,f,g,h;
void chuli(string x){
	if(x.find("���")!=std::string::npos||x.find("hi")!=std::string::npos||x.find("����")!=std::string::npos){
		cout<<"��ã�����������������˵һ�°ɣ��Ҹ���һ������������ʹ��ԭ��������������"<<endl; 
	}
	else if(x.find("sb")!=std::string::npos||x.find("ɵ��")!=std::string::npos||x.find("250")!=std::string::npos){
		cout<<"�������˰����������"<<endl;
		cnt=1;
	}
	else{
		cout<<"��ԭ���ڲ��ܴ������"<<endl;
	}
}
int main(){
	while(1==1){
	cout<<"��ӭ�������ӿ�����%����&%��@%*%����Ϸ����һ����Ϸ����ԭ�ӵı����¼��ҵ���"<<endl;
	cout<<"�������������:";
	cin>>a;
	cout<<"���Ϊ��ԭ�ӣ��㱻�ɵ���ת���Ϊ�˵��ӣ���Ҫ��ʼ����,��������Ҫ��ʲô 1.�ҵ�npc 2.�й�"<<endl;
	cin>>s;
	if(s==2){
		for(int i=1; ;i++){
			cout<<"���Ӻ����ҵ����㣬��Ҫ��ʲô 1.���� 2.���Ե�"<<endl;
			cin>>d;
			if(d==1){
				cout<<"���������¼�ѭ������ȥ��"<<endl; 
			}
			else{
				cout<<"�㱻���ӳ���"<<endl;
				break;
			}
		}
	}
	else{
		cout<<"���ҵ���npc����������Ҫ˵�Ļ���";
		cout<<"�㣺";
		cin>>n;
		cout<<"������:"; 
		chuli(n);
		if(cnt==1){
			cout<<"��Ϊ�����ˣ������㱻��ȥι������"<<endl;\
			break;
		}
		cout<<"������Ҫ��ʲô�� 1.ȥ��ԭ�� 2.����"<<endl;
		cin>>s;
		if(s==1){
			cout<<"ԭ��û�У��������ˣ�"<<endl;
			break; 
		}
		else{
			cout<<"���Ϊ��ԭ�ӣ���Ҫ��ʲô 1.��һ�Ŵ��� 2.������ 3.����"<<endl;
			cin>>s;
			if(s==3){
				cout<<"���ؿ���һ��"<<endl; 
			}
			else if(s==2){
				cout<<"��Ҫʹ��ʲô�� 1.��ȭ 2.����"<<endl;
				cin>>s;
				if(s==1){
					cout<<"������Ӵ���ˣ���ɹ��ˣ�"<<endl;
					cout<<"�����ڴ���һ����Ϸ"<<endl;
					 ses=1;
					 break; 
				}
			}
			else{
				cout<<"����Լ���װ����-����"<<endl;
				cout<<"�����������ӣ������빥����λ���� 2 8����Χ��0~10��"<<endl;
				cin>>t>>f;
				g=rand()%10;
				h=rand()%10;
				if(t==g||h==f){
					cout<<"��ɹ��Ĵ������ӣ����Ӹ���"<<endl;
					ses=1;
					break;
				}
				else{
					cout<<"�����ˣ���Ϊ��û�ܴ�����"<<endl;
					break;
				}
			}
		}
	}
	}
	cout<<"�����ڴ���һ����Ϸ��"<<endl;
} 
