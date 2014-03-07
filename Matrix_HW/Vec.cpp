#include "stdafx.h"
#include "Vec.h"
#include <math.h>

Vec::Vec()
{

}


void Vec::push(vector<double> a)
{
	S.push_back(a);
}

void Vec::push(string str)
{
	vector<double> temp;
	char s[40];
	bool minus=false;
	int c=0;
	double x;
	strcpy(s,str.c_str());
	while (s[c]!='\0' && s[c]!='(')
	{
		c++;
	} 
	if (s[c]=='\0')
		return;
	c++;
	do
	{
		minus=false;
		x=0;
		do 
		{
			if(s[c]=='-')
				minus=true;
			else
				x=x*10+s[c]-'0';
			c++;
		} while (s[c]!=',' && s[c]!=')' );
		if(s[c]==',')
			c++;
		if (minus)
			temp.push_back(0-x);
		else
			temp.push_back(x);
	}while(s[c]!=')');

	if (!temp.empty())
	{
		S.push_back(temp);
	}




}


vector<double> Vec::add(double a,char x,double b,char y)
{
	vector<double> temp;
	int index_x,index_y;
	if(x>='a')
		index_x=x-'a';
	else
		index_x=x-'A';
	if (y>='a')
		index_y=y-'a';
	else
		index_y=y-'A';

	if (S[index_x].size()!=S[index_y].size()  || (unsigned)index_x>=S.size() || (unsigned)index_y>=S.size())
		return temp;
	else
	{
		for (i=0;i<(double)(S[index_x].size());i++)
		{
			temp.push_back(a*S[index_x][i]+b*S[index_y][i]);
		}

		return temp;

	}

}



string Vec::print_out(vector<double> a)
{
	
	stringstream temp;
	temp<<"(";
	for (i=0;i<a.size()-1;i++)
	{
		
		temp<<a[i];
		temp<<" ,";
	}	
	temp<<a[i];
	temp<<")";
	return temp.str();
}

vector<double> Vec::pop(double a,char x)
{
	vector<double> sum;
	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if( (unsigned)index<S.size())
	for(i=0;i<S[index].size();i++)
		sum.push_back(a*S[index][i]);


	return sum;



}

double Vec::length(char x)
{
	double sum=9999;
	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if( (unsigned)index<S.size())
	{
		sum=0;
		for(i=0;i<S[index].size();i++)
			sum+=pow(S[index][i],2);
	}

	return sqrt(sum);
}
double Vec::length(vector<double> ve)
{
	double sum=0;

		for(i=0;i<ve.size();i++)
			sum+=pow(ve[i],2);
	

	return sqrt(sum);
}
vector<double> Vec::add(double a,char x,vector<double> ve)
{
	vector<double> sum;

	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if(S[index].size()!=ve.size()|| (unsigned)index>=S.size())
		return sum;

	for (i=0;i<ve.size();i++)
	{
		sum.push_back(a*S[index][i]+ve[i]);
	}
	return sum;



}

double Vec::dot(vector<vector<double>> ve)
{
	double d=0;
	double temp;
	for (i=0;i<ve[0].size();i++)
	{
		temp=1;
		for (j=0;j<ve.size();j++)
		{
			temp*=ve[j][i];
		}
		d+=temp;
	}
	return d;

}

vector<double> Vec::dec(double a,char x,vector<double> ve)
{
	vector<double> sum;

	int index;
	if(x>='a')
		index=x-'a';
	else
		index=x-'A';
	if(S[index].size()!=ve.size() || (unsigned)index>=S.size())
		return sum;

	for (i=0;i<ve.size();i++)
	{
		sum.push_back(ve[i]-a*S[index][i]);
	}
	return sum;



}