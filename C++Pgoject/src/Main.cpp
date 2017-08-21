#include "Friend.h"
#include <iostream>

using namespace std;


void fun(){
	MyFriend myFriend;
	myFriend.setAge(18);
	myFriend.setName("小明");
	cout << "Friend fun name = " << myFriend.getName() << endl;
	cout << "Friend fun age = " << myFriend.getAge() << endl;

}

//值传递
void setFunc(MyFriend myFriend){
	myFriend.setAge(16);
	myFriend.setName("小强");
	cout << "Friend setFunc name = " << myFriend.getName() << endl;
	cout << "Friend setFunc age = " << myFriend.getAge() << endl;
}

//引用传递,C++里的引用指的是内存空间的别名
void setFunY(MyFriend &myFriend){
	myFriend.setAge(16);
	myFriend.setName("小强");
	cout << "Friend setFunc name = " << myFriend.getName() << endl;
	cout << "Friend setFunc age = " << myFriend.getAge() << endl;
}

void main(){
	// fun();
	MyFriend myFriend;
	myFriend.setAge(18);
	myFriend.setName("小明");
	cout << "Friend before name = " << myFriend.getName() << endl;
	cout << "Friend before age = " << myFriend.getAge() << endl;

	// setFunc(myFriend);
	setFunY(myFriend);
	cout << "Friend after name = " << myFriend.getName() << endl;
	cout << "Friend after age = " << myFriend.getAge() << endl;

	system("pause");
}

/*
一.什么是引用
堆（heap）空间：
动态分配的内存（malloc 等api 分配在堆空间, c++中的new）
堆用于存放进程运行时动态分配的内存段，可动态扩张或缩减。堆中内容是匿名的，不能按名字直接访问，只能通过指针间接访问。

栈(stack)空间:
局部变量、函数参数、返回地址等（系统自动分配的临时内存）Linux有专门的寄存器管理栈内存（效率高）

.bss段
未初始化或初值为0的全局变量和静态局部变量

.data段
已初始化且初值非0的全局变量和静态局部变量

.text段
可执行代码、只读变量,全局静态变量

通过sizeof（A）看大小

1. 教课书上说的是引用是原变量的一个别名.
n 相当于m 的别名（绰号），对n 的任何操作就是对m 的操作。例如有个人叫是JackMa，绰号是“马爸爸”。
说“马爸爸”怎么怎么的，其实就是在说JackMa。所以n 既不是m 的拷贝，也不是指向m 的指针，其实n就是m 它自己。

c++中的引用 （就是再堆中分配空间）

//1.单纯给变量取别名没有任何意义，作为函数参数传递，能保证参数传递过程中不产生副本
//2.引用可以直接操作变量，指针要通过取值(*p)，间接操作变量，指针的可读性差
2. java的引用和句柄
java中的句柄；举例陈冠希 和 “陈老师”的联系，在艳照门发生前，说起“陈老师” 人帅，器大，活好，
大家都不知道指的是陈冠希（构造函数的作用）。内存分配在堆空间， 引用和句柄分配在栈空间

3. java中的引用（强引用，弱引用，软引用，虚引用）


引用是面向对象的概念，指针是面向过程种的概念，C++能够混编C语言，所以C++支持指针

举例说明 c++中引用和指针使用的差别


二.指针和引用的区别

1. 指针是一个实体，而引用仅是个别名；

2. 引用使用时无需解引用（*），指针需要解引用；

3. 引用只能在定义时被初始化一次，之后不可变；指针可变；

引用“从一而终” ^_^

4. 引用没有 const，指针有 const，const 的指针不可变；

5. 引用不能为空，指针可以为空；

6. “sizeof 引用”得到的是所指向的变量（对象）的大小，而“sizeof 指针”得到的是指针本身
（所指向的变量或对象的地址）的大小；

常用的引用方式（指针的引用---代替二级指针）
*/