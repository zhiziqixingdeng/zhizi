#include<iostream>
using namespace std;
int n,n1,n2;
int a[201],b[201];
int cnt1,cnt2,i,j;
int main(){
	cin>>n>>n1>>n2;
	for(i=1;i<=n1;i++){
		cin>>a[i];
	}
	for(j=1;j<=n2;j++){
		cin>>b[j];
	}
	i=j=cnt1=cnt2=0;
	for(int x=1;x<=n;x++){
		i++;
		j++;
		if(i>n1)i=1;
            if(j>n2)j=1;
            if(a[i]==0&&b[j]==2||a[i]==0&&b[j]==3||a[i]==1&&b[j]==0||a[i]==1&&b[j]==3||a[i]==2&&b[j]==1||a[i]==2&&b[j]==4||a[i]==3&&b[j]==2||a[i]==3&&b[j]==4||a[i]==4&&b[j]==0||a[i]==4&&b[j]==1){
            	cnt1++;
			}
				else if(a[i]==0&&b[j]==1||a[i]==0&&b[j]==4||a[i]==1&&b[j]==2||a[i]==1&&b[j]==4||a[i]==2&&b[j]==0||a[i]==2&&b[j]==3||a[i]==3&&b[j]==0||a[i]==3&&b[j]==1||a[i]==4&&b[j]==2||a[i]==4&&b[j]==3){
					cnt2++;
				}
	}
	cout<<cnt1<<" "<<cnt2;
	return 0;
}
