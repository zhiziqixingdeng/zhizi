#include <iostream>
#include <queue>
using namespace std;
queue<int> que;
int n,m,num,cnt;//m��ʾ������n��ʾ���뵥�ʵ�����
bool flag[1020];//flag[i]==true��ʾ����������ڴ������� 
int main(){
	int cnt=0;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>num;
		if(flag[num]!=true){
			flag[num]=true;
			cnt++;
			que.push(num);
			if(que.size()>m){
				flag[que.front()]=false;
				que.pop();
			}
		}
	}
	cout<<cnt;
	return 0;
}
