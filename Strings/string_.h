#pragma once
#include<iostream>
#include<Windows.h>

using namespace std;

class string_
{
	char *str;
	int length;
public:
	string_();
	string_(const char *s);
	string_(const string_ &s);
	~string_();

	void setString(const char *s);
	const char* getString();
	bool equal(const char *s);
	int getLength();
	void append(const string_ &obj);
	void append(const char *s);
	void print();
	void clear();
	void pushBack(char z);
	bool empty();
	char getChar(int pos);
	void insert(int pos, const string_&obj);
};
