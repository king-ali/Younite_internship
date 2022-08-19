#include "class.h"


int main(){

    RectangleType rect1;
    rect1.SetSize(5,6);
    rect1.PrintRectangle();

    cout<<"\nRectangle Area : "<<rect1.ReturnArea()<<endl;
    cout<<"Rectangle Perimeter : "<<rect1.ReturnPerimeter()<<endl;

}
