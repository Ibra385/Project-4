#include <iostream>

using namespace std;

class PetClass
{

public:

	string petName;
	string petBreed;
	string petOwner;
	int ownerPhoneNumber;

	//////////////////////////////////////////////////////////////////////////////////////////////////


	string const getpetName()
	{
		return petName;
	};

	void setpetName(string user_input)
	{
		petName = user_input;
	};

	void updatepetName()
	{
		string str_input;
		cout << getpetName() << endl;
		cin >> str_input;
		setpetName(str_input);
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////
	string const getpetBreed()
	{
		return petBreed;
	};

	void setpetBreed(string user_input)
	{
		petBreed = user_input;
	};

	void updatepetBreed()
	{
		string str_input;
		cout << getpetBreed() << endl;
		cin >> str_input;
		setpetBreed(str_input);
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////

	string const petOwner()
	{
		return petOwner;
	};

	void setpetOwner(string user_input)
	{
		petOwner = user_input;
	};

	void updatepetOwner()
	{
		string str_input;
		cout << getpetOwner() << endl;
		cin >> str_input;
		setpetOwner(str_input);
	};

	//////////////////////////////////////////////////////////////////////////////////////////////////
	void setPhoneNumbers(int user_input)
	{
		ownerPhoneNumber = user_input;
	};

	int getPhoneNumber()
	{
		return ownerPhoneNumber;
	};

	void updatePhoneNumber()
	{
		int user_input;
		cout << getPhoneNumber() << endl;
		cin >> user_input;
		setPhoneNumbers(user_input);
	};

	class ManagePetClass : PetClass
	{
	public:
		void managePet()
		{
			int choice;

			cout << "Enter (1) to update pet name\n"
				<< "Enter (2) to update pet breed\n"
				<< "Enter (3) to update pet owner\n"
				<< "Enter (4) to update owner's phone number\n"
				cin >> choice;
			switch (choice)
			{
			case 1:
			{
				updatepetName();
				break;
			}
			case 2:
			{
				updatepetBreed();
				break;
			}
			case 3:
			{
				updatepetOwner();
				break;
			}
			case 4:
			{
				updatePhoneNumber();
				break;
			}

			}
		};
	};
	//////////////////////////////////////////////////////////////////////////////////////////////////




	int main()
	{
		int choice;
		do
		{
			ManagePetClass stfCls;
			stfCls.managePet();
			cout << "Quit ? (0)" << endl;
			cin >> choice;
		} while (choice != 0);


		system("pause");
		return 0;
	}

