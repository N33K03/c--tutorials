#include <iostream>
using namespace std;
int main() {

	const double StateTaxRate = 0.04;
	const double CountyTaxRate = 0.02;

	double Sales = 95000;
	double StateTax = Sales * StateTaxRate;
	double CountyTax = Sales * CountyTaxRate;
	double TotalTax = StateTax + CountyTax;
	
	cout << "Sales: $" << Sales << endl
		<< "StateTax: $" << StateTax << endl
		<< "CountyTax: $" << CountyTax << endl
		<< "Total Tax: $" << TotalTax;


	return 0;
}