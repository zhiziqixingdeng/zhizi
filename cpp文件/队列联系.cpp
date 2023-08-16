#include <iostream>
#include <queue>
using namespace std;
queue<int> que;
int n,m,num,cnt;//m表示容量，n表示输入单词的数量
bool flag[1020];//flag[i]==true表示这个单词在内存里面有 
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
