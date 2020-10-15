#include<iostream>
#include<math.h>
using namespace std;
class fn
{
    int choice;
    int radius,s1,s2,length,breadth;
    float s3;
    public:
        void readChoice();
        void area(int r);
        void area(int l,int b);
        void area(int s1,int s2,float s3);
};
void fn::readChoice()
{
    cout<<"Enter 1 to calculate the area of a Circle.\n";
    cout<<"Enter 2 to calculate the area of a Rectangle.\n";
    cout<<"Enter 3 to calculate the area of a Triangle.\n";
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
            cout<<"Enter the Radius of the Circle : ";
            cin>>radius;
            area(radius);
            break;
        }
        case 2:
        {
            cout<<"Enter the Length and Breadth of the Recatangle : ";
            cin>>length>>breadth;
            area(length,breadth);
            break;
        }
        case 3:
        {
            cout<<"Enter the sides of Triangle : ";
            cin>>s1>>s2>>s3;
            area(s1,s2,s3);
            break;
        }
    }
}
void fn::area(int r)
{
    cout<<"Area of the Circle = "<<3.14*r*r;
}
void fn::area(int l,int b)
{
    cout<<"Area of the Rectangle = "<<l*b;
}
void fn::area(int s1,int s2,float s3)
{
    float s=(float)((s1+s2+s3)/2);
    float ar=s*(s-s1)*(s-s2)*(s-s3);
    cout<<"Area of the Triangle ="<<pow(ar,0.5);
}
int main()
{
    fn f;
    f.readChoice();
    return 0;
}