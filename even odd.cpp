#include <iostream>
using namespace std;
enum _boolean
{
  false,true
};
enum boolean iseven(int x)
{
	if(x%2==0)
	return(true);
	else
	return(false);
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char** argv) {
	int n;
	cout<<"enter a number"<<endl;
	cin>>n;
	enum boolean result;
	result=ineven(n);
	if(result==true)
	cout<<"even number";
	else
	cout<<"odd number";
	
	
}
