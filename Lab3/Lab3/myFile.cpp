#include "myLinkedList.h"
#include <cstring>

void display(Evaluation* first) {
	Evaluation* ptr;
	ptr = first;

	if (first == NULL) {
		cout << "The list is empty" << endl;
	}

	while (ptr != NULL) {
		cout << "Name: " << ptr->student << "	Grade: " << ptr->grade << endl << endl;
		ptr = ptr->next;
	};
}

Evaluation* add(Evaluation* first, int& number) {
	int index;
	Evaluation* data;
	data = new Evaluation;
	Evaluation* temp;
	Evaluation* ptr;
	ptr = first;

	cout << "Enter the student: ";
	cin >> data->student;
	cout << "Enter their grade: ";
	cin >> data->grade;

	if (number == 0) {
		data->next = first;
		number++;
		return data;
	}

	do {
		cout << "Enter the nth element which will preceed this element: ";
		cin >> index;
		if (index <= number)
			break;
		cout << "ERROR: The element number you have entered is too large. Please try again." << endl << endl;
	} while (index > number);

	for (int i = 0; i < index-1; i++) {
		if (index == 1)
			break;
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = data;
	data->next = temp;
	number++;

	return first;
}

Evaluation* remove(Evaluation* first, int& number) {
	int index;
	Evaluation* ptr;
	Evaluation* temp;
	ptr = first;

	do {
		cout << "Enter the nth element you would like to remove: ";
		cin >> index;
		if (index <= number)
			break;
		cout << "ERROR: The element number you have entered is too large. Please try again." << endl << endl;
	} while (index > number);

	if (index == 1) {
		first = ptr->next;
		number--;
		return first;
	}

	for (int i = 0; i < index-2; i++) {
		if (index == 2)
			break;
		ptr = ptr->next;
	}
	temp = ptr->next;
	ptr->next = temp->next;
	number--;

	return first;
}

int average(Evaluation* first, int& number) {
	int sum = 0;
	Evaluation* ptr;
	ptr = first;

	if (number == 0) {
		cout << "ERROR: The list is empty" << endl;
		return 0;
	}

	while (ptr != NULL) {
		sum = sum + ptr->grade;
		ptr = ptr->next;
	}
	cout << "The average is: " << sum / number << endl;
	return 1;
}