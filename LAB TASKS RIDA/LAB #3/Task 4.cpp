int main()
{
	int number1, number2, number3;
	cout << "Enter the first number " << endl;
	cin >> number1;
	cout << "Enter the second number " << endl;
	cin >> number2;
	cout << "Enter the third number " << endl;
	cin >> number3;
	if ((number1 > number2 && number1 < number3) || (number1 < number2 && number1 > number3))
	{
		cout << number1 << " Second Largest Number ";
	}
	else if ((number2 > number1 && number2 < number3) || (number2 < number1 && number2 > number3))
	{
		cout << number2 << " Second Largest Number ";
	}
	else
	{
		cout << number3 << " Second Largest Number " << endl;
	}
	system("PAUSE");
	return 0;
}