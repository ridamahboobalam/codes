#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int stu_id[size] = { 0 }, num_abs[size] = { 0 }, abs_per[size] = { 0 }, choice = 0;
	char name_ini[size] = { 0 }, grades[size] = { 0 };
	float CGPA[size] = { 0 };
	for (int i = 0; i < size; i++)
	{
		stu_id[i] = i + 1;
		name_ini[i] = (rand() % 26) + 'A';
		CGPA[i] = float(rand() % 4.0);
		num_abs[i] = (rand() % 90);
		abs_per[i] = num_abs[i] * 100 / 90;
		if (abs_per[i] > 50)
			grades[i] = 'W';
		else if (CGPA[i] < 2.0)
			grades[i] = 'F';
		else if (CGPA[i] >= 2.0 && CGPA[i] <= 2.4)
			grades[i] = 'D';
		else if (CGPA[i] >= 2.5 && CGPA[i] <= 3.1)
			grades[i] = 'C';
		else if (CGPA[i] >= 3.2 && CGPA[i] <= 3.9)
			grades[i] = 'B';
		else if (CGPA[i] >= 4.0 && CGPA[i] <= 5.0)
			grades[i] = 'A';
	}
	while (1)
	{
		cout << "1.	Display the data of all the students who got F this semester. " << endl;
		cout << "2.	Display the id’s, name initials and attendance percentage of all the students in descending order on the basis of their percentage of attendance. " << endl;
		cout << "3.	Delete the whole record of the student who was withdrawn out of the course and display the record of rest of the students on screen. " << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
				  for (int i = 0; i < size; i++)
				  {
					  if (CGPA[i] < 2.0)
					  {
						  cout << "Student ID :  " << stu_id[i] << endl;
						  cout << "Name initial :  " << name_ini[i] << endl;
						  cout << "Number of absents :  " << num_abs[i] << endl;
						  cout << "CGPA :  " << CGPA[i] << endl;
						  cout << "GRADES :  " << grades[i] << endl;
						  cout << "Absent Percentage :  " << abs_per[i] << endl;
					  }
				  }
		}
			break;
		case 2:
		{
				  int des_at[size] = { 0 };
				  int des_ind[size] = { 0 };
				  for (int i = 0; i < size; i++)
				  {
					  des_at[i] = abs_per[i];
					  des_ind[i] = i;
				  }
				  for (int i = 0; i < size; i++)
				  {
					  for (int j = i + 1; j < size; j++)
					  {
						  if (des_at[i] < des_at[j])
						  {
							  swap(des_at[i], des_at[j]);
							  swap(des_ind[i], des_ind[j]);
						  }
					  }
				  }
				  //for (int i = 0; i < size; i++)
				  //if (des_at[i] == abs_per[i])

				  for (int i = 0; i < size; i++)
				  {
					  cout << "Student ID :  " << stu_id[des_ind[i]] << endl;
					  cout << "Name initial :  " << name_ini[des_ind[i]] << endl;
					  //cout << "Number of absents :  " << num_abs[des_ind[i]] << endl;
					  //cout << "CGPA :  " << CGPA[des_ind[i]] << endl;
					  //cout << "GRADES :  " << grades[des_ind[i]] << endl;
					  cout << "Absent Percentage :  " << abs_per[des_ind[i]] << endl;
				  }
		}
			break;
		case 3:
			break;
		default:
			cout << "You have selected invalid choice.";
		}
		system("PAUSE");
		system("CLS");
	}
	system("PAUSE");
	return 0;
}