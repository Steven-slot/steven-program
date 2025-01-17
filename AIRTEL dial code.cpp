
#include <iostream>
using namespace std;
void request() {
	int number,press,pick,choose;
	cout << "enter the dial code to see airtel offers" << endl;
	cin >> number;
	if (number == 117) {
		cout << " 1. ikali-Data and voice" << endl;
		cout << " 2. Airtel Soche pack" << endl;
		cout << " 3. All networks Soche " << endl;
		cout << " 4. Data pack" << endl;
		cout << " 5. Buy for others" << endl;
		cout << " 6. Balance check" << endl;
		cout << " 7. siliza-Airtel Loan" << endl;
	}
	cout << "chose which offer do you want" << endl;
	cin >> press;
	if (press == 1) {
		cout << " 1. k2=9 All networks Min,24Hrs" << endl;
		cout << " 2. k2=9 Airtel min,24Hrs" << endl;
		cout << " 3. k5=26 Airtel Min,7days" << endl;
		cout << " 4. k3=180MB, 24hrs" << endl;
		cout << " 5. k6=450MB,7Days" << endl;

	};
	
	if (press == 2) {
		cout << "1. for 24hours Daily pack" << endl;
		cout << "2. for Weekly Pack" << endl;
		cout << " 3. for Monthly pack" << endl;
		cout << "4. Buy for other" << endl;
	}

}

int main()
{
	int selection;
	request();
	switch (selection)
	{
	case 1:
		cout << "mobile money" << endl;
	default:
		break;
	case 2:
		cout << " airtel money" << endl;
	}
}
