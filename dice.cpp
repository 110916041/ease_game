#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int menu(){
	int i;
	cout<<"          menu"<<endl;
	cout<<"     1. ��J��Ӿ�ơA����洫�ʧ@�A�æC�L���G"<<endl;
	cout<<"     2. ��J��Ӿ�ơA����ۭ��ʧ@�A�æC�L���G"<<endl;
	cout<<"     3. ��J��Ӿ�ơA�������ʧ@�A�æC�L���j����"<<endl;
	cout<<"     4. �i���l�C��"<<endl; 
	cout<<"     0. ���}�t��"<<endl;
	cout<<"  Please select your choice  ";
	cin>>i;
	return i;
}
//1
int change(int &x,int &y){
	int t;
	t=x;
	x=y;
	y=t;
}
//2
int times(int a,int b){
	int c;
	c=a*b;
	return c;
}
//3
int max(int a,int b){
	int result;
	if(a>b){
		result=a;
	}
	else{
		result=b;
	}
	return result;
}
//4
int choose1(){
		int a;
		cin>>a;
		return a;
	}
int main() {
	int s,k,a,b;
	while(s=menu()){
		switch(s){
			case 1:{
				cout<<"�п�J��Ӿ��:";
				cin>>a>>b;
				change(a,b);
				cout<<a<<' '<<b<<endl;
				break;
			}
			case 2:{
				cout<<"�п�J��Ӿ��:";
				cin>>a>>b;
				cout<<"��Ƭۭ���"<<times(a,b);
				cout<<endl;
				break;
			}
			case 3:{
				cout<<"�п�J��Ӿ��:";
				cin>>a>>b;
				cout<<"���j���Ƭ�"<<max(a,b);
				cout<<endl;
				break;
			}    
			case 4:{
				int a,b=0,x=0,y=0;
				for(b=0;b<5;b++){
					cout<<"�п��(1)��j��(2)��p:";
					switch(a=choose1()){
					case 1:{
						int computer,you;
						srand(time(NULL));
						computer=(rand()%6)+1;
						you=(rand()%6)+1;
						if(you<computer){
							cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you loss~"<<endl;
							y=y+1;
						}
						if(you>computer){
							cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you win!"<<endl;
							x=x+1;
						}
						if(you==computer){
							cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"The same!"<<endl;
						}
						break;
					}
					case 2:{
						int computer,you;
						srand(time(NULL));
						computer=(rand()%6)+1;
						you=(rand()%6)+1;
						if(you<computer){
							cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you win!~"<<endl;
							x=x+1;
						}
						if(you>computer){
							cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you loss"<<endl;
							y=y+1;
						}
						if(you==computer){
							cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"The same!"<<endl;
						}
						break;
						} 
					} 
				}
				cout<<"�AĹ"<<x<<"���A"<<"��"<<y<<"��";
				break;
			}
		default:
			cout<<"��J���~�A�Э��s��J!!!"  <<endl;     
		} 
	}
	cout<<"Thanks for using, bye."<<endl;
}
