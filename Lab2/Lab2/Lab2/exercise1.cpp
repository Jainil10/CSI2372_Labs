#include <iostream>
#include "exercise1.h"
using namespace std;

//Exercise 1 : (2 Marks)
//Modify the following program, just by inserting the display operator, in such a way that it
//displays the following values::

void main(void)
{
	int tab[80];
	int* p;
	int i;
	for (i = 0; i < 80; i++) tab[i] = i * i;
	cout << tab[2] << "\n";
	tab[2] = tab[1];
	cout << tab[1] << "\n";
	cout << tab[2] << "\n";
	tab[2] = *(tab + 1);
	cout << tab[2] << "\n";
	*(tab + 2) = tab[1];
	cout << *(tab + 2) << "\n";
	*(tab + 2) = *(tab + 1);
	cout << *(tab + 2) << "\n";
	p = &tab[0];
	//wrong spot
	tab[4] = *p;
	//wrong spot


}