// 8. Overload the function volume() to compute volume of a 
// cube, cylinder, rectangular box, and sphere. 
// Write an inline function to find the area of circle , pass radius 
// as parameter

#include <iostream>
using namespace std;


inline float area_circle(float radius)
{
	return 3.14*radius*radius;
}

float volume(float cube)
{
    return cube*cube*cube;
}

// a function volume to calculate volume of a cylinder
float volume(float cylinder, float radius)
{
    return 3.14*radius*radius*cylinder;
}

// a function volume to calculate volume of a rectangular box
float volume(float length, float width, float height)
{
    return length*width*height;
}

// a function volume to calculate volume of a sphere
float volume(float sphere, int radius)
{
    return 4/3*3.14*radius*radius*radius;
}

int main()
{
    float cube = 5;
    float cylinder = 5;
    float radius = 5;
    float length = 5;
    float width = 5;
    float height = 5;
    float sphere = 5;

    cout << "The volume of a cube is: " << volume(cube) << endl;
    cout << "The volume of a cylinder is: " << volume(cylinder, radius) << endl;
    cout << "The volume of a rectangular box is: " << volume(length, width, height) << endl;
    cout << "The volume of a sphere is: " << volume(sphere, radius) << endl;
    cout << "The area of a circle is: " << area_circle(radius) << endl;
    
    return 0;
}