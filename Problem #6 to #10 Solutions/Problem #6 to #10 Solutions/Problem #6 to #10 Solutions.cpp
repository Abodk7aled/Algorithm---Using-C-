#include <iostream>
#include <string>
using namespace std;  // Problem #6 to #10 Solutions  //


// ######################### problem # 6 # ######################### //
// Write a program to ask the user to enter:• First Name • Last Name //

struct strInfo
{
	string FirstName;
	string LastName;
};

strInfo ReadInfo()
{
	strInfo Info;

	cout << "Plase Enter First Namr : " << endl;
	cin >> Info.FirstName;

	cout << "Please Enter Last Name : " << endl;
	cin >> Info.LastName;

	return Info;
}

string GetFullName(strInfo Info, bool Reversed)
{
	string FullName = "";

	if (Reversed)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;

	return FullName;
};

void PrintFullName(string FullName)
{
	cout << "\n Your Full Name Is : " << FullName << endl;
}

// ######################### problem # 7 # ######################### //
//  Then Print the “Half of the <Number> is <???>”.  Output => Half of 60 is 30 //

int ReadNumber()
{
	int Num;

	cout << "Please Enter a Number ? " << endl;
	cin >> Num;

	return Num;
}

float CalculateHalfNumber(int Num)
{
	return (float) Num / 2;
}

void PrintResults(int Num)
{
	string Result = "Half of " + to_string(Num) + " Is : " + to_string(CalculateHalfNumber(Num));
	cout << endl << Result << endl;
}

// ######################### problem # 8 # ######################### //
//  Then Print the “PASS” if mark >=50, otherwise print “Fail” //

enum enPassFail { Pass = 1 , Fail = 2 };

int ReadMark()
{

	int Mark;

	cout << "Please Enter Your Mark : " << endl;
	cin >> Mark;

	return 0;
}

enPassFail CheckMark(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResult(int Mark)
{
	if (CheckMark(Mark) == enPassFail::Pass)
		cout << "\n You Passed " << endl;
	else
		cout << "\n You Filed" << endl;
}

// ######################### problem # 9 # ######################### //
//  Write a program to ask the user to enter : • Number1, Number2, Number3 //

void ReadNumbers(int& Num1 , int& Num2 ,int& Num3)
{
	cout << "Please Enter Number 1 : " << endl;
	cin >> Num1;

	cout << "Please Enter Number 2 : " << endl;
	cin >> Num2;

	cout << "Please Enter Number 3 : " << endl;
	cin >> Num3;
}

int SumOfNumbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}

void PrintResultt(int Total)
{
	cout << "\n---------------------------------\n";
	cout << "\n The Total Sum Of Numbers Is : " << Total << endl;
}

// ######################### problem # 10 # ######################### //
//  Then Print the Average of entered Marks // 

void ReadMarkss(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please Enter Mark 1 : " << endl;
	cin >> Mark1;

	cout << "Please Enter Mark 2 : " << endl;
	cin >> Mark2;

	cout << "Please Enter Mark 3 : " << endl;
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1, Mark2, Mark3;
}

float CalculateAvg(int Mark1, int Mark2, int Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResultss(float Avrage)
{
	cout << "The Total Sum AVG Of Marks Is : " << Avrage << endl;
}

///////////////////////////////////////////////////////////////////////

int main()
{
 
	//PrintFullName(GetFullName(ReadInfo(), false)); // # 6 # //

	//PrintResults(ReadNumber()); // # 7 # //

	//PrintResult(ReadMark()); // # 8 # //

	/*int Num1, Num2, Num3;
	ReadNumbers(Num1, Num2, Num3);
	PrintResultt(SumOfNumbers(Num1, Num2, Num3));*/ // # 9 # //
	
	int Mark1, Mark2, Mark3;
	ReadMarkss(Mark1, Mark2, Mark3);
	PrintResultss(CalculateAvg(Mark1, Mark2, Mark3)); // # 10 # //
	return 0;
}