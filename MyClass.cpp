/* MyClass.cpp */

#include <iostream>

using namespace std; // 3. removing std::


class MyClass
{
private:
int counter;
public:
void Foo()
{
	cout << "Foo" << endl;
}
void Foo() const
{
	cout << "Foo const" << endl;
}
};

int main()
{
MyClass cc;
MyClass const ccc; // 1. replaced "const MyClass ccc=ccc" with "MyClass ccc" and it prints "foo" again, basically calling the function ccc.Foo()
//const MyClass ccc;
cc.Foo();
ccc.Foo() const;
}

// 2. constant member functions cannot be modified and can only call constant member functions
// We call a constant member function as follows: 'const className objectName', e.g: 'const MyClass ccc'