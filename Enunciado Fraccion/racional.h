#pragma once
#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;

class racional {
private:
	int a, b;
public:
	racional() {
		a = 0;
		b = 0;
	}
	racional(int a, int b) {
		this->a = a;
		this->b = b;
	}
	~racional(){}
	
	void setA(int a) {
		this->a = a;
	}
	void setB(int b) {
		this->b = b;
	}
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
	int MCD(int a, int b) {
		int res;
		while (b!=0){
			res = b;
			b = a % b;
			a = res;
		}
		return res;
	}


};