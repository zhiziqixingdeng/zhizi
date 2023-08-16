#include <iostream>
using namespace std;
int n,a[45][45],wei,x=1,y;//x是行，y是列 
int main(){
	cin>>n;
	wei=n*n;
	y=(n+1)/2;
	a[x][y]=1;
	for(int i=2;i<=wei;i++){
		if(x==1&&y!=n){
			a[n][y+1]=i;
			x=n;
			y++;
		}
		else if(x!=1&&y==n){
			a[x-1][1]=i;
			x--;
			y=1;
		}
		else if(x==1&&y==n){
			a[x+1][y]=i;
			x++;
		}
		else{
			if(a[x-1][y+1]==0){
				a[x-1][y+1]=i;
				x--;
				y++;
			}
			else{
				a[x+1][y]=i;
				x++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
