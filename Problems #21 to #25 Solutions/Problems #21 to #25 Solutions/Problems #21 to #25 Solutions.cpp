#include <iostream>
#include <string>
using namespace std;    // Problems #21 to #25 Solutions //

const float PI = 3.14159265359;

// ########################## # 21 # ########################## //
//  calculate circle area along the circumference, then print it on the screen //

float Readcircumference()
{
    float L;
    cout << "Please Enter circumference : " << endl;
    cin >> L;
    return L;
}

float CircleAreaByCircumference(float L)
{
    float Area = (pow(L, 2)) / (4 * PI);

    return Area;
}

void PrintResult(float Area)
{
    cout << "Circle Area By Circumference Is : " << Area << endl;

}

// ########################## # 22 # ########################## //
//  calculate circle area Inscribed in an Isosceles Triangle //

void ReadTringleData(float& a, float& b)
{
    cout << "Please Enter a Number : " << endl;
    cin >> a;

    cout << "Please Enter b Number : " << endl;
    cin >> b;

}

float CircleAreaByIsosceles(float a, float b)
{
    float Area = PI * ((pow(b, 2)) / 4) * ((2 * a - b) / (2 * a + b));

    return Area;
}

void PrintResultt(float Area)
{
    cout << "Circle Area By Isosceles Is : " << Area << endl;
}

// ########################## # 23 # ########################## //
//  calculate  circle area circle described around an arbitrary triangle //

void ReadTringlesData(float& A, float& B, float& C)
{
    cout << "Please Enter A Number : " << endl;
    cin >> A;

    cout << "Please Enter B Number : " << endl;
    cin >> B; 

    cout << "Please Enter C Number : " << endl; 
    cin >> C;

}

float CircleAreaByTringles(float A, float B, float C)
{
    float P;
    P = (A + B + C) / 2;

    float T;
    T = (A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C)));

    float Area = PI * pow(T, 2);

    return Area;
}

void PrintResulttt(float Area)
{
    cout << "Circle Area By Tringles Is : " << Area << endl;

}

// ########################## # 24 # ########################## //
//  If age is between 18 and 45 print “Valid Age” otherwise print “Invalid Age” //

int ReadAge()
{
    int Age;

    cout << "Please Enter Your Age Between (18 - 45) : " << endl;
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange(int Number , int From , int To)
{
    return (Number >= From && Number <= To);
}

void PrintResultttt(int Age)
{
    if (ValidateNumberInRange(Age, 18, 45))
        cout << Age << " Is a Valid Age \n";
    else
        cout << Age << " Is Invalid Age \n";
}

// ########################## # 25 # ########################## //
// Same problem 24 - Note: You should keep asking user to enter
//  a valid age until s / she enters it. //

int ReadAge2()
{
    int Age;

    cout << "Please Enter Your Age Between ( 18 - 45 ) : " << endl;
    cin >> Age;

    return Age;
}

bool ValidateNumberInRange2(int Number, int From, int To)
{
    return (Number >= From && Number <= To);
}

int ReadUntilAgeBetween(int From, int To)
{
    int Age = 0;

    do
    {
        Age = ReadAge2();

    } while (!ValidateNumberInRange2(Age, From, To));
    
    return Age;
}

void PrintResulttttt(int Age)
{
    cout << " \nYour Age Is : " << Age << endl;
}

int main()
{
    //PrintResult(CircleAreaByCircumference(Readcircumference())); // # 21 # //

    /*float a, b;
    ReadTringleData(a, b);
    PrintResultt(CircleAreaByIsosceles(a,b));*/ // # 22 # //

   /* float A, B, C;
    ReadTringlesData(A, B, C);
    PrintResulttt(CircleAreaByTringles(A, B, C));*/ // # 23 # // 

    //PrintResultttt(ReadAge()); // # 24 # //

    PrintResulttttt(ReadUntilAgeBetween(18, 45)); // # 25 # //

    return 0;
}