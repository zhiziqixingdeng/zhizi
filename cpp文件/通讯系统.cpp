#include <iostream>
#include <cstdlib>
using namespace std;
string a,s;
int t,f,n,r;
char x;
int main(){
	cout<<"����������û�����"<<endl;
	cin>>a;
	cout<<"���������루����Ƿÿ�����10��"<<endl;
	cin>>s;
	if(s=="NIHAO"||s=="ZHIZI"){
		cout<<"��ӭ�������������"<<endl;
	}
	else{
		cout<<"�ÿ���ã�"<<endl;
	}
	cout<<"��ӭ������ů��ͨѶϵͳ"<<endl;
	while(1==1){
		r=rand()%100;
		cout<<"��������Ҫ��ʲô 1.��������Ϣ 2.������Ϣ 3.������Ϣ 4.������Ϣ 5.��ȫ�˳� 6.���������"<<endl;
		cin>>n;
		if(n==2){
			cout<<"������Ҫ���ܵ���Ϣ"<<endl;
			cin>>a;
			for(int i=1;i<=a.length();i++){
				a[i]=a[i]-2; 
			}
			cout<<"���ܺ����Ϣ"<<a<<endl;
		}
		else if(n==3){
			cout<<"������Ҫ���ܵ���Ϣ"<<endl;
			cin>>a;
			for(int i=1;i<=a.length();i++){
				a[i]=a[i]+2;
			}
			cout<<"���ܺ����Ϣ��"<<a<<endl; 
		}
		else if(n==4){
			cout<<"��ȥhack.chat/?stc"<<endl; 
		}
		else if(n==1){
			cout<<"�����ߣ�����"<<endl;
			cout<<"�汾��1.0"<<endl;
			cout<<"��������ˣ�zhizi_bot"<<endl; 
		}
		else if(n==5){
			cout<<"�Ƿ�Ҫ�˳��� 1.�� 2.��"<<endl;
			int sdf;
			cin>>sdf;
			if(sdf==1){
				return 0;
			}
			else{
				cout<<"�õģ������˳�Ŷ"<<endl;
			}
		}
		else{
			cout<<"�����:"<<r<<endl; 
		}
	}
} 
