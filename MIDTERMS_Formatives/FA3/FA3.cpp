#include <iostream>
#include <cstring>
using namespace std;

// Activity 3.1 Create a program that will compare two input strings using strcmp( ).
/*
int main()
{
    char firstWord[20];
    char secWord[20];

    cout << "******************************\n"
         << "\tSTRING COMPARE\n"
         << "******************************\n\n"

         << "Enter first word: ";
    cin >> firstWord;

    cout << "Enter second word: ";
    cin >> secWord;


    cout << endl << "Compare: "; // Shows the result

    // Comparison Function
    if (strcmp(firstWord, secWord) == -1) //If firstWord is bigger than secWord
        cout << firstWord << " > " << secWord;
    else if (strcmp(firstWord, secWord) == 1) //If secWord is bigger than firstWord
        cout << firstWord << " < " << secWord;
    else                                        //If none of the above, both variables are equal
        cout << firstWord << " = " << secWord;
} */

// Activity 3.2 Create a program that will copy a string from one variable to another using strcpy( ).
/*
int main()
{
    char firstWord[50];
    char secWord[50];

    cout << "***************************\n"
        << "\tSTRING COPY\n"
        << "***************************\n\n"

        << "Enter first word: ";
    cin.getline(firstWord,50);

    cout << "Enter second word: ";
    cin.getline(secWord,50);

    strcpy_s(firstWord, secWord); // Copies secWord's data then transfers to firstWord

    cout << endl << "First word's new value is: " << firstWord; // Shows the result
}*/

// Activity 3.3 Create a program that will concatenate two strings.
/*
int main()
{
    char firstWord[50];
    char secWord[50];

    cout << "************************************\n"
        << "\tSTRING CONCATENATION\n"
        << "************************************\n\n"
        << "Enter first word: ";
    cin.getline(firstWord, 50);

    cout << "Enter second word: ";
    cin.getline(secWord, 50);

    strcat_s(firstWord, secWord); // Combines secWord to the last value of firstWord

    cout << endl << "First word's new value is: " << firstWord; // Shows the result
}*/

/* Activity 3.4 Create a program that will concatenate two strings. Convert a program that 
will determine if the given word input is a palindrome using C - String functions.*/
/*
int main()
{
    char USERCOMPARE[50];
    char userWord[50];

    cout << "**************************\n"
        << "\tPALINDROME\n"
        << "**************************\n\n"
        << "Enter a word (in lowercase): ";
    cin.getline(userWord, 50);

     strcpy_s(USERCOMPARE, userWord); // Copies userWord to USERCOMPARE
    _strrev(USERCOMPARE); // The value from USERCOMPARE is reversed

    cout << userWord;

    if (strcmp(userWord, USERCOMPARE) == 0) // Determines if both variables have equal data
        cout << " is a PALINDROME";
    else
        cout << " is not a PALINDROME";
}*/

// Activity 3.5 Create a program that will accept an input string. Display the same string in all capital form.
/*
int main()
{
    int COUNTER;
    char userWord[200];

    cout << "********************************\n"
        << "\tSTRING UPPERCASE\n"
        << "********************************\n\n"
        << "Enter a word/sentence: ";
    cin.getline(userWord, 200);

    userWord[0] = toupper(userWord[0]); // Capitalizes the first letter

    for (COUNTER = 1; COUNTER < strlen(userWord); COUNTER++) 
    {
        userWord[COUNTER] = tolower(userWord[COUNTER]); // Lowercases the rest of the letters to ensure proper formatting

        if (userWord[COUNTER] == 32) // Checks to know if character is a whitespace (ASCII = 32)
        {
            ++COUNTER; // Proceeds to the next letter
            userWord[COUNTER] = toupper(userWord[COUNTER]); //Capitalizes the letter which is after the whitespace
        }
    }

    cout << "Converted to: " << userWord; // Shows results;
}*/

/* Activity 3.6 Create a program that will ask the user to enter some string. 
The program will split the string in to word and display in reverse vertical order. */

int main()
{
    int COUNTER;
    char userWord[100];

    cout << "********************************\n"
        << "\tSTRINGS TO WORDS\n"
        << "********************************\n\n"
        << "Enter words/sentence: ";
    cin.getline(userWord, 100);

    cout << endl;

    for (COUNTER = strlen(userWord)-1; COUNTER >= 0; COUNTER--) // Reverses the code to the opposite direction
    {
        cout << userWord[COUNTER];

        if (userWord[COUNTER] == 32) // Signifies every space is a new word so it enters a new line
        {
            cout << endl;
        }
    }
}
