#include <iostream>
using namespace std;
string n;
int a;
int cnt=0;
int main(){
	while(1==1){
		cout<<"你好，欢迎来到质子加密，请问你要干什么 1.加密 2.解密 3.安全退出（不会留下任何痕迹）"<<endl;
		cin>>a;
		if(a==1){
			cout<<"请输入要加密的内容（仅支持拼音和英文加密）"<<endl;
			cin>>n;
			while(cnt<=n.length()){
				n[cnt]=n[cnt]-3;
				cnt++; 
			} 
			cout<<"加密内容："<<n<<endl;
		}
		else if(a==2){
			cout<<"请输入在本软件加密的内容：";
			cin>>n;
			int cnt; 
			while(cnt<=n.length()){
				n[cnt]=n[cnt]+3;
				cnt++;
			} 
			cout<<"解密后的内容："<<n<<endl;;
		}
		else{
			cout<<"欢迎再次使用本软件，再见！(*_*)"<<endl;
			return 0; 
		}
	}
} 
