//Logic Gates in C++ (For Fun)

//Still Working on it
#include<iostream>

using namespace std;

int AND_GATE(int, int, int, string);
int OR_GATE(int, int, int, string);
int NOT_GATE(int&, int&, int&, string);
int NAND_GATE(int, int, int, string);
int NOR_GATE(int, int, int, string);
int XOR_GATE(int, int, int, string);
int XNOR_GATE(int, int, int, string);

int main()
{
	int x_input;
	int y_input;
	int z_output = NULL;
	string gateName = "";
	char gateChoice;
	char again;

	do
	{
	cout << "Hello!!! Type in 1 or 0.\n";//Greet the user and ask them to input either 1 or 0...
	//Input 1 or 0 for x
	cin >> x_input;
	cout << endl;
	//Input 1 or 0 for y
	cout << "Now please type in 1 or 0 again.\n";
	cin >> y_input;
	cout << endl;
	cout << "Now choice a letter from A to G...\n";
	cin >> gateChoice;
	gateChoice = toupper(gateChoice);
	cout << endl;
	//Reiterate the variables
	
		switch (gateChoice)
		{
		case 'A': //AND GATE
			gateName = "AND-GATE";
			z_output = AND_GATE(x_input, y_input, z_output, gateName);
			break;
		case 'B': //OR GATE
			gateName = "OR-GATE";
			//z_output = OR_GATE(x_input, y_input, z_output, gateName);
			break;
		case 'C': //NOT GATE
			gateName = "NOT-GATE";
			//z_output = NOT_GATE(x_input, y_input, z_output, gateName);
			break;
		case 'D': //NAND GATE
			//z_output = NAND_GATE(x_input, y_input, z_output, gateName);
			gateName = "NAND-GATE";
			break;
		case 'E': //NOR GATE
			gateName = "NOR-GATE";
			//z_output = NOR_GATE(x_input, y_input, z_output, gateName);
			break;
		case 'F': //XOR GATE
			gateName = "XOR-GATE";
			//z_output = XOR_GATE(x_input, y_input, z_output, gateName);
			break;
		case 'G': //XNOR GATE
			gateName = "XNOR-GATE";
			//z_output = XNOR_GATE(x_input, y_input, z_output, gateName);
			break;
		default:
			cout << "The option you have entered is not valid. Try again with these options: 'A', 'B', 'C', 'D', 'E', 'F', 'G' " << endl << endl;
			break;
		}
		cout << "Do you want to try this process again?\nY or N >>";
		cin >> again;
		again = toupper(again);
		cout << endl;

	} while (again != 'N');

	return 0;
}
//If, else if, and else statements will be used to determine the outputs...
//I may use a time delay to create a bit of a pause between section of the code...
int AND_GATE(int X_in, int Y_in, int Z_out, string gateN)
{
	if (X_in == 1 && Y_in == 1)
	{

		Z_out = 1;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is true for this gate.\n\n";
	}
	else if(X_in == 0 && Y_in == 0)
	{
		Z_out = 0;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is false for this gate.\n\n";
	}
	else
	{
		Z_out = 0;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is false for this gate.\n\n";
	}
		
	cout <<endl<<endl;
	cout << "\t   ____	\n";
	cout <<"\t"<<X_in<<"-|     )	\n";
	cout << "\t  | AND  )-"<<Z_out<<endl;
	cout <<"\t"<<Y_in<<"-|____ )";
	cout << endl << endl;
	/*____
	-|     )
	 |  AND )-
	-|____ )
	*/

	return X_in, Y_in, Z_out;
}

int OR_GATE(int X_in, int Y_in, int Z_out, string gateN)
{
	if (X_in == 1 && Y_in == 1)
	{
		Z_out = 1;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is true for this gate.\n\n";
	}
	else if (X_in != Y_in)
	{
		Z_out = 1;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is true  for this gate.\n\n";
	}
	else
	{
		Z_out = 0;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is false for this gate.\n\n";
	}
	//Make image of logic gate
	return X_in, Y_in, Z_out;
}

int NOT_GATE(int& X_in, int& Y_in, int& Z_out, string gateN)
{
	if (X_in == 0)
	{
		cout << "\nNow using the " << gateN << " and your X value: " << X_in << ", you input was reversed.\n";
		X_in == 1;
		cout << "Your X value is now: " << X_in << ".\n\n";
	}

	if (Y_in == 0)
	{
		cout << "\nNow using the " << gateN << " and your Y value: " << Y_in << ", you input was reversed.\n";
		Y_in == 1;
		cout << "Your Y value is now: "<<Y_in<<".\n\n";
	}
	/*
		 | \
		-|(NOT)7o-
		 | /
	*/
	//Make image of logic gate
	return X_in, Y_in;
}

int NAND_GATE(int X_in, int Y_in, int Z_out, string gateN)
{
	if (X_in == 1 && Y_in == 1)
	{
		Z_out = 0;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is false for this gate.\n\n";
	}
	else
	{
		Z_out = 1;
		cout << "\nNow using the " << gateN << " and the X and Y values: " << X_in << " and " << Y_in << ", the output will be: " << Z_out << " which is true for this gate.\n\n";
	}

	cout << endl << endl;
	cout << "\t   ____	\n";
	cout << "\t" << X_in << "-|     )	\n";
	cout << "\t  | NAND  )o-" << Z_out << endl;
	cout << "\t" << Y_in << "-|____ )";
	cout << endl << endl;
	
	/*____
	-|     )
	 | NAND )o-
	-|____ )
	*/

	return X_in, Y_in, Z_out;
}

int NOR_GATE(int X_in, int Y_in, int Z_out, string gateN)
{
	cout << "\nNow using the " << gateN << " and the two inputs" << X_in << " and " << Y_in << ", the output will be: "<< Z_out <<".\n\n";
	//Make image of logic gate
	return X_in, Y_in, Z_out;
}

int XOR_GATE(int X_in, int Y_in, int Z_out, string gateN)
{
	cout << "\nNow using the " << gateN << " and the two inputs" << X_in << " and " << Y_in << ", the output will be: "<< Z_out <<".\n\n";
	//Make image of logic gate
	return X_in, Y_in, Z_out;
}

int XNOR_GATE(int X_in, int Y_in, int Z_out, string gateN)
{
	cout << "\nNow using the " << gateN << " and the two inputs" << X_in << " and " << Y_in << ", the output will be: "<< Z_out <<".\n\n";
	//Make image of logic gate
	return X_in, Y_in, Z_out;
}