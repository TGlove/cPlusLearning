#include "pch.h"
#include <iostream>
using namespace std;
//union can not use string datatype
union student {
	int TP;
	char sex;
};
struct stu {
	int TP;
	char sex;
	string stuName;
};
int passval(int x);
void passref(int &x);


void main()
{
	/*student s;
	s.sex = 'F';
	cout << s.sex << endl;
	stu ss;
	ss.TP = 49606;
	ss.sex = 'M';
	ss.stuName = "sito";
	cout << ss.TP << ss.sex << endl;*/

	//int c=0,num[5] = { 1, 2, 3, 4 };
	////cin >> num[4];
	//while (c<5) {
	//	cout << num[c] << endl;
	//	c++;
	//}
	////cout << sizeof(num)/ sizeof(num[0]) << endl;
	//int sum=0,arr[4][5] = { {1,2},{3,4},{5,6} };
	//for (int i = 0; i < 4; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		cout << arr[i][j]<<"\t";
	//		sum += arr[i][j];
	//	}
	//	cout << endl;
	//}
	//cout << "sum is " << sum << endl;

	int x = 1,b;
	b = passval(x);
	cout << b << endl;
	passref(b);
	cout << b << endl;
}

int passval(int x) {
	return ++x;
}
void passref(int &x) {
	x++;
}
