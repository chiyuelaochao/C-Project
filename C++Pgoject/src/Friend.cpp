#include <Friend.h>
#include <iostream>

//std C++��׼��������ռ�
using namespace std;//�����ռ䣨������java package���


namespace NSP_A{
	struct MyStudent
	{
		int age;
	};
}

MyFriend::MyFriend()
{
	cout << "MyFriend ���캯�� address = " << this << endl;

}

MyFriend::~MyFriend()
{
	cout << "MyFriend �������� address = " << this << endl;
}


// :: �����޶���
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