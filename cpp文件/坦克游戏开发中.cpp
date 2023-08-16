#include <iostream>
#include <algorithm>
using namespace std;
int a[10][10],n;
char x;
int main(){
	a[5][5]=1;
	for(int i=1; ;i++){
		cout<<endl;
		cout<<"请用wsda来操作,输入q可以看到地图"<<endl;
		cin>>x;
		if(x!='q'){
		cout<<"请输入要走几步"<<endl;
		cin>>n;
		}
		if(x=='w'){
			a[5+n][5]=1;
		}
		else if(x=='s'){
			a[5-n][5]=1;
		}
		else if(x=='a'){
			a[5][5-n]=1;
		}
		else if(x=='d'){
			a[5][5+n]=1; 
		}
		else if(x=='q'){
			for(int j=1;j<=10;j++){
				for(int c=1;c<=10;c++){
					cout<<a[j][c];
				}
				cout<<endl;
			}
		}
		else{
			cout<<"未能找到操作"<<endl;
		}
	}
} 
