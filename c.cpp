// multifile.cpp : 定义控制台应用程序的入口点。
//
#include<iostream>
//#include "stdafx.h"
using namespace std;

class Car{
private:
	int money,brand;
public:
	static int number;
	Car(int a,int b){
	money = a;
	brand = b;
	}
	//~Car();
};

int Car::number = 1;

class Benz:public Car{
private:
	int money_benz,brand_benz;
public:
	//int Car::number = 1;
	Benz(int a,int b):Car(a - 1,b - 1){money_benz = a,number = b;}
	void out(){
	number = number + 5;
	cout<<"the number in Benz is"<<number<<endl;
	}
};

class Audi:public Car{
private:
	int money_audi,brand_audi;
public:
	Audi(int a,int b):Car(a - 3,b - 3){money_audi = a,brand_audi = b;}
	void out(){
	//cout<<money_audi<<endl;
	number = number + 10;
	cout<<"the number in Audi is: "<<number<<endl;
	}
};

int main(){
	Car car(0,1);
	Benz benz(1,81);
	Audi audi(2,3);
	benz.out();
	audi.out();
	system("pause");
	return 0;

}
