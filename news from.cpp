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
int main(void){
	login();
	system("cls");
	cout<<"1-����404����"<<endl;
	cout<<"2-��ҳ�۸Ĺ���"<<endl;
	cout<<"3-��վ�����޸�"<<endl;
	cout<<"4-��վ������ѯ"<<endl;
	cout<<"5-�˳�"<<endl;
	cout<<"��������Ҫ�Ĺ���(1-5):";
	int number;
	cin>>number;
	switch(number){
	case 1:
		cout<<"��վ404�������Ժ�"<<endl;
		break;
	case 2:
		cout<<"��ҳ�۸Ĺ������Ժ�"<<endl;
		break;
	case 3:
		cout<<"��վ�����޸����Ժ�"<<endl;
		break;
	case 4:
		cout<<"��վ������¼��ѯ���Ժ�"<<endl;
		break;
	case 5:
		return 0;
	}
	system("pause");
	return 0;
	
}