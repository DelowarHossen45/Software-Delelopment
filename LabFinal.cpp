#include<bits/stdc++.h>
using namespace std;
void add();
void division();
void subtraction();
int modulus(int divisisible,int divisior);
void add()
{   
    int a,b;
     cin>>a>>b;
	 cout<<"The Sum of "<<a <<"  & "<<b<<" is "<<a+b<<endl;
	
}
void multiplication()
{
    double veri1,veri2;
    cout<<endl<<"Enter Two veriable for Multiplication:";
    cin>>veri1>>veri2;
    cout<<endl<<"Multiplication of "<<veri1<<" and "<<veri2<<" is = "<<veri1*veri2;
}
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
    division();
    multiplication();
return 0;
}