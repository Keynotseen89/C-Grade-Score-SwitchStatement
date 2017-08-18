#include <iostream>
#include <string>

using namespace std;

string gradeInput2;
char gradeInput;
char minuseOrpluse;
double gradeSign = 0;
double gradeA = 4, gradeB = 3, gradeC = 2.0, gradeD = 1.0;
double gradeScore = 0.0;

void gradeOutput()
{

	cout << "student grade is " << gradeScore << endl;
}

int main()
{
	//Char for one letter grade
	/*char gradeInput;
	char minuseOrpluse;
	double gradeSign = 0;
	double gradeA = 4, gradeB = 3, gradeC = 2.0, gradeD = 1.0;
	double gradeScore = 0.0;
	*/
	cout << "Please enter a letter grade for the student. " << endl;
	//cin >> gradeInput >> minuseOrpluse;
	cin >> gradeInput2;

	if (gradeInput2.length <= 0)
	{
		gradeInput2 = gradeInput2.substr(0);
		gradeInput = gradeInput2[0];
		
		switch (gradeInput)
		{
		
		case 'A':
			//cout << "Student grade is " << 4.0 << endl;
			gradeScore = gradeA;
			cout << "Student Grade is  " << gradeScore << endl;;
			break;
		case 'B':
			gradeScore = gradeB;
			gradeOutput();
			//cout << "Student grade is " << gradeScore << endl;//gradeScore = 3;
			break;
		case 'C':
			gradeScore = gradeC;
			cout << "Student grade is " << gradeScore << endl;
			break;
		case 'D':
			gradeScore = gradeD;
			cout << "Student grade is " << gradeScore << endl;
			break;
		case 'F':
			cout << "Student grade is " << gradeScore << endl;
			break;
		default:
			cout << "Sorry not the proper input. " << endl;

		}//end of switch statement

	}

	/*if (minuseOrpluse == '-')
	{
		gradeScore = gradeScore - 0.3;
		//cout << gradeScore;
		gradeOutput();
	}
	else if (minuseOrpluse == '+')
	{
		gradeScore = gradeScore + 0.3;
		cout << gradeScore;
	}
	else if (minuseOrpluse == ' ')
	{
		cout << gradeScore;
	}
	
	*/

	/*switch(minuseOrpluse)
	{
	case '-':
		gradeSign = - 0.3;
		
		
		//cout << gradeSign;
		break;
	case '+':
		gradeSign = +0.3;
		cout << gradeSign;
		break;
	default:
		cout 
	}*/

	system("Pause");
	return 0;

	
}//end of main code