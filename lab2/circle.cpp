#include "D:\suvekshya_3rdsem\computer graphics\circle.h"
#include<iostream>
#include<graphics.h>
using namespace std;
circle::circle()
{
	xc=0;
	yc=0;
	r=100;
}
void circle::inputcircle(){
	cout<<"enter the x-coordinate of center:"<<endl;
	cin>>xc;
	cout<<"enter the y-coordinate of center:"<<endl;
	cin>>yc;
	cout<<"enter radius:"<<endl;
	cin>>r;

}
void circle::symmetry(int x1,int y1){
	int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Dev-Cpp\\BGI");
	//(x,y),(-x, y),(x, -y),(-x, -y),(y, x),(-y, x),(y, -x),(-y, -x)
	putpixel(x1+xc,y1+yc,WHITE);
	putpixel(-x1+xc,y1+yc,WHITE);
	putpixel(x1+xc,-y1+yc,WHITE);
	putpixel(-x1+xc,-y1+yc,WHITE);
	putpixel(y1+yc,x1+xc,WHITE);
	putpixel(-y1+yc,x1+xc,WHITE);
	putpixel(y1+yc,-x1+xc,WHITE);
	putpixel(-y1+yc,-x1+xc,WHITE);
	
	
}
void circle::rastercircle(){
	
    int pk=1-r;
    int x=0,y=r;
    while(x>y){
    	if(pk>0){
    		x++;
    		pk+=2*x+1;
    		symmetry(x,y);
			
    		
		}
	    else{
	    	x++;
	    	y--;
	    	pk+=2*x+1-2*y;
	    	x+=xc;
    		y+=yc;
    		symmetry(x,y);
			
		}
	}
    
}

