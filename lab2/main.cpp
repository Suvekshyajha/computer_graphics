#include <iostream>
#include "circle.h"


#include<graphics.h>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch;
	int gd = DETECT, gm;
    initgraph(&gd, &gm,NULL);
	do{
		cout<<"menu:"<<endl;
		cout<<"1.circle midpoint algorithm"<<endl;
		cout<<"2.elipse "<<endl;
		cout<<"ENTER your choice(1-2) or 'n' to exit"<<endl;
		cin>>ch;
		switch(ch){
			
			case'1':{
				circle obj1;
				
    			obj1.inputcircle();
    			obj1.rastercircle();
				break;
			}
			/*case'2':{
				daa obj2;
    			cout<<"for daa :"<<endl;
    			obj2.input();
    			obj2.raster();
				break;
			}
			*/
			case'n':{
				cout<<"exiting....."<<endl;
				break;
			}
			default:{
				cout<<"invalid choice!"<<endl;
				break;
			}
		}
	}while(ch!='n');
	
    
    getch();
    closegraph();
	return 0;
}

