#include <iostream>
using namespace std;
int n;
int main(){
	cout<<"��ӭ������Ϸ��õ�����ð��"<<endl;
	while(1==1){
		cout<<"���Ϊ����ã�һλ�������ĳ���Ա�������Ը���"<<endl;
		cout<<"��һ�죬�㷢��һ�������뿪��������壬"<<endl;
		cout<<"��ǳ�����������׼��ȥ׷"<<endl;
		cout<<"��������Ҫȥ���� 1.��ˮ�� 2.΢������ 3.ũ��"<<endl;
		cin>>n;
		if(n==1){
			cout<<"�㱻�����ˣ�����"<<endl;
			cout<<"BAD END"<<endl;
		}
		else if(n==2){
			cout<<"��Ҫ��ôȥ�� 1.���� 2.����"<<endl;
			cin>>n;
			if(n==1){
				cout<<"����Լ����ȫ�����û����С�����Լ�������"<<endl;
				cout<<"BAD END"<<endl; 
			}
			else{
				cout<<"���ھ��������ҵ������ӣ���ץ������"<<endl;
				cout<<"GOOD END"<<endl; 
			}
		}
		else{
			cout<<"�㵽��ũ�����㷢����TP����ʳ�ʮ�����������Ƿ�Ҫ�� 1.�� 2.���� 3.���ɰ���"<<endl;
			cin>>n;
			if(n==1){
				cout<<"�����PT������÷ǳ��óԣ����������ﲻ�����ˣ�������һֱ��PT"<<endl;
				cout<<"BAD END"<<endl; 
			}
			else if(n==2){
				cout<<"�㱻�����ˣ����ǿ�ʼ�����ӣ��㷢�������ӣ����ǰ���ץ�˻���"<<endl;
				cout<<"GOOD END"<<endl;
			}
			else{
				cout<<"����Ϊװɵ������������PT�Ĵ���Ҫȥ�������� 1.ɭ�� 2.����"<<endl;
				cin>>n;
				if(n==1){
					cout<<"PT����ɭ�֣����ǰ���ץס��"<<endl;
					cout<<"BAD END"<<endl; 
				}
				else{
					cout<<"PT������Ӿ����Ҫȥ���������ӣ� 1.������ 2.PT��"<<endl;
					cin>>n;
					if(n==1){
						cout<<"���Ӿ�������ߣ���ץ��������"<<endl;
						cout<<"GOOD END"<<endl;
					}
					else{
						cout<<"�㱻PT����"<<endl;
						cout<<"BAD END"<<endl; 
					}
				}
			}
		}
	}
} 
