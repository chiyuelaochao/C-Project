#pragma once
class MyFriend
{
public:
	MyFriend();//���캯��(malloc)
	~MyFriend();//�������� �ͷ��ڹ��캯�����涯̬������ڴ�(free)

	void setAge(int age);
	int getAge();
	void setName(char *name);
	char* getName();


private:
	int age;
	char *name;
};

