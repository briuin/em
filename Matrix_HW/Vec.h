#pragma once
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Vec
{
public:
	double n;
	
	vector<vector<double>> S;  //儲存所有向量
	vector<double> v;  //暫時沒用到的樣子
	void push(vector<double> a);  //存向量到S
	vector<double> add(double a,char x,double b,char y);  //加法
	vector<double> add(double a,char x,vector<double> ve);
	vector<double> dec(double a,char x,vector<double> ve);  //減法
	/*vector<double> dot(double a,char x,vector<double> ve);
	vector<double> mult(double a,char x,vector<double> ve);*/
	void push(string str);  //字串存到S "(3,4,5)"
	vector<double>Vec::normal(vector<double> ve); //normalize
	vector<double>cross(double a , char x , vector<double> ve );//cross
	vector<double>Vec::magnitude(vector<double> ve); //magnitude and return vector
	double Vec::magnitude_to_double(vector<double> ve); //magnitude and return double
	double Vec::component(vector<double> va,vector<double> vb,char a,char b); //component
	vector<double> Vec::projection(vector<double> va,vector<double> vb,char a,char b); //projection
	vector<double> pop(double a,char x);  //取出a倍向量
	string print_out(vector<double> a);  //匯出向量成字串
	double length(char x); //向量長度
	double length(vector<double> ve);
	double dot(vector<vector<double>> ve);  //內積
	int i,j;
	Vec();
	~Vec();
};