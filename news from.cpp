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
void menuShow(void){
	cout<<"1-网络404攻击"<<endl;
	cout<<"2-网页篡改攻击"<<endl;
	cout<<"3-网站攻击修复"<<endl;
	cout<<"4-网站攻击查询"<<endl;
	cout<<"5-退出"<<endl;
}
int menuChose(){
	int n=0;
	while(1){
	  cin>>n;
	  if(cin.fail()){
		 cin.clear();
		 cin.sync();
		 cout<<"用户或密码输入错误,请重新输入"<<endl;
	    }else{
		 break;
	  }
	}
	return n;
}
int main(void){
	login();
	system("cls");
			

	
	while(1){
	menuShow();
	cout<<"请输入需要的功能(1-5):";
	int n=menuChose();

	system("cls");
	switch(n){
        case 1:
		cout<<"网站404攻击请稍后"<<endl;
		system("pause");
		system("cls");
		break;
	case 2:
		cout<<"网页篡改攻击请稍后"<<endl;
		system("pause");
		system("cls");
		break;
	case 3:
		cout<<"网站攻击修复请稍后"<<endl;
		system("pause");
		system("cls");
		break;
	case 4:
		cout<<"网站攻击记录查询请稍后"<<endl;
		system("pause");
		system("cls");
		break;
	case 5:
		return 0;
	  }
	}
	system("pause");
	return 0;
	
}