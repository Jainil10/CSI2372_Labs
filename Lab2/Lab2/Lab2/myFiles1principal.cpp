#include "myFile1.h"

#ifdef _myFiles1principal_
void main() {
	int i;
	int myTab[size_tab] = { 2,4,88,2,3,55,87,134,2,5 };
	cout << "Display of unsorted array " << endl;
	for (i = 0; i < size_tab; i++) cout << myTab[i] << endl;
	sort(myTab, size_tab);
	cout << " Display of sorted array " << endl;
	for (i = 0; i < size_tab; i++) cout << myTab[i] << endl;
}
#endif
