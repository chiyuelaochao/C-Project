#pragma once
class MyFriend
{
public:
	MyFriend();//构造函数(malloc)
	~MyFriend();//析构函数 释放在构造函数里面动态申请的内存(free)

	void setAge(int age);
	int getAge();
	void setName(char *name);
	char* getName();


private:
	int age;
	char *name;
};

