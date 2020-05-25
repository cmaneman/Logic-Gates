//Logic Gates in C++ (For Fun)

//Still Working on it
#include<iostream>

using namespace std;

int AND_GATE(int, int, int);
int OR_GATE(int, int, int);
int NOT_GATE(int, int, int);
int NAND_GATE(int, int, int);
int NOR_GATE(int, int, int);
int XOR_GATE(int, int, int);
int XNOR_GATE(int, int, int);

int main()
{
	int x_input;
	int y_input;
	int z_output;
	char gateChoice;
	char again;

	do
	{
	//Greet the user and ask them to input either 1 or 0...
	//Input 1 or 0 for x
	cin >> x_input;
	//Input 1 or 0 for y
	cin >> y_input;
	cin >> gateChoice;
	toupper(gateChoice);
	//Reiterate the variables
	
		switch (gateChoice)
		{
		case 'A': //AND GATE
			//z_output = AND_GATE(x_input, y_input, z_output);
			break;
		case 'B': //OR GATE
			//z_output = OR_GATE(x_input, y_input, z_output);
			break;
		case 'C': //NOT GATE
			//z_output = NOT_GATE(x_input, y_input, z_output);
			break;
		case 'D': //NAND GATE
			//z_output = NAND_GATE(x_input, y_input, z_output);
			break;
		case 'E': //NOR GATE
			//z_output = NOR_GATE(x_input, y_input, z_output);
			break;
		case 'F': //XOR GATE
			//z_output = XOR_GATE(x_input, y_input, z_output);
			break;
		case 'G': //XNOR GATE
			//z_output = XNOR_GATE(x_input, y_input, z_output);
			break;
		default:
			cout << "The option you have entered is not valid. Try again with these options: 'A', 'B', 'C', 'D', 'E', 'F', 'G' " << endl << endl;
			break;
		}
		cout << "Action Complete!!! Want to try this process again?\nY or N >>";
		cin >> again;
		toupper(again);
		cout << endl;


	} while (again != 'N');

	return 0;
}
int AND_GATE(int X_in, int Y_int, int Z_out)
{
	return 0;
}

int OR_GATE(int X_in, int Y_int, int Z_out)
{
	return 0;
}

int NOT_GATE(int X_in, int Y_int, int Z_out)
{
	return 0;
}

int NAND_GATE(int X_in, int Y_int, int Z_out)
{
	return 0;
}

int NOR_GATE(int X_in, int Y_int, int Z_out)
{
	return 0;
}

int XOR_GATE(int X_in, int Y_int, int Z_out)
{
	return 0;
}

int XNOR_GATE(int X_in, int Y_int, int Z_out)
{
	return 0;
}