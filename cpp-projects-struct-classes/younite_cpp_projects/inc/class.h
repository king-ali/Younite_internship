#if !defined(MACRO_CLASS_H)
#define MACRO_CLASS_H
#include <iostream>
using namespace std;

class RectangleType
{
     public:
         void PrintRectangle();
         float ReturnArea();
         float ReturnPerimeter();
         void SetSize(float L, float H);
 
     private:
         float length;
         float height;
};


//Sets the length and height of the rectangle 
void RectangleType::SetSize(float l, float h) 
{ 
      length = l; 
      height = h;
}

//Prints the length and height of the rectangle 
void RectangleType::PrintRectangle() 
{ 
      cout << "RECTANGLE\n";
      cout << "Rectangle Height:" << height << endl;
      cout << "Rectangle Length:" << length << endl;
}

// Computes and returns the area of the rectangle 
float RectangleType::ReturnArea() 
{ 
      return (length * height);
}

//Computes and returns the perimeter of the rectangle 
float RectangleType::ReturnPerimeter() 
{ 
      return (2*length + 2* height);
}
#endif // MACRO_CLASS_H


