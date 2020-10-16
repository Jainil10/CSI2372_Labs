#pragma once
#include <iostream>
#include <process.h>
using namespace std;

struct Evaluation {
	char student[20];
	int grade;
	Evaluation* next;
};

Evaluation* add(Evaluation*, int&);
Evaluation* remove(Evaluation*, int&);
void display(Evaluation*);
int average(Evaluation*, int&);
