#include"Studenti.h"


int main() {

	Student *students;

	students = new Student[3];

	for (int i = 0; i < 3; i++) {
		students[i] = ADD_info();
	}

	for (int i = 0; i < 3; i++) {
		cout << i << "Student: \n";
		Display(students[i]);
		cout << endl;
	}

	delete[] students;

	system("Pause");
	return 0;
}