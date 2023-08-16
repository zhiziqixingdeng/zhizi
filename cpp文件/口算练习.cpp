#include <iostream>
#include <cstdlib>
using namespace std;
int a,b,s,cnt;
int r;
int main(){
	cout<<"欢迎来到口算练习，请输入要练习几道口算"<<endl;
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
				cout<<"正确！"<<endl;
				cnt++;
			}
			else{
				cout<<"错误！"<<endl; 
			}
		}
		if(r==1){
			cout<<a<<"-"<<b<<"=";
			cin>>s;
			if(s==a-b){
				cout<<"正确！"<<endl;
				cnt++;
			}
			else{
				cout<<"错误！"<<endl;
			}
		}
		if(r==2){
			cout<<a<<"x"<<b<<"=";
			cin>>s;
			if(s==a*b){
				cout<<"正确！"<<endl;
				cnt++;
			}
			else{
				cout<<"错误！"<<endl; 
			}
		}
	}
	cout<<"一共计算了"<<n<<"此，对了"<<cnt<<"道。"<<endl;
	return 0; 
} 
