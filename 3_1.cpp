#include <iostream>
int main()
{
	using namespace std;
	char n;
	cout<<"Bigger and Smaller"<<endl;
	cin>>n;
	if('A'<=n&&n<='Z')
		n=n+32;
	else if('a'<=n&&n<='z')
		n=n-32;
	cout<<n;
}
