#pragma once
#include<iostream>
#include"worker.h"
using namespace std;
	
//构造员工类 
class Employee :public Worker {	//公共形式继承纯虚类Worker

public:
	// 一定要 重写 构造函数和父类中的纯虚函数 ，依然只在类中进行声明  在cpp文件进行实现 如果不重写的话 那子类也属于抽象类
	Employee(int id, string name, int dId);
	virtual string getDeptName();		//virtul 关键字可删可不删
	virtual void showInfo();
};