#include <iostream>
using namespace std;

void country(string name, float amount);

main() 
{
	string name;
	cout << "Enter the country's name: ";
	cin >> name;
	float amount;
	cout << "Enter the ticket price in dollars: $";
	cin >> amount;
	country(name, amount);
}
void country(string name, float amount)
{
	if(name == "Pakistan"){
	cout << "Final ticket price after discount: $";
	cout << amount-(amount*5/100);
}
	if(name == "Ireland"){
	cout << "Final ticket price after discount: $";
	cout << amount-(amount*10/100);
}
	if(name == "India"){
	cout << "Final ticket price after discount: $";
	cout << amount-(amount*20/100);
}
	if(name == "England"){
	cout << "Final ticket price after discount: $";
	cout << amount-(amount*30/100);
}
	if(name == "Canada"){
	cout << "Final ticket price after discount: $";
	cout << amount-(amount*45/100);
}

}