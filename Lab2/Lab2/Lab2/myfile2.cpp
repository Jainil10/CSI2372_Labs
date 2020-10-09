#include "myfile2.h"
#pragma warning(disable : 4996)

/********************************************************************************/
/* Function menu which returns a character corresponding to the user's choice */
/********************************************************************************/
char menu(void)
{
	char choice;
	cout << endl << endl << "\t\tMenu" << endl << endl;
	cout << "1) Strings display." << endl;
	cout << "2) Replacement of a string by an other one" << endl;
	cout << "3) Sorting strings" << endl;
	cout << "4) Exit of the program" << endl << endl;
	cout << "Your choice :";
	cin >> choice;
	return(choice);
}

/********************************************************************************/
/*The replace function that replaces one string by another. It takes as arguments an array of pointers
on the strings "tab", the number of elements of this array of pointers "nbre" and the maximum size of
the strings "size" */
/********************************************************************************/
void replace(char* tab[], int const& nbre, int const& size)
{
	int numero; //the string to modify
	cout << endl << "Enter the string number to modify: ";
	cin.ignore(INT_MAX, '\n');
	cin >> numero;
	if (numero >= 0 && numero <= nbre) //check if the number is valid
	{
		cout << "Enter the new string: ";
		cin.ignore(INT_MAX, '\n');
		cin.getline(tab[numero], size, ' ');
	}
	else
	{
		cout << "There is no string with this number" << endl;
	}

}
void display(char* tab[], int const& nbre)
{
	int a = 0;
	for (int i = 0; i < nbre; i++) {
		while (tab[i][a] != NULL) {
			std::cout << (tab[i][a]);
			a++;
		}
		cout << endl;
		a = 0;
	}
}

void sort(char* tab[], int const& nbre) {
	char temp[size_ch];
	for (int i = 0; i < nbre - 1; i++) {
		if (strcmp(*(tab + i), *(tab + (i + 1))) > 0) {
			strcpy_s(temp, *(tab + (i + 1)));
			strcpy(*(tab + (i + 1)), *(tab + i));
			for (int j = i; j >= 0; j--) {
				if ((j == 0) || (strcmp(temp, *(tab + (j - 1))) > 0)) {
					strcpy(*(tab + j), temp);
					break;
				}
				else {
					strcpy(*(tab + j), *(tab + (j - 1)));
				}
			}
		}
	}
}