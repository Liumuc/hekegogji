#include <iostream>
#include <Windows.h>
#include <string>
#include <conio.h>   //getch()ʹ�ÿ�

using namespace std;

void inputPwd(char pwd[],int size){
	char c;
	int i=0;
	while(1){
		c=getch();//�������,������*����
		if(c=='\r'){
			pwd[i]=0;//�ַ���������������Ϊ\0
			break;
		}
        pwd[i++]=c;
		cout<<"*";
	}
	cout<<'\n';//����cout<<endl;
}
void login(void){
	string name;//�˻�����
	char pwd[32]; //�˻�����
	while(1){
		system("cls");
	    cout<<"�������˻�:";
	    cin>>name;
	    cout<<"����������:";
        inputPwd(pwd,sizeof(pwd));
	    if(name=="54hk"&& !strcmp(pwd,"123456")){
		  cout<<"��ӭ����"<<endl;
		  return;
		}
	    else{
		  cout<<"�˺Ż��������,�����µ�¼"<<endl;
		  system("pause"); 
		}
	}
}
void menuShow(void){
	cout<<"1-����404����"<<endl;
	cout<<"2-��ҳ�۸Ĺ���"<<endl;
	cout<<"3-��վ�����޸�"<<endl;
	cout<<"4-��վ������ѯ"<<endl;
	cout<<"5-�˳�"<<endl;
}
int menuChose(){
	int n=0;
	while(1){
	  cin>>n;
	  if(cin.fail()){
		 cin.clear();
		 cin.sync();
		 cout<<"�û��������������,����������"<<endl;
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
	cout<<"��������Ҫ�Ĺ���(1-5):";
	int n=menuChose();

	system("cls");
	switch(n){
        case 1:
		cout<<"��վ404�������Ժ�"<<endl;
		system("pause");
		system("cls");
		break;
	case 2:
		cout<<"��ҳ�۸Ĺ������Ժ�"<<endl;
		system("pause");
		system("cls");
		break;
	case 3:
		cout<<"��վ�����޸����Ժ�"<<endl;
		system("pause");
		system("cls");
		break;
	case 4:
		cout<<"��վ������¼��ѯ���Ժ�"<<endl;
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