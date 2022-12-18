#include <iostream>

using namespace std;
double konver (double );
float konver (float );
int konver (int );

int main()
{
  cout << "----------------------------------------------------------" << endl;
  cout << "    |Program C++ Konversi Suhu Fahrenheit ke Celcius| " << endl;
  cout << "----------------------------------------------------------" << endl;
  cout << endl;


  cout <<  " 123,70 derajat Fahrenheit = " << konver (123.7) <<" derajat celcius";
  cout << endl;
  cout <<  " 134,7 derajat Fahrenheit = " << konver (134.7) <<" derajat celcius";
  cout << endl;
  cout << " 10 derajat Fahrenheit = " << konver (10) <<" derajat celcius";
  cout << endl;

  return 0;
}
double konver (double x){
    double y;
    y = (x- 32.0) * (5.0/9.0);
    return y;
}
float konver (float x){
    float y;
    y = (x- 32.0) * (5.0/9.0);
    return y;
}
int konver (int x){
    int y;
    y = (x- 32.0) * (5.0/9.0);
    return y;
}
