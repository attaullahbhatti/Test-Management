#include <iostream>
using namespace std;
#include <string>
# include "Student.h"
# include "Admin.h"
#include<conio.h>
#include <fstream>
int main() {
	char identity;
	cout << " Press Admin(A) & Student (S) " << endl;
	cin >> identity;
	if (identity == 'A' || identity == 'a')
	{
		Admin admin;
		admin.Login();
	}

	// sahi kiya tunay comment ura kay


	system("pause");
	return 0;
}
