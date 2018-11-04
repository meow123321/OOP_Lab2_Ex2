#pragma once
#include<iostream>
using namespace std;

typedef struct student_adress {
	char city_name[15];
	int postal_code;
	char street[25];
	int number;
}student_dress;

typedef struct student_phone_number {
	int prefix;
	long int phone_number;
}student_phone_number;


typedef struct Student {
	char name[20];
	student_adress adress;
	student_phone_number phone;
	char university[3];
	int age;
	int marks[10];
	float promoting_mark;
	int absences;
}Students;

Student ADD_info();
void Display(Student student_aux);

