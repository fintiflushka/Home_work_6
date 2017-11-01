#include <iostream>
#include <string>
#include "book.h"
#include "magazine.h"

using namespace std;


int main() {
	Item* it[4];

	Book low_level_coding(001, 0, "Pavel Berezhnoy", "C language", "Technopark", 2010);
	Book high_level_coding(007, 1, "Sergey Titaevskiy", "C++", "Technopark", 2011);

	Magazine algorithms(0101, 1, "For complete idiots", 1, 2009, "Base algorithms in programming");
	Magazine projects(777, 0, "For complete idiots", 2, 2009, "How to do simple projects in C++");

	it[0] = &low_level_coding;
	it[1] = &high_level_coding;
	it[2] = &algorithms;
	it[3] = &projects;

	for (int i = 0; i < 4; i ++) {
		it[i]->Item::show();
		cout << endl;
	}

	return 0;
}