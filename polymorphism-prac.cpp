#include<iostream>
using namespace std;
class Shape{
    public:
   void Draw()
   {
        cout<<"In shape Draw"<<endl;
        }  
};

class Circle:public Shape
{
    public:
    void Draw()
    {
        cout<<"in circle shape"<<endl;
    }
};

class Square:public Shape
{
    void Draw()
    {
       cout<<"in square shape"<<endl;
    }
};

int main()
{
    Shape s;
    Circle c;
    Square q;
    
    Shape *ptr;
    ptr=&c;
    ptr->Draw();
}
