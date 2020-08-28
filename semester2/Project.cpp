#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void takeaction(int choice);

//patient functions
void NewPatient();
void AddtoPatientList(string name, string address, string number,
	string date_of_birth, string gender, string blood_group, string disease_past, string patient_id);
void UpdatePatient();
void showPatient(int idx);
int SearchByPatientID(string patient_id);
void RemovePatient();
void InitializeLists();
void SearchPatient();
void ShowAllPatient();
void LoadPatientsFromFile();
void SavePatientsInFile();

//patient attribute
string* pat_name = NULL;
string* pat_address = NULL;
string* pat_contact = NULL;
string* pat_date_of_birth = NULL;
string* pat_gender = NULL;
string* pat_blood_gp = NULL;
string* pat_disease_past = NULL;
string* pat_id = NULL;
int number_of_patient = 0;

//doctor functions
void AddDoctor();
void AddtoDoctorList(string name, string address, string id, string timing);
void UpdateDoctor();
int SearchByDoctorID(string doctor_id);
void showDoctor(int idx);
void RemoveDoctor();
void InitializeDoctorLists();
void SearchDoctor();
void ShowAllDoctor();
void LoadDoctorsFromFile();
void SaveDoctorsInFile();

//Doctor attribute
string* doc_name = NULL;
string* doc_address = NULL;
string* doc_id = NULL;
string* doc_timing = NULL;
int number_of_doctors = 0;

int main()
{
	LoadPatientsFromFile();
	LoadDoctorsFromFile();
	int choice = 0;
	while (choice != 11)
	{
		cout << "\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t HOSPITAL MANAGEMENT SYSTEM \n\n" << endl;
		cout << "\n\n\t\t\t\tPlease,  Choose from the following Options: \n\n" << endl;
		cout << "\t\t\t_________________________________________________________________ \n";
		cout << "\t\t\t|                                           	                 |\n";
		cout << "\t\t\t|             1 >> Add New Patient Record                        |\n";
		cout << "\t\t\t|             2 >> Update Patient Record                         |\n";
		cout << "\t\t\t|             3 >> Remove Patient Record                         |\n";
		cout << "\t\t\t|             4 >> Search Patient Record                         |\n";
		cout << "\t\t\t|             5 >> Show All Patients                             |\n";
		cout << "\t\t\t|             6 >> Add New Doctor                                |\n";
		cout << "\t\t\t|             7 >> Update Doctor                                 |\n";
		cout << "\t\t\t|             8 >> Remove Doctor                                 |\n";
		cout << "\t\t\t|             9 >> Search Doctor                                 |\n";
		cout << "\t\t\t|             10 >> Show All Doctors                             |\n";
		cout << "\t\t\t|             11 >> Exit the Program                             |\n";
		cout << "\t\t\t|________________________________________________________________|\n\n";
		cout << "\n\n\t\t\t\t\tEnter your choice: ";
		cin >> choice;
		cin.ignore();
		system("cls");
		takeaction(choice);
		system("PAUSE");
	}
	return 0;
}
void takeaction(int choice)
{
	switch (choice)
	{
	case 1:
		NewPatient();
		break;
	case 2:
		UpdatePatient();
		break;
	case 3:
		RemovePatient();
		break;
	case 4:
		SearchPatient();
		break;
	case 5:
		ShowAllPatient();
		break;
	case 6:
		AddDoctor();
		break;
	case 7:
		UpdateDoctor();
		break;
	case 8:
		RemoveDoctor();
		break;
	case 9:
		SearchDoctor(); 
		break;
	case 10:
		ShowAllDoctor();
		break;
	case 11:
		SavePatientsInFile();
		SaveDoctorsInFile();
		exit(0);
	default:
		cout << "Invalid Input" << endl;
	}
}
void NewPatient()
{
	string name;
	string address;
	string number;
	string date_of_birth;
	string gender;
	string blood_group;
	string disease_past;
	string patient_id;
	cout << "\n********************************************************************\n";
	cout << "\nName: ";
	getline(cin, name);
	cout << "\nAdress: ";
	getline(cin, address);
	cout << "\nContact Number: ";
	getline(cin, number);
	cout << "\nDate of Birth: ";
	getline(cin, date_of_birth);
	cout << "\nGender: ";
	getline(cin, gender);
	cout << "\nBlood Group: ";
	getline(cin, blood_group);
	cout << "\nDisease Past: ";
	getline(cin, disease_past);
	cout << "\nPatient ID: ";
	getline(cin, patient_id);
	cout << "\n********************************************************************\n";
	AddtoPatientList(name, address, number, date_of_birth, gender, blood_group, disease_past, patient_id);
	cout << "\nInformation saved sucessfully\n\n";

}
void AddtoPatientList(string name, string address, string number, string date_of_birth, 
	string gender, string blood_group, string disease_past, string patient_id)
{
	int i = 0;
	number_of_patient++;
	string* new_pat_name = new string[number_of_patient];
	string* new_pat_address = new string[number_of_patient];
	string* new_pat_contact = new string[number_of_patient];
	string* new_pat_date_of_birth = new string[number_of_patient];
	string* new_pat_gender = new string[number_of_patient];
	string* new_pat_blood_gp = new string[number_of_patient];
	string* new_pat_disease_past = new string[number_of_patient];
	string* new_pat_id = new string[number_of_patient];
	for (i = 0; i < number_of_patient - 1; i++)
	{
		new_pat_name[i] = pat_name[i];
		new_pat_address[i] = pat_address[i];
		new_pat_contact[i] = pat_contact[i];
		new_pat_date_of_birth[i] = pat_date_of_birth[i];
		new_pat_gender[i] = pat_gender[i];
		new_pat_blood_gp[i] = pat_blood_gp[i];
		new_pat_disease_past[i] = pat_disease_past[i];
		new_pat_id[i] = pat_id[i];
	}
	new_pat_name[i] = name;
	new_pat_address[i] = address;
	new_pat_contact[i] = number;
	new_pat_date_of_birth[i] = date_of_birth;
	new_pat_gender[i] = gender;
	new_pat_blood_gp[i] = blood_group;
	new_pat_disease_past[i] = disease_past;
	new_pat_id[i] = patient_id;
	if (pat_name)
		delete[] pat_name;
	pat_name = new_pat_name;
	if (pat_address)
		delete[] pat_address;
	pat_address = new_pat_address;
	if (pat_contact)
		delete[] pat_contact;
	pat_contact = new_pat_contact;
	if (pat_date_of_birth)
		delete[] pat_date_of_birth;
	pat_date_of_birth = new_pat_date_of_birth;
	if (pat_gender)
		delete[] pat_gender;
	pat_gender = new_pat_gender;
	if (pat_blood_gp)
		delete[] pat_blood_gp;
	pat_blood_gp = new_pat_blood_gp;
	if (pat_disease_past)
		delete[] pat_disease_past;
	pat_disease_past = new_pat_disease_past;
	if (pat_id)
		delete[] pat_id;
	pat_id = new_pat_id;
}
void showPatient(int idx)
{
	cout << "\n********************************************************************\n";
	cout << "Name: " << pat_name[idx] << endl;
	cout << "Adress: " << pat_address[idx] << endl;
	cout << "Contact Number: " << pat_contact[idx] << endl;
	cout << "Date of Birth: " << pat_date_of_birth[idx] << endl;
	cout << "Gender: " << pat_gender[idx] << endl;
	cout << "Blood Group: " << pat_blood_gp[idx] << endl;
	cout << "Disease Past: " << pat_disease_past[idx] << endl;
	cout << "Patient ID: " << pat_id[idx] << endl;
	cout << "\n********************************************************************\n";
}
void ShowAllPatient()
{
	if (number_of_patient == 0)
	{
		cout << "No record found\n";
	}
	for (int i = 0; i < number_of_patient; i++)
	{
		cout << "\n********************************************************************\n";
		showPatient(i);
		cout << "\n********************************************************************\n";
	}
}
void UpdatePatient()
{
	string patient_id;
	cout << "Enter Patient ID which you want to update: ";
	cin >> patient_id;
	int idx = SearchByPatientID(patient_id);
	if (idx == -1)
	{
		cout << "Patient ID not found." << endl;
		return;
	}
	cout << "Patient found" << endl;
	showPatient(idx);
	int x = 0;
	cout << "What you want to update? " << endl;
	cout << "1 >> Update Name. " << endl;
	cout << "2 >> Update Adress. " << endl;
	cout << "3 >> Update Number. " << endl;
	cout << "4 >> Update Date of Birth. " << endl;
	cout << "5 >> Update Gender. " << endl;
	cout << "6 >> Update Blood Group. " << endl;
	cout << "7 >> Update Disease Past. " << endl;
	cout << "Enter your Choice: ";
	cin >> x;
	if (cin.fail())
		cin.clear();
	cin.ignore();
	switch (x)
	{
	case 1:
		cout << "Enter New Name: ";
		getline(cin, pat_name[idx]);
		break;
	case 2:
		cout << "Enter New Address: ";
		getline (cin,pat_address[idx]);
		break;
	case 3:
		cout << "Enter New Number: ";
		getline(cin, pat_contact[idx]);
		break;
	case 4:
		cout << "Enter New Age: ";
		getline(cin, pat_date_of_birth[idx]);
		break;
	case 5:
		cout << "Enter New Gender: ";
		getline(cin, pat_gender[idx]);
		break;
	case 6:
		cout << "Enter New Blood Group: ";
		getline(cin, pat_blood_gp[idx]);
		break;
	case 7:
		cout << "Enter New Disease Past: ";
		getline(cin, pat_disease_past[idx]);
		break;
	default:
		cout << "Invalid Input." << endl;
	}
}
void RemovePatient()
{
	string patient_ID;
	cout << "Which patient you want to remove?" << endl;
	cin >> patient_ID;
	int idx = SearchByPatientID(patient_ID);
	if (idx == -1)
	{
		cout << "Patient ID not found." << endl;
		return;
	}
	int i = 0, j = 0;
	if (number_of_patient == 1)
	{
		InitializeLists();
		number_of_patient = 0;
		return;
	}
	string* new_pat_name = new string[number_of_patient - 1];
	string* new_pat_address = new string[number_of_patient - 1];
	string* new_pat_contact = new string[number_of_patient - 1];
	string* new_pat_date_of_birth = new string[number_of_patient - 1];
	string* new_pat_gender = new string[number_of_patient - 1];
	string* new_pat_blood_gp = new string[number_of_patient - 1];
	string* new_pat_disease_past = new string[number_of_patient - 1];
	string* new_pat_id = new string[number_of_patient - 1];
	for (i = 0; i < number_of_patient; i++)
	{
		if (idx == i)
			continue;
		new_pat_name[j] = pat_name[i];
		new_pat_address[j] = pat_address[i];
		new_pat_contact[j] = pat_contact[i];
		new_pat_date_of_birth[j] = pat_date_of_birth[i];
		new_pat_gender[j] = pat_gender[i];
		new_pat_blood_gp[j] = pat_blood_gp[i];
		new_pat_disease_past[j] = pat_disease_past[i];
		new_pat_id[j] = pat_id[i];
		j++;
	}
	number_of_patient--;
	InitializeLists();
	pat_name = new_pat_name;
	pat_address = new_pat_address;
	pat_contact = new_pat_contact;
	pat_date_of_birth = new_pat_date_of_birth;
	pat_gender = new_pat_gender;
	pat_blood_gp = new_pat_blood_gp;
	pat_disease_past = new_pat_disease_past;
	pat_id = new_pat_id;
}
void InitializeLists()
{
	if (pat_name)
		delete[] pat_name;
	pat_name = NULL;
	if (pat_address)
		delete[] pat_address;
	pat_address = NULL;
	if (pat_contact)
		delete[] pat_contact;
	pat_contact = NULL;
	if (pat_date_of_birth)
		delete[] pat_date_of_birth;
	pat_date_of_birth = NULL;
	if (pat_gender)
		delete[] pat_gender;
	pat_gender = NULL;
	if (pat_blood_gp)
		delete[] pat_blood_gp;
	pat_blood_gp = NULL;
	if (pat_disease_past)
		delete[] pat_disease_past;
	pat_disease_past = NULL;
	if (pat_id)
		delete[] pat_id;
	pat_id = NULL;
}
int SearchByPatientID(string patient_id)
{
	int idx = -1;
	for (int i = 0; i < number_of_patient; i++)
	{
		if (strcmp(pat_id[i].c_str(), patient_id.c_str()) == 0)
		{
			idx = i;
			break;
		}
	}
	return idx;
}
void SearchPatient()
{
	string ID;
	cout << "Which patient you want to search?" << endl;
	cout << "Enter Patient ID: ";
	cin >> ID;
	SearchByPatientID(ID);
	int idx = SearchByPatientID(ID);
	if (idx == -1)
	{
		cout << "Patient ID not found." << endl;
		return;
	}
	showPatient(idx);
}
void LoadPatientsFromFile()
{
	ifstream file;
	file.open("patients.dat");
	if (file.is_open())
	{
		int number_of_patient1 = 0;
		string sTemp;
		file >> number_of_patient1;
		std::getline(file, sTemp);
		if (number_of_patient1)
		{
			while (!file.eof() && number_of_patient1 != number_of_patient)
			{
				string name;
				string address;
				string number;
				string date_of_birth;
				string gender;
				string blood_group;
				string disease_past;
				string patient_id;
				std::getline(file, patient_id);
				std::getline(file, name);
				std::getline(file, address);
				std::getline(file, number);
				std::getline(file, date_of_birth);
				std::getline(file, gender);
				std::getline(file, blood_group);
				std::getline(file, disease_past);
				AddtoPatientList(name, address, number, date_of_birth, gender, blood_group, disease_past, patient_id);
			}
		}
		file.close();
	}
}
void SavePatientsInFile()
{
	ofstream file;
	file.open("patients.dat");
	if (file.is_open())
	{
		file << number_of_patient << endl;
		for (int i = 0; i < number_of_patient; i++)
		{
			file << pat_id[i] << endl;
			file << pat_name[i] << endl;
			file << pat_address[i] << endl;
			file << pat_contact[i] << endl;
			file << pat_date_of_birth[i] << endl;
			file << pat_gender[i] << endl;
			file << pat_blood_gp[i] << endl;
			file << pat_disease_past[i] << endl;
		}
		file.close();
	}
}

void AddDoctor()
{
	string name;
	string address;
	string id;
	string timing;
	cout << "\n********************************************************************\n";
	cout << "\nName: ";
	getline(cin, name);
	cout << "\nAdress: ";
	getline(cin, address);
	cout << "\nID: ";
	getline(cin, id);
	cout << "\nTiming: ";
	getline(cin, timing);
	cout << "\n********************************************************************\n";
	AddtoDoctorList(name, address, id, timing);
	cout << "\nInformation saved sucessfully\n\n";
}
void AddtoDoctorList(string name, string address, string id, string timing)
{
	int i = 0;
	number_of_doctors++;
	string* new_doc_name = new string[number_of_doctors];
	string* new_doc_address = new string[number_of_doctors];
	string* new_doc_id = new string[number_of_doctors];
	string* new_doc_timing = new string[number_of_doctors];
	for (i = 0; i < number_of_doctors - 1; i++)
	{
		new_doc_name[i] = doc_name[i];
		new_doc_address[i] = doc_address[i];
		new_doc_id[i] = doc_id[i];
		new_doc_timing[i] = doc_timing[i];
	}
	new_doc_name[i] = name;
	new_doc_address[i] = address;
	new_doc_id[i] = id;
	new_doc_timing[i] = timing;
	if (doc_name)
		delete[] doc_name;
	doc_name = new_doc_name;
	if (doc_address)
		delete[] doc_address;
	doc_address = new_doc_address;
	if (doc_id)
		delete[] doc_id;
	doc_id = new_doc_id;
	if (doc_timing)
		delete[] doc_timing;
	doc_timing = new_doc_timing;
}
void UpdateDoctor()
{
	string doctor_id;
	cout << "Enter Doctor ID which you want to update: ";
	cin >> doctor_id;
	int idx = SearchByDoctorID(doctor_id);
	if (idx == -1)
	{
		cout << "Doctor ID not found." << endl;
		return;
	}
	cout << "Doctor found" << endl;
	showDoctor(idx);
	int x = 0;
	cout << "What you want to update? " << endl;
	cout << "1 >> Update Name. " << endl;
	cout << "2 >> Update Adress. " << endl;
	cout << "3 >> Update Timing. " << endl;
	cout << "Enter your Choice: ";
	cin >> x;
	switch (x)
	{
	case 1:
		cout << "Enter New Name: ";
		cin >> doc_name[idx];
		break;
	case 2:
		cout << "Enter New Address: ";
		cin >> doc_address[idx];
		break;
	case 3:
		cout << "Enter New Number: ";
		cin >> doc_timing[idx];
		break;
	default:
		cout << "Invalid Input." << endl;
	}
}
int SearchByDoctorID(string doctor_id)
{
	int idx = -1;
	for (int i = 0; i < number_of_doctors; i++)
	{
		if (strcmp(doc_id[i].c_str(), doctor_id.c_str()) == 0)
		{
			idx = i;
			break;
		}
	}
	return idx;
}
void showDoctor(int idx)
{
	cout << "\n********************************************************************\n";
	cout << "Name: " << doc_name[idx] << endl;
	cout << "Adress: " << doc_address[idx] << endl;
	cout << "Doctor ID: " << doc_id[idx] << endl;
	cout << "Timing: " << doc_timing[idx] << endl;
	cout << "\n********************************************************************\n";
}
void RemoveDoctor()
{
	string doctor_ID;
	cout << "Which patient you want to remove?" << endl;
	cin >> doctor_ID;
	int idx = SearchByPatientID(doctor_ID);
	if (idx == -1)
	{
		cout << "Doctor ID not found." << endl;
		return;
	}
	int i = 0, j = 0;
	if (number_of_doctors == 1)
	{
		InitializeDoctorLists();
		number_of_doctors = 0;
		return;
	}
	string* new_doc_name = new string[number_of_doctors - 1];
	string* new_doc_address = new string[number_of_doctors - 1];
	string* new_doc_id = new string[number_of_doctors - 1];
	string* new_doc_timing = new string[number_of_doctors - 1];
	for (i = 0; i < number_of_doctors; i++)
	{
		if (idx == i)
			continue;
		new_doc_name[j] = doc_name[i];
		new_doc_address[j] = doc_address[i];
		new_doc_id[j] = doc_id[i];
		new_doc_timing[j] = doc_timing[i];
		j++;
	}
	number_of_patient--;
	InitializeDoctorLists();
	doc_name = new_doc_name;
	doc_address = new_doc_address;
	doc_id = new_doc_id;
	doc_timing = new_doc_timing;
}
void InitializeDoctorLists()
{
	if (doc_name)
		delete[] doc_name;
	doc_name = NULL;
	if (doc_address)
		delete[] doc_address;
	doc_address = NULL;
	if (doc_id)
		delete[] doc_id;
	doc_id = NULL;
	if (doc_timing)
		delete[] doc_timing;
	doc_timing = NULL;
}
void SearchDoctor()
{
	string ID;
	cout << "Which Doctor you want to search?" << endl;
	cout << "Enter Doctor ID: ";
	cin >> ID;
	SearchByDoctorID(ID);
	int idx = SearchByDoctorID(ID);
	if (idx == -1)
	{
		cout << "Doctor ID not found." << endl;
		return;
	}
	showDoctor(idx);
}
void ShowAllDoctor()
{
	if (number_of_doctors == 0)
	{
		cout << "No record found\n";
	}
	for (int i = 0; i < number_of_doctors; i++)
	{
		cout << "\n********************************************************************\n";
		showDoctor(i);
		cout << "\n********************************************************************\n";
	}
}
void SaveDoctorsInFile()
{
	ofstream file;
	file.open("doctors.dat");
	if (file.is_open())
	{
		file << number_of_doctors << endl;
		for (int i = 0; i < number_of_doctors; i++)
		{
			file << doc_id[i] << endl;
			file << doc_name[i] << endl;
			file << doc_address[i] << endl;
			file << doc_timing[i] << endl;
		}
		file.close();
	}
}
void LoadDoctorsFromFile()
{
	ifstream file;
	file.open("doctors.dat");
	if (file.is_open())
	{
		int number_of_doctor1 = 0;
		string sTemp;
		file >> number_of_doctor1;
		std::getline(file, sTemp);
		if (number_of_doctor1)
		{
			while (!file.eof() && number_of_doctor1 != number_of_doctors)
			{
				string name;
				string address;
				string timing;
				string id;
				std::getline(file, id);
				std::getline(file, name);
				std::getline(file, address);
				std::getline(file, timing);
				AddtoDoctorList(name, address, timing, id);
			}
		}
		file.close();
	}
}
