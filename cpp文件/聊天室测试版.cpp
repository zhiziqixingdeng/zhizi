#include <iostream>
using namespace std;
string a,n;
int main(){
	cout<<"���趨һ���ǳ�"<<endl;
	cin>>a;
	if(a=="����"||a=="���"){
		cout<<"��ӭETO�ܳ���Ա�������"<<endl;
	}
	cout<<"*******************************"<<endl; 
	for(int i=1; ;i++){
		cin>>n;
		if(n=="�˳�"){
			cout<<"�ٻ�";
			return 0; 
		}
		else{
			cout<<a<<":"<<n<<endl;
			cout<<"**************������************"; 
		}
	}
} 
