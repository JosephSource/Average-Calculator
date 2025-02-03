#include <iostream>
using namespace std;

int main()
{
	int Math;
	int Biology;
	int Chemistry;
	int Physics;
	int English; // Add as many subjects as you want //

	cout << "Enter your Math average: ";
	cin >> Math;

	cout << "Enter your Biology average: ";
	cin >> Biology;

	cout << "Enter your Chemistry average: ";
	cin >> Chemistry;

	cout << "Enter your Physics average: ";
	cin >> Physics;

	cout << "Enter your English average: ";
	cin >> English;

	double Average = (Math + Biology + Chemistry + Physics + English) / 5;// If you add more subject change the 5 to the number of subjects you have //

	cout << "Your average is: " << Average << ", Good job!";
}