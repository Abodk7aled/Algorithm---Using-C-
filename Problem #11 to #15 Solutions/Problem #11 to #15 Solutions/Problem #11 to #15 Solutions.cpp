#include <iostream>
#include <string>

using namespace std; // Problem #11 to #15 Solutions //

//###################### Problem _ 11 # //######################//
// Marks, and print “PASS” if average>=50, otherwise print “FAIL” //

enum enPassFail { Pass = 1 , Fail = 2 };

void ReadMarkss(int& Mark1, int& Mark2, int& Mark3)
{
	cout << "Please Enter Mark 1 : " << endl;
	cin >> Mark1;

	cout << "Please Enter Mark 2 : " << endl;
	cin >> Mark2;

	cout << "Please Enter Mark 3 : " << endl;
	cin >> Mark3;
}

int SumOfMarks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float CalculateAVG(int Mark1, int Mark2, int Mark3)
{
	return(float)SumOfMarks(Mark1, Mark2, Mark3) / 3;
}

enPassFail CheckAvg(float AVG)
{
	if (AVG >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}

void PrintResults(float AVG)
{
	cout << "\n Your AVG Is : " << AVG << endl;
	if (CheckAvg(AVG) == enPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You Faild" << endl;
}

//###################### Problem _ 12 # //######################//
//  Then Print the Max Number. 2 Numbers //

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "Please Enter Number 1 ; " << endl;
	cin >> Num1;

	cout << "Please Enter Number 2 ; " << endl;
	cin >> Num2;
}

int MaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResult(int Max)
{
	cout << "\n The Maximum Number Is : " << Max << endl;
}

//###################### Problem _ 13 # //######################//
//  Then Print Max number. 3 Numbers //

void ReadABCNumbers(int& A, int& B, int& C)
{
	cout << "Please Enter A Number 1 : " << endl;
	cin >> A;

	cout << "Please Enter B Number 2 : " << endl;
	cin >> B;

	cout << "Please Enter C Number 3 : " << endl;
	cin >> C;
}

int MaxOf3Numbers(int A, int B, int C)
{
	if (A > B)
		if (A > C)
			return A;
		else
			return C;
	if (B > C)
		return B;
	else
		return C;
			
}

void PrintMaxNum(int Max)
{
	cout << "\n The Maximum Number Is : " << Max << endl;
}

//###################### Problem _ 14 # //######################//
// print the two numbers , then Swap the two numbers and print them//

void ReadNumberss(int& Num1, int& Num2)
{
	cout << "Please Enter Num1 : " << endl;
	cin >> Num1;

	cout << "Plaeas Enter Num2 : " << endl;
	cin >> Num2;
}

void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;
}

void PrintNumberss(int Num1, int Num2)
{
	cout << "\nNumber 1 : " << Num1 << endl;
	cout << "Number 2 : " << Num2 << endl;
}

//###################### Problem _ 15 # //######################//
// o calculate rectangle area and print it on the screen //

void ReadNumbersss(float& A, float& B)
{
	cout << "Please Enter A : " << endl;
	cin >> A;

	cout << "Please Enter B : " << endl;
	cin >> B;
}

float CalculateRectangleArea(float A, float B)
{
	return A * B;
}

void PrintNumbersss(float Area)
{
	cout << "\n Rectangle Area Is = " << Area << endl;
}

int main()
{
	/*int Mark1, Mark2, Mark3;
	ReadMarkss(Mark1, Mark2, Mark3);
	PrintResults(CalculateAVG(Mark1, Mark2 , Mark3));*/ // # 11 # //

	/*int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintResult(MaxOf2Numbers(Num1, Num2));*/ // # 12 # //

	//int A, B, C;
	//ReadABCNumbers(A, B, C);
	//PrintMaxNum(MaxOf3Numbers(A, B, C)); // # 13 # //

	/*int Num1, Num2;
	ReadNumberss(Num1, Num2);
	PrintNumberss(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumberss(Num1, Num2);*/ // # 14 # //

	float A, B;
	ReadNumbersss(A, B);
	PrintNumbersss(CalculateRectangleArea(A, B)); // # 15 # // 
	 
	return 0;
        

}