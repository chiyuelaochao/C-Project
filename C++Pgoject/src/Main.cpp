#include "Friend.h"
#include <iostream>

using namespace std;


void fun(){
	MyFriend myFriend;
	myFriend.setAge(18);
	myFriend.setName("С��");
	cout << "Friend fun name = " << myFriend.getName() << endl;
	cout << "Friend fun age = " << myFriend.getAge() << endl;

}

//ֵ����
void setFunc(MyFriend myFriend){
	myFriend.setAge(16);
	myFriend.setName("Сǿ");
	cout << "Friend setFunc name = " << myFriend.getName() << endl;
	cout << "Friend setFunc age = " << myFriend.getAge() << endl;
}

//���ô���,C++�������ָ�����ڴ�ռ�ı���
void setFunY(MyFriend &myFriend){
	myFriend.setAge(16);
	myFriend.setName("Сǿ");
	cout << "Friend setFunc name = " << myFriend.getName() << endl;
	cout << "Friend setFunc age = " << myFriend.getAge() << endl;
}

void main(){
	// fun();
	MyFriend myFriend;
	myFriend.setAge(18);
	myFriend.setName("С��");
	cout << "Friend before name = " << myFriend.getName() << endl;
	cout << "Friend before age = " << myFriend.getAge() << endl;

	// setFunc(myFriend);
	setFunY(myFriend);
	cout << "Friend after name = " << myFriend.getName() << endl;
	cout << "Friend after age = " << myFriend.getAge() << endl;

	system("pause");
}

/*
һ.ʲô������
�ѣ�heap���ռ䣺
��̬������ڴ棨malloc ��api �����ڶѿռ�, c++�е�new��
�����ڴ�Ž�������ʱ��̬������ڴ�Σ��ɶ�̬���Ż����������������������ģ����ܰ�����ֱ�ӷ��ʣ�ֻ��ͨ��ָ���ӷ��ʡ�

ջ(stack)�ռ�:
�ֲ��������������������ص�ַ�ȣ�ϵͳ�Զ��������ʱ�ڴ棩Linux��ר�ŵļĴ�������ջ�ڴ棨Ч�ʸߣ�

.bss��
δ��ʼ�����ֵΪ0��ȫ�ֱ����;�̬�ֲ�����

.data��
�ѳ�ʼ���ҳ�ֵ��0��ȫ�ֱ����;�̬�ֲ�����

.text��
��ִ�д��롢ֻ������,ȫ�־�̬����

ͨ��sizeof��A������С

1. �̿�����˵����������ԭ������һ������.
n �൱��m �ı������ºţ�����n ���κβ������Ƕ�m �Ĳ����������и��˽���JackMa���º��ǡ���ְ֡���
˵����ְ֡���ô��ô�ģ���ʵ������˵JackMa������n �Ȳ���m �Ŀ�����Ҳ����ָ��m ��ָ�룬��ʵn����m ���Լ���

c++�е����� �������ٶ��з���ռ䣩

//1.����������ȡ����û���κ����壬��Ϊ�����������ݣ��ܱ�֤�������ݹ����в���������
//2.���ÿ���ֱ�Ӳ���������ָ��Ҫͨ��ȡֵ(*p)����Ӳ���������ָ��Ŀɶ��Բ�
2. java�����ú;��
java�еľ���������¹�ϣ �� ������ʦ������ϵ���������ŷ���ǰ��˵�𡰳���ʦ�� ��˧�����󣬻�ã�
��Ҷ���֪��ָ���ǳ¹�ϣ�����캯�������ã����ڴ�����ڶѿռ䣬 ���ú;��������ջ�ռ�

3. java�е����ã�ǿ���ã������ã������ã������ã�


�������������ĸ��ָ������������ֵĸ��C++�ܹ����C���ԣ�����C++֧��ָ��

����˵�� c++�����ú�ָ��ʹ�õĲ��


��.ָ������õ�����

1. ָ����һ��ʵ�壬�����ý��Ǹ�������

2. ����ʹ��ʱ��������ã�*����ָ����Ҫ�����ã�

3. ����ֻ���ڶ���ʱ����ʼ��һ�Σ�֮�󲻿ɱ䣻ָ��ɱ䣻

���á���һ���ա� ^_^

4. ����û�� const��ָ���� const��const ��ָ�벻�ɱ䣻

5. ���ò���Ϊ�գ�ָ�����Ϊ�գ�

6. ��sizeof ���á��õ�������ָ��ı��������󣩵Ĵ�С������sizeof ָ�롱�õ�����ָ�뱾��
����ָ��ı��������ĵ�ַ���Ĵ�С��

���õ����÷�ʽ��ָ�������---�������ָ�룩
*/