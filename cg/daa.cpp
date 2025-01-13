#include "daa.h"
#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;

daa::daa()
{
	x0=100;
	y0=100;
	x1=200;
	y1=200;
}
void daa::input(){
	cout << "Enter x0: ";
    cin >> x0 ;
    cout<<"enter y0:"<<endl;
    cin>>y0;
    cout << "Enter x1: "<<endl;
    cin>>x1;
    cout<<"enter y1:"<<endl;
    cin >> y1;
}
void daa::raster(){
	double dx = x1 - x0;
    double dy = y1 - y0;
    int steps = fabs(dx) > fabs(dy) ? fabs(dx) : fabs(dy);    
    double xincr = dx / steps;
    double yincr = dy / steps;    
    cout << "Rasterizing the line..." << endl;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    double x = x0;
    double y = y0;
    for (int i = 0; i <= steps; ++i) {
        putpixel(round(x), round(y), WHITE); 
        x += xincr; 
        y += yincr; 
    }

}
