#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,s,cnt;
int r;
int main(){
	cout<<"��ӭ����������ϰ��������Ҫ��ϰ��������"<<endl;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		a=rand()%10000;
		b=rand()%10000;
		r=rand()%2;
		if(r==0){
			cout<<a<<"+"<<b<<"=";
			cin>>s;
			if(s==a+b){
				cout<<"��ȷ��"<<endl;
				cnt++;
			}
			else{
				cout<<"����"<<endl; 
			}
		}
		if(r==1){
			cout<<a<<"-"<<b<<"=";
			cin>>s;
			if(s==a-b){
				cout<<"��ȷ��"<<endl;
				cnt++;
			}
			else{
				cout<<"����"<<endl;
			}
		}
		if(r==2){
			cout<<a<<"x"<<b<<"=";
			cin>>s;
			if(s==a*b){
				cout<<"��ȷ��"<<endl;
				cnt++;
			}
			else{
				cout<<"����"<<endl; 
			}
		}
	}
	cout<<"һ��������"<<n<<"�ˣ�����"<<cnt<<"����"<<endl;
	return 0; 
} 
