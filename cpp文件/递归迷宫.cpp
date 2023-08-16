#include <iostream>
using namespace std;
int n,a1,a2,b1,b2;
int s[120][120];
bool flag;
int cx[5]={0,0,0,1,-1};
int cy[5]={0,1,-1,0,0};
void dfs(int x,int y){
	if(x>=1&&y>=1&&x<=n&&y<=n&&s[x][y]==0){
		if(x==b1&&y==b2){
		flag=true;
		return; 
		}
		s[x][y]=1;
		for(int i=1;i<=4;i++){
			dfs(x+cx[i],y+cy[i]);
		}
	}
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>s[i][j];
		} 
	}
	cin>>a1>>a2>>b1>>b2;
	if(s[a1][a2]==1){
		cout<<"NO"; 
		return 0;
	}
	if(s[b1][b2]==1){
		cout<<"NO";
		return 0;
	}
	dfs(a1,a2);
	if(flag==true){
		cout<<"YES"; 
	}
	else{
		cout<<"NO";
	}
	return 0;
}
