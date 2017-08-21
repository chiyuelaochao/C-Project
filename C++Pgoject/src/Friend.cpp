#include <Friend.h>
#include <iostream>

//std C++标准库的命名空间
using namespace std;//命名空间（类似于java package概念）


namespace NSP_A{
	struct MyStudent
	{
		int age;
	};
}

MyFriend::MyFriend()
{
	cout << "MyFriend 构造函数 address = " << this << endl;

}

MyFriend::~MyFriend()
{
	cout << "MyFriend 析构函数 address = " << this << endl;
}


// :: 代表限定符
void MyFriend::setAge(int age){
	cout << "MyFriend setAge " << age << endl;
	this->age = age;

	/*NSP_A::MyStudent t;
	t.age = 18;

	using  NSP_A::MyStudent;
	MyStudent t2;
	t2.age = 16;*/
}

int MyFriend::getAge(){
	return this->age;
}

void MyFriend::setName(char *name){
	cout << "MyFriend setName " << name << endl;
	this->name = name;
}

char* MyFriend::getName(){
	return name;
}