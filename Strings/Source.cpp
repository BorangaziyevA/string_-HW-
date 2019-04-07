#include"string_.h"

void main()
{
	string_ s("Ho");
	string_ m("ell");

	//append
	//s.append(m);
	//s.print();

	//pushBack
	//s.print();
	//s.pushBack('z');
	//s.print();

	//empty
	//s.empty();

	//getChar
	//if (s.getChar(2) == false)//Надо изменять позицию в двух местах//Тут
	//{
	//	cout << "Error" << endl;
	//}
	//else
	//	cout << s.getChar(2) << endl;//Тут 

	//insert
	s.insert(1,m);
	s.print();


	system("pause");
}



