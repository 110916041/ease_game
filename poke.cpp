#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int menu(){
	int i;
	cout<<"     �п�ܤU�C���C��"<<endl;
	cout<<"     1. ��l�C����j"<<endl;
	cout<<"     2. ��l�C����p"<<endl;
	cout<<"     3. ���J�P�C����j"<<endl;
	cout<<"     4. ���J�P�C����p"<<endl; 
	cout<<"     0. ���}"<<endl;
	cout<<"     �п��(0,1,2,3,4)  ";
	cin>>i;
	return i;
}

int main() {
	int s,computer,you;
	int q[52]={0};        //���J�P
	int a,b,c,d,e,f;      //���J�P 
	int x=0,y=0,z=0,w=0,g=0;            //x ���a��lĹ     y��l��   g��l����  z���J�PĹ    w���J�P�� 
	srand(time(NULL));
	while(s=menu()){
		switch(s){
			case 1:{
    			cout<<"1�A��l��j";
    			cout<<endl;
				computer=(rand()%6)+1;
				you=(rand()%6)+1;
				if(you<computer){
					cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you loss~"<<endl;
					y++; 
				}
				if(you>computer){
					cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you win!"<<endl;
					x++;
				}
				if(you==computer){
					cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"The same!"<<endl;
					g++;
				}
				break;
			}
			case 2:{
				cout<<"2�A��l��p";
				cout<<endl;
				computer=(rand()%6)+1;
				you=(rand()%6)+1;
				if(you<computer){
					cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you win!"<<endl;
					x++;
				}
				if(you>computer){
					cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"you loss~"<<endl;
					y++;
				}
				if(you==computer){
					cout<<"you="<<you<<' '<<"computer="<<computer<<' '<<"The same!"<<endl;
					g++;
				}
				break;
			}
			case 3:{
				cout<<"3�A���J�P��j";
				cout<<endl;
				a=(rand()%52);
				q[a]=1;               //�������� 
				do{
					b=rand()%52;
				}while(q[b]!=0);
				c=a%4;                //�q�� 
				d=b%4;                //���a 
				e=a/4+1;
				f=b/4+1;
				cout<<"�q�����P�O";
				switch(c){
					case 0:
						cout<<"����"<<'('<<e<<')'<<endl;
						break;
					case 1:
						cout<<"���"<<'('<<e<<')'<<endl;
						break;
					case 2:
						cout<<"�R��"<<'('<<e<<')'<<endl;
						break;
					case 3:
						cout<<"�®�"<<'('<<e<<')'<<endl;
						break;
					}
					cout<<"�A���P�O";
				switch(d){
					case 0:
						cout<<"����"<<'('<<f<<')'<<endl;
						break;
					case 1:
						cout<<"���"<<'('<<f<<')'<<endl;
						break;
					case 2:
						cout<<"�R��"<<'('<<f<<')'<<endl;
						break;
					case 3:
						cout<<"�®�"<<'('<<f<<')'<<endl;
						break;
					}
					if(a<b){
						cout<<"You win!"<<endl;
						z++;
					}
					if(a>b){
						cout<<"You lose~"<<endl;
						w++;
					}
				break;
			}    
			case 4:{
				cout<<"4,���J�P��p";
				cout<<endl;
				a=(rand()%52);
				q[a]=1;               //�������� 
				do{
					b=rand()%52;
				}while(q[b]!=0);
				c=a%4;                //�q�� 
				d=b%4;                //���a 
				e=a/4+1;
				f=b/4+1;
				cout<<"�q�����P�O";
				switch(c){
					case 0:
						cout<<"����"<<'('<<e<<')'<<endl;
						break;
					case 1:
						cout<<"���"<<'('<<e<<')'<<endl;
						break;
					case 2:
						cout<<"�R��"<<'('<<e<<')'<<endl;
						break;
					case 3:
						cout<<"�®�"<<'('<<e<<')'<<endl;
						break;
					}
					cout<<"�A���P�O";
				switch(d){
					case 0:
						cout<<"����"<<'('<<f<<')'<<endl;
						break;
					case 1:
						cout<<"���"<<'('<<f<<')'<<endl;
						break;
					case 2:
						cout<<"�R��"<<'('<<f<<')'<<endl;
						break;
					case 3:
						cout<<"�®�"<<'('<<f<<')'<<endl;
						break;
					}
					if(a>b){
						cout<<"You win!"<<endl;
						z++;
					}
					if(a<b){
						cout<<"You lose~"<<endl;
						w++;
					}
				break;
				}
		default:
			cout<<"��J���~�A�Э��s��J!!!"  <<endl;     
			}
		if(z+w>=26){
			cout<<"�P�w�H�šA�п�ܻ�l�C���άO���}����"<<endl;
			}
		} 
	cout<<"0"<<endl;
	cout<<"�̲׾��Z"<<endl;
	cout<<"��l�AĹ"<<x<<"���A��"<<y<<"���A"<<"����"<<g<<"���C"<<endl;
	cout<<"���J�P�AĹ"<<z<<"���A��"<<w<<"���C"<<endl;
	cout<<"Thanks for using, bye."<<endl;
	
}
