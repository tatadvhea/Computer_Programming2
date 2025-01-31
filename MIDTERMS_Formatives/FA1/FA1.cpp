
#include <iostream>
#include <math.h>
using namespace std;

/*Activity 1.1 User defined Functions
The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the
user to input two integer vales for the calculation*/
/*
// Operative Function
int add(int a, int b)
{
    return(a + b);
}

int subtract(int a, int b)
{
    return(a - b);
}

int multiply(int a, int b)
{
    return(a * b);
}

int divide(int a, int b)
{
    return(a / b);
}

int remainder(int a, int b)
{
    return(a % b);
}

// Function that invokes the Operative Function
int choice(int user, int a, int b)
{
    int choice;

    switch (user)
    {
    case 1:
    {
        choice = add(a, b); //Return value is stored to choice
        return choice;
    }

    case 2:
    {
        choice = subtract(a, b);
        return choice;
    }

    case 3:
    {
        choice = multiply(a, b);
        return choice;
    }
    case 4:
    {
        choice = divide(a, b);
        return choice;
    }
    case 5:
    {
        choice = remainder(a, b);
        return choice;
    }
    default: return 0;
    }

}

// Main Body
int main()
{
    int userChoice;
    int num1, num2, results;

    cout << "======================\n" << "\tMENU\n" << "======================\n\n"; // Interface
    cout << "1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n";

    cout << "Enter your choice: ";
    cin >> userChoice;

    if (userChoice == 0 || userChoice > 5) // Verifies if the value chosen is within the Menu
    {
        cout << "Invalid input. Please try again.";
        return 0;
    }

    cout << "Enter your two integers: ";
    cin >> num1 >> num2;

    results = choice(userChoice, num1, num2); //Function choice will store the number to variable result
    cout << "\nResults: " << results << endl; //Shows the number received from Function choice

    return 0;
}*/


/*ACTIVITY 1.2: User-defined Functions (Passing by value)
Create a program with a user-defined function that compute the area of the following polygons
and circle. You are to create one user-defined function for every computation. The functions
must accept parameters by reference.
• Area of square given the side.
• Area of rectangle given the length and width.
• Area of triangle given the base and height.
• Area of circle given the radius.*/

// Operative Functions
float square(float& Side) //Uses & to link Side and num1
{
    return Side = pow(Side, 2); // The value will be stored to Side to modify the value in num1
}

float rectangle(float& Length, float& Width)
{
    return Length = (Length * Width);
}

float triangle(float& Height, float& Base)
{
    return Height = (Height * Base) / 2;
}

float circle(float& Radius)
{
    return Radius = pow(Radius, 2) * 3.14;
}

// Menu Function that invokes the Operative Functions
void Menu()
{
    if (userChoice == 0 || userChoice > 5) // Verifies if the value chosen is within the Menu
    {
        cout << "Invalid input.\n";
        return 0;
    }

    system("cls");

    switch (userChoice) //Invokes the Operative Functions to execute the chosen operation
    {

    case 1:
    {
        cout << "======================\n" << "AREA OF SQUARE\n" << "======================\n\n"; // Square Interface

        cout << "Enter the side length: ";
        cin >> num1;

        square(num1);

        break;
    }

    case 2:
    {
        cout << "======================\n" << "AREA OF RECTANGLE\n" << "======================\n\n"; // Rectangle Interface

        cout << "Enter the length and width: ";
        cin >> num1 >> num2;

        rectangle(num1, num2);

        break;
    }

    case 3:
    {
        cout << "======================\n" << "AREA OF TRIANGLE\n" << "======================\n\n"; // Triangle Interface

        cout << "Enter the height and base: ";
        cin >> num1 >> num2;

        triangle(num1, num2);

        break;
    }

    case 4:
    {
        cout << "======================\n" << "AREA OF CIRCLE\n" << "======================\n\n"; // Circle Interface

        cout << "Enter the radius: ";
        cin >> num1;

        circle(num1);

        break;
    }

    case 5:
        cout << "Closing...\n";
        return 0;

    default: cout << "Please enter a valid input.";

    }
}

// Main Body
int main()
{
    int userChoice;
    float num1, num2;

    do // The system will continue until user chooses to exit
    {
        cout << "======================\n" << "\tMENU\n" << "======================\n\n"; // Interface
        cout << "1. Area of Square\n2. Area of Rectangle\n3. Area of Triangle\n4. Area of Circle\n5. Exit\n";

        cout << "Enter your choice: ";
        cin >> userChoice;

        cout << "Result: " << num1 << endl; // Shows the modified value of num1 from Side
        system("pause");
        system("cls");

    } while (userChoice != 5);

    return 0;
}
