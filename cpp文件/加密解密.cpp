#include <iostream>
using namespace std;
string n;
int a;
int cnt=0;
int main(){
	while(1==1){
		cout<<"��ã���ӭ�������Ӽ��ܣ�������Ҫ��ʲô 1.���� 2.���� 3.��ȫ�˳������������κκۼ���"<<endl;
		cin>>a;
		if(a==1){
			cout<<"������Ҫ���ܵ����ݣ���֧��ƴ����Ӣ�ļ��ܣ�"<<endl;
			cin>>n;
			while(cnt<=n.length()){
				n[cnt]=n[cnt]-3;
				cnt++; 
			} 
			cout<<"�������ݣ�"<<n<<endl;
		}
		else if(a==2){
			cout<<"�������ڱ�������ܵ����ݣ�";
			cin>>n;
			int cnt; 
			while(cnt<=n.length()){
				n[cnt]=n[cnt]+3;
				cnt++;
			} 
			cout<<"���ܺ�����ݣ�"<<n<<endl;;
		}
		else{
			cout<<"��ӭ�ٴ�ʹ�ñ�������ټ���(*_*)"<<endl;
			return 0; 
		}
	}
} 
