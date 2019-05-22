#include<iostream>
#include<Windows.h>
#include<string>
using namespace std;
int main(void){
	string name;//ÕË»§Ãû×Ö
	string pwd; //ÕË»§ÃÜÂë
	while(1){
	    cout<<"ÇëÊäÈëÕË»§:";
	    cin>>name;
	    cout<<"ÇëÊäÈëÃÜÂë:";
	    cin>>pwd;
	    if(name=="54hk"&&pwd=="123456"){
		  cout<<"»¶Ó­»ØÀ´"<<endl;
		  break;
		}
	    else{
		  cout<<"ÕËºÅ»òÃÜÂë´íÎó,ÇëÖØĞÂµÇÂ¼"<<endl;
		  system("pause"); 
		}
	}
	cout<<"1-ÍøÂç404¹¥»÷"<<endl;
	system("pause");
	return 0;
}