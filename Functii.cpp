#include"Studenti.h"


Student ADD_info() {

	Student student_aux;
	float media, sum;
	int absence;

	cout <<"Enter the name of the student: ";
	cin.get();
	cin.getline(student_aux.name, 20, '\n');

	cout << "Enter the adress: \n";
	cout << "The city: ";
	cin.getline(student_aux.adress.city_name, 15, '\n');
	cout << "The postal code: ";
	cin >> student_aux.adress.postal_code;
	cout << "The street: ";
	cin.get();
	cin.getline(student_aux.adress.street, 25, '\n');
	cout << "The number: ";
	cin >> student_aux.adress.number;

	cout << "Enter the phone number: \n";
	cout << "The prefix: ";
	cin >> student_aux.phone.prefix;
	cout << "The phone actuat number: ";
	cin >> student_aux.phone.phone_number;

	cout << "Enter the initials of the university(max 3): ";
	cin.get();
	cin.getline(student_aux.university, 4, '\n');

	cout << "Enter the ege of the student: ";
	cin >> student_aux.age;

	cout << "Enter the marks of the student: \n";
	absence = 0;
	sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> student_aux.marks[i];


		if (student_aux.marks[i] == 0) {
			absence++;      
		}
		sum += student_aux.marks[i];
	}

		media = sum / 10;
		student_aux.absences = absence;
		student_aux.promoting_mark = media;
	
		return student_aux;
}

void Display(Student student_aux) {
	cout << "Name: " << student_aux.name << endl;

	cout << "The adress: \t postal cod " << student_aux.adress.postal_code<< "\t city " << student_aux.adress.city_name;
	cout << "\t street " << student_aux.adress.street << "\t no. " << student_aux.adress.number << endl;

	cout << "University: " << student_aux.university << endl;

	cout << "Phone number: " << student_aux.phone.prefix<< "\t" << student_aux.phone.phone_number << endl;

	cout << "Age: " << student_aux.age << endl;

	cout << "Markc: ";
	for (int i = 0; i < 10; i++) {
		cout << "\t" << student_aux.marks[i];
	}
	cout << endl;

	cout << "Absences: " << student_aux.absences << endl;

	cout << "The promoting mark: " << student_aux.promoting_mark << endl;
}