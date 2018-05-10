#include<bits/stdc++.h>
using namespace std;
void add();
void division();
void subtraction();
int modulu(int divisisible,int divisior);
void add()
{   
    int Num1,Num2,result;
    cout<<"Enter two value for add:";
    cin>>Num1>>Num2;
    cout<<"The Sum of "<<Num1 <<"  & "<<Num2<<" is "<<Num1+Num2<<endl;
	
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
    result=Num1-Num2;
    cout<<"This is output: "<<result<<endl;
}

void modulu()
{
    int divisisible,divisior;
    cout<<"Enter two value for modulus: ";
    cin>>divisisible>>divisior;
    divisisible= divisisible%divisior;
    cout<<"This is output:"<<divisisible<<endl;
 
}
int main()
{
   
    modulu();
    add();
    subtraction();
    division();
    multiplication();
return 0;
}
