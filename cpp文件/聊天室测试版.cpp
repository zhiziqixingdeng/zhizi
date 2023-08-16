#include <iostream>
using namespace std;
string a,n;
int main(){
	cout<<"请设定一个昵称"<<endl;
	cin>>a;
	if(a=="质子"||a=="你好"){
		cout<<"欢迎ETO总程序员来到这里！"<<endl;
	}
	cout<<"*******************************"<<endl; 
	for(int i=1; ;i++){
		cin>>n;
		if(n=="退出"){
			cout<<"再回";
			return 0; 
		}
		else{
			cout<<a<<":"<<n<<endl;
			cout<<"**************输入区************"; 
		}
	}
} 
