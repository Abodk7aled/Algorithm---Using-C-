#include <iostream>
#include <string>
using namespace std;    // Problems #16 to #20 Solutions //

const float PI = 3.14;

// ###################### Problem_16 ###################### //
// calculate rectangle area through diagonal and side area of rectangle //

void ReadNumbers(float& A, float& B)
{
	cout << "Please Enter Number A : " << endl;
	cin >> A;

	cout << "Please Enter Number B : " << endl;
	cin >> B;
}

float RectangleAreaBySideAndDigagonal(float A, float B)
{
	float Area = A * sqrt(pow(B, 2) - pow(A, 2));
	
	return Area;
}

void PrintResult(float Area)
{
	cout << "\nRectangle Area = " << Area << endl;
}

// ###################### Problem_17 ###################### //
// calculate triangle area then print it on the screen //

void ReadNumberss(float& a, float& h)
{
	cout << "Please Enter The Height (a) : " << endl;
	cin >> a;

	cout << "Please Enter The Base (h) : " << endl;
	cin >> h;
}

float TriangleArea(float a, float h)
{
	float Area = (a * h) / 2;

	return Area;
}

void PrintResults(float Area)
{
	cout << "\nTrangle Area = " << Area << endl;
}

// ###################### Problem_18 ###################### //
//  calculate circle area then print it on the screen. //

float ReadRadius()
{
	float r;
	cout << "Please Enter Radius (r) : " << endl;
	cin >> r;

	return r;

}

float CircleArea(float r)
{
	//const float PI = 3.14;
	float Area = PI * pow(r, 2);

	return Area;
}

void PrintResultss(float Area)
{
	cout << "\nCircle Area = " << Area << endl;
}

// ###################### Problem_19 ###################### //
// calculate circle area through diameter, then print it on the screen. //

float ReadDiameter()
{
	float D;
	cout << "PLease Enter Diamter (D) : " << endl;
	cin >> D;

	return D;
}

float CircleAreaByDiameter(float D)
{
	float Area = (PI * pow(D, 2)) / 4;

	return Area;
}

void PrintResultsss(float Area)
{
	cout << "\nCircle Area Through Diameter = " << Area << endl;
}

// ###################### Problem_20 ###################### //
// calculate Circle area inscribed in a square, then print it on the screen //

float ReadSquareSide()
{
	float A;
	cout << "Please Enter Square Said (A) : " << endl;
	cin >> A;

	return A;
}

float CircleAreaInscribedInSquare(float A)
{
	float Area = (PI * pow(A, 2)) / 4;

	return Area;
}

void PrintResultssss(float Area)
{
	cout << "\nCircle Area Inscribed In a Square = " << Area << endl;
}


int main()
{
	/*float A, B;
	ReadNumbers(A, B);
	PrintResult(RectangleAreaBySideAndDigagonal(A, B)); */ // # 16 # //

	//float a, h;
	//ReadNumberss(a, h);
	//PrintResults(TriangleArea(a, h)); // # 17 # //

	//PrintResultss(CircleArea(ReadRadius())); // # 18 # //

	//PrintResultsss(CircleAreaByDiameter(ReadDiameter())); // # 19 # //
	
	PrintResultssss(CircleAreaInscribedInSquare(ReadSquareSide())); // # 20 # //

	return 0;


}