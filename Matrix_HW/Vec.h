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
	
	vector<vector<double>> S;
	vector<double> v;
	void push(vector<double> a);
	vector<double> add(double a,char x,double b,char y);
	vector<double> add(double a,char x,vector<double> ve);
	vector<double> dec(double a,char x,vector<double> ve);
	/*vector<double> dot(double a,char x,vector<double> ve);
	vector<double> mult(double a,char x,vector<double> ve);*/
	void push(string str);
	vector<double>Vec::normal(vector<double> ve);
	vector<double> pop(double a,char x);
	string print_out(vector<double> a);
	double length(char x);
	double length(vector<double> ve);
	double dot(vector<vector<double>> ve);
	int i,j;
	Vec();
	~Vec();
};