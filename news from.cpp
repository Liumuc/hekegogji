#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main(void){
	string name;//�˻�����
	string pwd; //�˻�����
	while(1){
	    cout<<"�������˻�:";
	    cin>>name;
	    cout<<"����������:";
	    cin>>pwd;
	    if(name=="54hk"&&pwd=="123456"){
		  cout<<"��ӭ����"<<endl;
		  break;
		}
	    else{
		  cout<<"�˺Ż��������,�����µ�¼"<<endl;
		  system("pause"); 
		}
	}
	cout<<"1-����404����"<<endl;
	system("pause");
	return 0;
}