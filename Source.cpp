#include<iostream>
#include<string>
using namespace std;
string longBurb(int num)
{
	string word = "Bu";
	for (int i = 0;i < num;i++)
		word += "r";
	word += "p";
	return word;
}
int main()
{
	cout << endl << longBurb(5) << endl;
	return 0;
	system("pause");
}