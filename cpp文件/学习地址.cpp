#include <iostream>
using namespace std;
int num;
int main(){
	num=3;
	int* point=&num;
	cout<<"num��ֵ�ǣ�"<<*point<<endl;
	cout<<"num�ĵ�ַ��:"<<point<<endl;
	cout<<"num��ֵ�ǣ�"<<num<<endl;
	cout<<"num�ĵ�ַ��:"<<&num<<endl; 
	cout<<"num��ֵ��:"<<*(&num)<<endl;
	return 0;
} 
