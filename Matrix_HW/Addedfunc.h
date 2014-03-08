#pragma once
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Addedfunc
{
public:
	
	
	string erase_space(string s);   //清除字串空白處

	string clearallstupidinput(string s);  //進階版清除字串空白
	Addedfunc();
	~Addedfunc();
};