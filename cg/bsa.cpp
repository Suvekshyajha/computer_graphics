#include "bsa.h"
#include<iostream>
#include<graphics.h>
#include<cmath>
using namespace std;
bsa::bsa()
{
	x0=100;
			y0=100;
			x1=200;
			y1=200;
}
void bsa::inputbsa(){
			cout << "Enter x0: ";
    		cin >> x0 ;
    		cout<<"enter y0:"<<endl;
    		cin>>y0;
    		cout << "Enter x1: "<<endl;
    		cin>>x1;
    		cout<<"enter y1:"<<endl;
    		cin >> y1;
		}
void bsa::rasterbsa(){
			int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Calculate differences
    int dx = abs(x1 - x0);
    int dy = abs(y1 - y0);

    // Determine step direction
    int sx = (x1 > x0) ? 1 : -1;
    int sy = (y1 > y0) ? 1 : -1;

    // Initialize variables
    int x = x0, y = y0;

    // Check if the slope is shallow or steep
    if (dx > dy) {
        // Shallow slope: iterate over x
        int pk = 2 * dy - dx; // Initial decision variable
        putpixel(x, y, WHITE); // Plot the first point

        for (int i = 0; i < dx; ++i) {
            if (pk < 0) {
                pk += 2 * dy;
            } else {
                y += sy;
                pk += 2 * (dy - dx);
            }
            x += sx;
            putpixel(x, y, WHITE); // Plot the pixel
        }
    } else {
        // Steep slope: iterate over y
        int pk = 2 * dx - dy; // Initial decision variable
        putpixel(x, y, WHITE); // Plot the first point

        for (int i = 0; i < dy; ++i) {
            if (pk < 0) {
                pk += 2 * dx;
            } else {
                x += sx;
                pk += 2 * (dx - dy);
            }
            y += sy;
            putpixel(x, y, WHITE); // Plot the pixel
        }
    }
		}		
		
