#include <iostream>
#include <unistd.h>
using namespace std;
struct student{
	string name;
	int bie;
	int hao;
	int ji;
}s[1000];
int n,w,ren;
int flag,jue,shu;
int main(){
	int cnt=0;
	cout<<"��ӭ����ѧ����Ϣ����ϵͳ"<<endl;
	for(int i=1; ;i++){
		cout<<"������Ҫ��ʲô 1.���ѧ����Ϣ 2.����ѧ�� 3.�޸�ѧ����Ϣ 4.�鿴ѧ��������Ϣ 5.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"������ѧ������:";
			cin>>s[cnt].name;
			cout<<"������ѧ���Ա� 1.�� 2.Ů 3.����"<<endl;
			cin>>s[cnt].bie;
			cout<<"������ѧ��ѧ��:";
			cin>>s[cnt].hao;
			cout<<"������ѧ���ɼ�:";
			cin>>s[cnt].ji;
			cout<<"������"<<endl;
			cnt++;
		}
		else if(n==2){
			cout<<"������ѧ��ѧ��"<<endl;
			cin>>w;
			for(int i=0;i<cnt;i++){
				if(w==s[i].hao){
					cout<<"��ѧ������Ϊ:"<<s[i].name;
					cout<<"��ѧ���Ա�Ϊ:";
					if(s[i].bie==1){
						cout<<"��"<<endl;
					}
					else if(s[i].bie==2){
						cout<<"Ů"<<endl;
					}
					else{
						cout<<"����"<<endl;
					}
					cout<<"��ѧ���ɼ�Ϊ:";
					cout<<s[i].ji<<endl;
					flag=1; 
				}
			}
			if(flag==0){
				cout<<"δ�ܲ��ҵ�!"<<endl;
			}
			else{
				cout<<"�������"<<endl;
				flag=0;
			}
		}
		else if(n==3){
			cout<<"������Ҫ�޸ĵ�ѧ����ѧ��:";
			cin>>w;
			for(int i=0;i<cnt;i++){
				if(w==s[i].hao){
					cout<<"�ҵ���ѧ��������:"<<s[i].name<<"����Ҫ�޸ĵ��� 1.�� 2.��"<<endl;
					cin>>jue;
					if(jue==1){
						cout<<"�����������ѧ��������:";
						cin>>s[i].name;
						cout<<"�����������ѧ����ѧ��:";
						cin>>s[i].hao;
						cout<<"�����������ѧ�����Ա� 1.�� 2.Ů 3.����"<<endl;
						cin>>s[i].bie;
						cout<<"�����������ѧ���ĳɼ�:";
						cin>>s[i].ji;
						cout<<"���!"<<endl;
						flag=1;
						ren++;
					}
				}
			}
			if(flag==1){
				cout<<"������޸���:"<<ren<<"��ѧ������Ϣ"<<endl;
				ren=0;
			}
			else{
				cout<<"����ʧ��!"<<endl;
			}
		}
		else if(n==5){
			cout<<"�ټ�"<<endl;
			return 0;
		}
		else if(n==4){
			cout<<"���潫��ӡ����ѧ������Ϣ"<<endl;
			sleep(1);
			for(int i=0;i<cnt;i++){
				cout<<"ѧ������:"<<s[i].name<<endl;
				cout<<"ѧ���Ա�:";
				if(s[i].bie==1){
					cout<<"��"<<endl;
				}
				else if(s[i].bie==2){
					cout<<"Ů"<<endl;
				}
				else{
					cout<<"����"<<endl;
				}
				cout<<"ѧ��ѧ��:"<<s[i].hao<<endl;
				cout<<"ѧ���ɼ�:"<<s[i].ji<<"��"<<endl;
				cout<<"---------------------------------"<<endl;
				sleep(1);
			}
			cout<<"��ӡ����"<<endl;
		}
		else{
			cout<<"����!!!"<<endl;
		}
	}
}
