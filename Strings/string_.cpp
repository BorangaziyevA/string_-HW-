#include "string_.h"



string_::string_()
{
	str = nullptr;
	length = 0;
}

string_::string_(const char * s)
{
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
}

string_::string_(const string_ & s)
{
	length = s.length;
	if (length == 0)
	{
		str = nullptr;
		return;
	}
	str = new char[length + 1];
	strcpy_s(str, length + 1, s.str);
}

string_::~string_()
{
	clear();
}

void string_::setString(const char * s)
{
	if (str != nullptr)
	{
		delete[] str;
	}
	length = strlen(s);
	str = new char[length + 1];
	strcpy_s(str, length + 1, s);
}

const char * string_::getString()
{
	return str;
}

bool string_::equal(const char * s)
{
	if (strcmp(str, s) == 0)
	{
		return true;
	}
	return false;
}

int string_::getLength()
{
	return length;
}

void string_::append(const string_ & obj)
{
	if (length == 0)
	{
		setString(obj.str);
		return;
	}
	length += obj.length;
	char * tmp;
	tmp = new char[length + 1];
	strcpy_s(tmp, length + 1, str);
	strcat_s(tmp, length + 1, obj.str);
	delete[] str;
	str = tmp;
}

void string_::append(const char * s)
{
	if (length == 0)
	{
		setString(s);
		return;
	}
	length += strlen(s);
	char *tmp;
	tmp = new char[length + 1];
	strcpy_s(tmp, length + 1, str);
	strcat_s(tmp, length + 1, s);
	delete[] str;
	str = tmp;

}

void string_::print()
{
	cout << str << endl;
}

void string_::clear()
{
	if (length != 0)
	{
		delete[] str;
	}
	str = nullptr;
	length = 0;
}

bool string_::empty()
{
	if (length != 0)
	{
		return true;
	}
	return false;
}

char string_::getChar(int pos)
{
	if (pos > length || pos < 0)
	{
		return false;
	}
	return str[pos];
}

void string_::insert(int pos, const string_ & obj)
{
	char *tmp;
	length += obj.length;
	tmp = new char[length + 1];
	int k = 0;
	int m;
	for (size_t i = 0; i < length+1; i++)
	{
		if (i < pos)
		{
			tmp[i] = str[i];
			m = i;
		}
		else if (i == pos)
		{
			while (obj.str[k] != NULL)
			{
				tmp[i] = obj.str[k];
				k++;
				i++;
			}
			i--;
		}
		else {
			m++;
			tmp[i] = str[m];

		}
	}
	delete[] str;
	str = tmp;
}


void string_::pushBack(char z)
{
	length++;
	char* tmp;
	tmp = new char[length + 1];
	strcpy_s(tmp, length + 1, str);
	tmp[length - 1] = z;
	tmp[length] = NULL;
	delete[] str;
	str = tmp;
}

