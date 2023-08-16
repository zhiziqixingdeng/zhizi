#include <iostream>
#include <cstdlib>
using namespace std;
int a;
int main(){
	cout<<"验证码如下"<<endl;
	int r=rand()%2;
	r=rand()%2;
	for(int i=1;i<=r;i++){
	r=rand()%2;
	r=rand()%2;
	}
	if(r==0){
		cout<<"6*1=？"<<endl;
		cin>>a;
		if(a==6){
			cout<<"正确！"<<endl;
		}
		else{
			cout<<"错误，您有可能是机器人"<<endl;
		}
	}
	else if(r==1){
		cout<<"7*7=？"<<endl;
		cin>>a; 
		if(a==49){
			cout<<"正确！"<<endl;
		}
		else{
			cout<<"错误，您有可能是机器人"<<endl;
		}
	}
	else{
		cout<<"10/2=?"<<endl;
		cin>>a;
		if(a==5){
			cout<<"正确！"<<endl;
		}
		else{
			cout<<"错误，您有可能是机器人"<<endl;
		}
	}
} 
