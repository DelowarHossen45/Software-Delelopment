#include<bits/std.c++>
using namespace std;
void subtraction()
{
    double Num1,Num2,result;
    cout<<"Enter two number for subtraction: ";
    cin>>Num1>>Num2;
    result=Num1-num2;
    cout<<"This is output: "<<result<<endl;
}
int modulus(int a,int b)
{
    a=a%b;
}
int main()
{
	int a,b;
    cin>>a>>b;
    modulus(a,b);
  subtraction();
    return 0;
}
