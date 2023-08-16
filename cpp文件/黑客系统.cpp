#include <iostream>
#include <cstdlib> 
using namespace std;
string n,a;
int t,f,r,cnt;
void ling(string x){
	if(x=="awa"){
		cout<<"系统更新中"<<endl; 
	}
	else if(x=="uwu"){
		cout<<"你可以输入两个数，我可以把这个相加（1 7）"<<endl;
		cin>>t>>f;
		cout<<t+f<<endl;
	}
	else if(x=="hi"){
		cout<<"生成的随机数:";
		cout<<r<<endl;
	}
	else{
		cout<<"生成的随机口令:";
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
		cout<<"命令:";
		cin>>n;
		cout<<"请输入命令口令"<<endl;
		cin>>a;
		if(a=="qwqawauwu"){
			ling(n); 
		}
		else{
			cout<<"密码错误"<<endl;
		}
	} 
}
