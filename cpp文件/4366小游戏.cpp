#include <iostream>
#include <cstdlib>
using namespace std;
int a,r,t,f,s;
string n; 
int main(){
	while(1==1){
		cout<<"��ӭ����4366С��Ϸ����������Ϸ��ſ�ʼ��Ϸ 1.ʯͷ������ 2.������Ϸ 3.���� 4.��ը����Ϸ 5.�˳�"<<endl;
		cin>>s;
		if(s==1){
			cout<<"��������Ҫ��ʲô�� 1.ʯͷ 2.���� 3.��"<<endl;
			cin>>a;
			r=rand()%2+1;
			if(a==1&&r==2||a==2&&r==3||a==3&&r==1){
				cout<<"��Ӯ��!"<<endl; 
			}
			else if(a==1&&r==1||a==2&&r==2||a==3||r==3){
				cout<<"����һ��ƽ��"<<endl;
			}
			else{
				cout<<"������"<<endl;
			}
		}
		else if(s==2){
			r=rand()%100;
			cout<<"������Ѿ��趨�ã���Χ0~100"<<endl;
			while(1){
				cout<<"������µ���"<<endl;
				cin>>a;
				if(a==r){
					cout<<"��ϲ�㣬�¶���!"<<endl; 
				}
				if(a<r){
					cout<<"С��"<<endl;
				}
				if(a>r){
					cout<<"����"<<endl;
				}
			}
		}
		else if(s==3){
			for(int i=1; ;i++){
				cout<<"��������Ҫ��������"<<endl;
			cin>>a;
			cout<<"����һ�������ף�����)"<<endl;
			cin>>t;
			cout<<"����һ��"<<endl;
			a--;
			if(a==0){
				cout<<"��ϲ�㣬����������"<<endl;
				break;
			} 
			}
		}
		else if(s==4){
			cout<<"�������ը����(1~10,�磺6 3��:"<<endl;
			t=rand()%10;
			f=rand()%10;
			cin>>r>>a;
			if(r==t&&a==f){
				cout<<"���ը���ˣ�"<<endl;
			}
			else{
				cout<<"δ�ܺ�ը��"<<endl;
			}
		}
		else{
			cout<<"��лʹ��"<<endl;
			return 0;
		}
	}
} 
