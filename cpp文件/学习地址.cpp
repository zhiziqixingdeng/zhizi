#include <iostream>
using namespace std;
int num;
int main(){
	num=3;
	int* point=&num;
	cout<<"num的值是："<<*point<<endl;
	cout<<"num的地址是:"<<point<<endl;
	cout<<"num的值是："<<num<<endl;
	cout<<"num的地址是:"<<&num<<endl; 
	cout<<"num的值是:"<<*(&num)<<endl;
	return 0;
} 
