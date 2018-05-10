#include<bits/stdc++.h>
using namespace std;
void division();
void subtraction();
int modulus(int divisisible,int divisior);
void division()
{
    double number_1,number_2,result;
    cout<<"Enter two numbers for division:";
    cin>>number_1>>number_2;
    result=number_1/number_2;
    cout<<"Division of "<<number_1<<" and "<<number_2<<" is "<<result<<endl;
}
void subtraction()
{
    double Num1,Num2,result;
    cout<<"Enter two number for subtraction: ";
    cin>>Num1>>Num2;
    result=Num1-num2;
    cout<<"This is output: "<<result<<endl;
}
int modulus(int divisisible,int divisior)
{
     divisisible= divisisible%divisior;
     return divisisible;
}
int main()
{
	int a,b;
    cin>>a>>b;
    modulus(a,b);
    subtraction();
return 0;
}
