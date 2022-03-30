// 8. Overload the function volume() to compute volume of a 
// cube, cylinder, rectangular box, and sphere. 
// Write an inline function to find the area of circle , pass radius 
// as parameter

#include <iostream>
using namespace std;


class shape
{
    public:
        virtual void volume() = 0;
};

class cube : public shape
{
    private:
        int length;
    public:
        void volume()
        {
            cout << "Enter length: ";
            cin >> length;
            cout << "Volume of cube is: " << length*length*length << endl;
        }
};

class cylinder : public shape
{
    private:
        int radius;
        int height;
    public:
        void volume()
        {
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Enter height: ";
            cin >> height;
            cout << "Volume of cylinder is: " << 3.14*radius*radius*height << endl;
        }
};

class box : public shape
{
    private:
        int length;
        int breadth;
        int height;
    public:
        void volume()
        {
            cout << "Enter length: ";
            cin >> length;
            cout << "Enter breadth: ";
            cin >> breadth;
            cout << "Enter height: ";
            cin >> height;
            cout << "Volume of box is: " << length*breadth*height << endl;
        }
};

class sphere : public shape
{
    private:
        int radius;
    public:
        void volume()
        {
            cout << "Enter radius: ";
            cin >> radius;
            cout << "Volume of sphere is: " << 3.14*radius*radius*radius << endl;
        }
};

inline float area(int radius)
{
    return (3.14*radius*radius);
}

int main()
{
    shape *s;
    int choice;
    cout << "Enter choice: " << endl;
    cout << "1. Cube" << endl;
    cout << "2. Cylinder" << endl;
    cout << "3. Box" << endl;
    cout << "4. Sphere" << endl;
    cin >> choice;
    switch(choice)
    {
        case 1:
            s = new cube;
            s->volume();
            break;
        case 2:
            s = new cylinder;
            s->volume();
            break;
        case 3:
            s = new box;
            s->volume();
            break;
        case 4:
            s = new sphere;
            s->volume();
            break;
        default:
            cout << "Invalid choice" << endl;
    }
    cout << "Area of circle is: " << area(5) << endl;
    return 0;
}

