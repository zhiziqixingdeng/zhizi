#include <iostream>
using namespace std;
struct hu{
	string name;
	string mi;
	int cai;
	int li=10;
	int qian; 
}a[100];
int n,s,b,cnt;
int main(){
	for(int i=1; ;i++){
		cout<<"��ӭ����ũ����Ϸ��������Ҫ��ʲô��1.��½ 2.�˳�"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�������˺���"<<endl;
			cin>>a[1].name;
			cout<<"����������"<<endl;
			cin>>a[1].mi;
			cout<<"��ȷ��"<<endl;
			while(1==1){
				cout<<"������Ҫ��ʲô 1.�ղ� 2.�Զ��� 3.���� 4.�˳���Ϸ 5.�������� 6.ũ�����Ӳ鿴"<<endl;
				cin>>s;
				if(s==1&&a[1].li>0){
					cout<<"��Ĳ�������1"<<endl;
					a[1].cai+2;
					a[1].li--; 
					a[1].qian++; 
				}
				else if(s==2){
					cout<<"������Ҫ��ʲô 1.���ܲ� 2.�ײ� 3.�׷�"<<endl;
					cin>>b;
					if(b==1){
						cout<<"����˺��ܲ���"<<endl;
						a[1].cai--;
						a[1].li++; 
					}
					else if(n==2){
						cout<<"����˰ײ�!"<<endl;
						a[1].cai--;
						a[1].li++; 
					}
					else{
						cout<<"������׷�"<<endl;
						a[1].li++;
					}
				}
				else if(s==3){
					cout<<"�����ڿ�����Ǯ��������Ҫ��ʲô�� 1.1������ 2.һ���߲�"<<endl;
					cin>>b;
					if(b==1&&a[1].qian>0){
						cout<<"ok"<<endl;
						a[1].li++;
						a[1].qian--;
					}
					else if(b==2&&a[1].qian>0){
						cout<<"ok"<<endl;
						a[1].cai++;
						a[1].qian--;
					}
					else{
						cout<<"�����������Ǯ������"<<endl;
					}
				}
				else if(s==4){
					cout<<"�ټ���"<<endl;
					return 0;
				}
				else if(s==5){
					cout<<"����:"<<a[1].name<<endl;
					cout<<"�˵�����:"<<a[1].cai<<endl;
					cout<<"����:"<<a[1].li<<endl;
					cout<<"Ǯ������:"<<a[1].qian<<endl; 
				}
				else if(s==6){
					cout<<"���ũ�������ӣ�"<<endl;
					cout<<"*******_***********"<<endl;
					cout<<"*      s   m       * "<<endl;
					cout<<"&&&&&&&&&&&&&&&&&&&&"<<endl;
					cout<<"********************"<<endl; 
				}
				else{
					cout<<"��Ч����"<<endl;
				}
			}
		}
		if(n==2){
			cout<<"�˳���"<<endl;
			return 0; 
		}
	} 
}
