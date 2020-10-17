#include<iostream>
using namespace std;
void binary(int n)
{
	if(n>1)
	{
		binary(n/2);
	}
	cout<<n%2;	
}
int main()
{
	int dec;
	cout<<"Enter the number : ";
	cin>>dec;
	cout<<"The binary of "<<dec<< " is ";
	binary(dec);
}	
