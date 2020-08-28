#include <iostream>
using namespace std;

int main()
{
	float weight = 0, height = 0, BMI = 0;
	cout << "Enter the weight" << endl;
	cin >> weight;
	cout << "Enter the height" << endl;
	cin >> height;
	BMI = weight / (height * height);
	cout << "BMI is " << BMI<<endl;
	if (BMI < 18.5)
	{
		cout << "Underweight" <<endl;
	}
	else if (BMI == 18.5 || 24.9 >= BMI)
	{
		cout << "Normal" << endl;
	}
	else if (BMI == 25 || 29.9 >= BMI)
	{
		cout << "Overweight" << endl;
	}
	else if (BMI >= 30)
	{
		cout << "Obese" << endl;
	}
	else
	{
		cout << "Wrong input";
	}
	system("PAUSE");
	return 0;
}
