#include <iostream>
#include "bsa.h"
#include "daa.h"
#include<graphics.h>
#include<cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	bsa obj1;
	cout<<"bresenhams algorithm to make line:"<<endl;
    obj1.inputbsa();
    obj1.rasterbsa();
    daa obj2;
    cout<<"for daa :"<<endl;
    obj2.input();
    obj2.raster();
    getch();
    closegraph();
	return 0;
}
