#include <iostream>
#include <cstdlib>
using namespace std;
int a;
int main(){
	cout<<"��֤������"<<endl;
	int r=rand()%2;
	r=rand()%2;
	for(int i=1;i<=r;i++){
	r=rand()%2;
	r=rand()%2;
	}
	if(r==0){
		cout<<"6*1=��"<<endl;
		cin>>a;
		if(a==6){
			cout<<"��ȷ��"<<endl;
		}
		else{
			cout<<"�������п����ǻ�����"<<endl;
		}
	}
	else if(r==1){
		cout<<"7*7=��"<<endl;
		cin>>a; 
		if(a==49){
			cout<<"��ȷ��"<<endl;
		}
		else{
			cout<<"�������п����ǻ�����"<<endl;
		}
	}
	else{
		cout<<"10/2=?"<<endl;
		cin>>a;
		if(a==5){
			cout<<"��ȷ��"<<endl;
		}
		else{
			cout<<"�������п����ǻ�����"<<endl;
		}
	}
} 
