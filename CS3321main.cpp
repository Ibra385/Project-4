#include <iostream>
using namespace std;

void mainMenu()
{
	cout << "*********** Pet Daycare Main Menu ***********" << endl;
	cout << "1- Manage staff" << endl;
	cout << "2- Manage customer" << endl;
	cout << "3- Manage pet" << endl;
	cout << "4- Manage services" << endl;
	cout << "5- Pet report" << endl;
	cout << "6- Service sales report" << endl;
	cout << "7- Exit" << endl;
	cout << "********************************************" << endl;


}

void manageStaff()
{
	cout << "1- add staff" << endl;
	cout << "2- update staff ID#" << endl;
	cout << "3- update staff name" << endl;
	cout << "4- update staff position" << endl;



}

void manageCustomer() {
	cout << "1- add customer" << endl;
	cout << "2- edit customer" << endl;

}

void managePet() {
	cout << "1- add pet" << endl;
	cout << "2- edit pet" << endl;

}
void manageServices() {

}


int main()
{
	int option;

	do {
		mainMenu();
		cout << "Choose menu option: " << endl;
		cin >> option;
		system("cls");

		switch (option) {
		case 1: manageStaff();
			int manageStaffOp;
			cout << "Choose menu option: " << endl;
			cin >> manageStaffOp;
			if (manageStaffOp = 1) {
				int staffID;
				string staffName, staffPosition;

				cout << "assign staff ID#:" << endl;
				cin >> staffID;
				cout << "assign staff name:" << endl;
				cin >> staffName;
				cout << "assign staff position:" << endl;
				cin >> staffPosition;

				cout << "Staff added!" << endl << "new staff information:" << endl << "staff ID#:" << staffID << endl;
				cout << "staff name: " << staffName << endl;
				cout << "staff postion:" << staffPosition << endl;


			}

			break;

		case 2: manageCustomer();
			break;

		case 3: managePet();
			break;

		case 4: manageServices();
			break;

		case 5:
			break;

		case 6:
			break;
		}
	} while (option != 7);
	return 0;
}