#include <iostream>
#include <cstdlib> 
using namespace std;
string n,a;
int t,f,r,cnt;
void ling(string x){
	if(x=="awa"){
		cout<<"ϵͳ������"<<endl; 
	}
	else if(x=="uwu"){
		cout<<"������������������ҿ��԰������ӣ�1 7��"<<endl;
		cin>>t>>f;
		cout<<t+f<<endl;
	}
	else if(x=="hi"){
		cout<<"���ɵ������:";
		cout<<r<<endl;
	}
	else{
		cout<<"���ɵ��������:";
		while(cnt<=10){
			r=rand()%9;
			cout<<r;
			cnt++;
		}
		cout<<endl;
	}
}
int main(){
	while(1==1){
		cout<<"����:";
		cin>>n;
		cout<<"�������������"<<endl;
		cin>>a;
		if(a=="qwqawauwu"){
			ling(n); 
		}
		else{
			cout<<"�������"<<endl;
		}
	} 
}
