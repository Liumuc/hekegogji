#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>   //getch()使用库

using namespace std;

void inputPwd(char pwd[],int size){
	char c;
	int i=0;
	while(1){
		c=getch();//不会回显,最终用*覆盖
		if(c=='\r'){
			pwd[i]=0;//字符串结束最终输入为\0
			break;
		}
        pwd[i++]=c;
		cout<<"*";
	}
	cout<<'\n';//或者cout<<endl;
}
void login(void){
	string name;//账户名字
	char pwd[32]; //账户密码
	while(1){
		system("cls");
	    cout<<"请输入账户:";
	    cin>>name;
	    cout<<"请输入密码:";
        inputPwd(pwd,sizeof(pwd));
	    if(name=="54hk"&& !strcmp(pwd,"123456")){
		  cout<<"欢迎回来"<<endl;
		  return;
		}
	    else{
		  cout<<"账号或密码错误,请重新登录"<<endl;
		  system("pause"); 
		}
	}
}
int main(void){
	login();
	cout<<"1-网络404攻击"<<endl;
	system("pause");
	return 0;
}