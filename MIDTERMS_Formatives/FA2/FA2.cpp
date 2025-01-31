
#include <iostream>
#include <string>
using namespace std;

// Activity 2.1 Write a program that identifies the position of all even numbers in an array of 10 elements.
/*
int main()
{
    int COUNTER;
    int REMAINDER;
    int nums[10];

    cout << "Enter 10 numbers: ";
    for (COUNTER = 0; COUNTER < 10; COUNTER++) // To enter 10 values in each element
    {
        cin >> nums[COUNTER];
    }

    cout << "Your even numbers are at :";

    for (COUNTER = 0; COUNTER < 10; COUNTER++) // Determines if the elements are even or odd, one by one
    {
        if (nums[COUNTER] % 2 == 0)
        {
            cout << " " << COUNTER; //Determines the position of the even numbers
        }
    }

}*/

/* Activity 2.2 Write a program that will ask the user to enter the size of the array n < 100. Once the
array size is validated, it is required that the user will enter the elements of the array.
Finally, display the sorted array elements using any sorting algorithm from smallest to
greatest. */
/*
int main()
{
    int COUNTER;
    int ARRANGE_COUNTER; // Counter to compare the position of ARRANGE_COUNTER to COUNTER
    int ELEMENT_HOLDER; // A temporary storage to switch elements
    int size;

    cout << "Enter the size of array: ";
    cin >> size;

    if(size > 100) // Validates if size of the array is within 100
    {
        cout << "Array size is too large!";
        return 0;
    }

    int nums[size]; // Initialize the size of array from the user input

    cout << "Enter the elements" << endl;
    for (COUNTER = 0; COUNTER < size; ++COUNTER)
    {
        cout << COUNTER << " Element: ";
        cin >> nums[COUNTER];
    }

    for (COUNTER = 0; COUNTER < size; COUNTER++)
    {
        for (ARRANGE_COUNTER = COUNTER + 1; ARRANGE_COUNTER < size; ARRANGE_COUNTER++) // ARRANGE_COUNTER is ahead of COUNTER to compare the two elements
        {
            if (nums[COUNTER] > nums[ARRANGE_COUNTER]) // Swaps the elements between ARRANGE_COUNTER and COUNTER if the condition is met
            {
                ELEMENT_HOLDER = nums[COUNTER];
                nums[COUNTER] = nums[ARRANGE_COUNTER];
                nums[ARRANGE_COUNTER] = ELEMENT_HOLDER;
            }
        }
    }

    cout << "Your elements are sorted: "; // Shows result
    for (COUNTER = 0; COUNTER < size; COUNTER++)
    {
        cout << nums[COUNTER] << ", ";
    }

}*/

/* Activity 2.3 Write a program that counts the number of vowels and whitespaces in a string. The user’s
input should be all capital letters only. */

int main()
{
    int COUNTER, A = 0, E = 0, I = 0, O = 0, U = 0, W = 0;
    string userWord;

    cout << "Enter a sentence (in UPPERCASE): ";
    getline(cin, userWord);

    for (COUNTER = 0; COUNTER < userWord.length(); COUNTER++)
    {
        if (userWord[COUNTER] >= 97 && userWord[COUNTER] <= 122) // Validates if the sentences are all in capitals
            {
                cout << "Please write your sentence in UPPERCASE only.";
                return 0;
            }
    }

    char VOWELS[userWord.length()]; // Initializes array size via length of userWord
    strcpy(VOWELS, userWord.c_str()); // Converted the string to array

    for (COUNTER = 0; COUNTER < userWord.length(); COUNTER++)
    {
        if (VOWELS[COUNTER] == 'A') // Conditions where they tally the specified alphabet
            A++;
        else if (VOWELS[COUNTER] == 'E')
            E++;
        else if (VOWELS[COUNTER] == 'I')
            I++;
        else if (VOWELS[COUNTER] == 'O')
            O++;
        else if (VOWELS[COUNTER] == 'U')
            U++;
        else if (VOWELS[COUNTER] == ' ')
            W++;
    }

    cout << endl << "VOWELS:\nA\t" << A << endl
        << "E\t" << E << "\nI\t" << I << endl
        << "O\t" << O << "\nU\t" << U << endl
        << "Whitespaces:\t" << W;
}
