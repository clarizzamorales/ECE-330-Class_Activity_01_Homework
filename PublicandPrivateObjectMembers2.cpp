/* Difference of public and private object members 1*/  
//ECE 330 - Software Design 
//Class Activity Lab 1

#include<iostream>
using namespace std;

class Circle
{
	private:
		double radius;

	public:
		double compute_area()
		{
			return 3.14*radius*radius;
		}
};

int main()
{
	Circle obj;
	obj.radius = 1.5; //cannot access radius since it is a private member. We can only use it inside of the class declaration
	cout << "Area is:" << obj.compute_area();
	return 0;
}