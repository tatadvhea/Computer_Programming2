// F7-File Handling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

struct Player {
    string userName;
    int age;
    double scores[5];
};

struct Node {
    Player player;
    Node* next;
};

Node* head = nullptr;

void addRecord()
{
    Player player;

    cout << endl << "Enter player's name: \n";
    cin >> player.userName;
    cout << "\nEnter player's age: \n";
    cin >> player.age;
    cout << "\nEnter your two best played scores: \nFirst score: ";
    cin >> player.scores[0];
    cout << "Second score: ";
    cin >> player.scores[1];

    Node* newNode = new Node;
    newNode->player = player;
    newNode->next = head;
    head = newNode;

    cout << "\nAdded successfully!\n";
}

void viewRecords()
{
    if (head == NULL)
    {
        cout << "No records found.\n";
    }

    Node* current = head;
    while (current != nullptr)
    {
        cout << "Name: " << current->player.userName << endl
            << "Age: " << current->player.age << endl
            << "Scores: ";

        for (int i = 0; i < 2; ++i)
        {
            cout << current->player.scores[i] << ", ";
        }
        cout << endl << "----------------------------------" << endl;
        current = current->next;
    }
}

void computeAverage()
{
    Node* current = head;
    while (current != nullptr)
    {
        double sum = 0;
        for (int i = 0; i < 5; ++i)
        {
            sum += current->player.scores[i];
        }
        double average = sum / 2.0;

        cout << "Name: " << current->player.userName << endl
            << "Average Score: " << average << endl
            << "----------------------------------" << endl;
        current = current->next;
    }
}

void showMaxAverage()
{
    Node* current = head;
    double maxAverage = -1; //Initialize to a non-valid value
    while (current != nullptr)
    {
        double sum = 0;

        for (int i = 0; i < 5; ++i)
        {
            sum += current->player.scores[i];
        }
        double average = sum / 2.0;

        if (average > maxAverage)
        {
            maxAverage = average;
        }
        current = current->next;
    }
    // Iterates to display players with the max average
    current = head;

    while (current != nullptr)
    {
        double sum = 0;

        for (int i = 0 ; i < 5; ++i)
        {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0;
        
        if (average == maxAverage)
        {
            cout << "Name: " << current->player.userName << endl
                << "Average Score: " << average << endl
                << "----------------------------------" << endl;
        }
        current = current->next;
    }
}

void showMinAverage()
{
    Node* current = head;
    double minAverage = 100; //Initializes to a value higher than the possible average
    while (current != nullptr)
    {
        double sum = 0;

        for (int i = 0; i < 5; ++i)
        {
            sum += current->player.scores[i];
        }
        double average = sum / 2.0;

        if (average < minAverage)
        {
            minAverage = average;
        }
        current = current->next;
    }

    // Reiterates to display players with the min average
    current = head;

    while (current != nullptr)
    {
        double sum = 0;

        for (int i = 0; i < 5; ++i)
        {
            sum += current->player.scores[i];
        }
        double average = sum / 5.0;

        if (average == minAverage)
        {
            cout << "Name: " << current->player.userName << endl
                << "Average Score: " << average << endl
                << "----------------------------------" << endl;
        }
        current = current->next;
    }
}

void openFile()
{
    ofstream outFile("player_records.txt");

    Node* current = head;

    while (current != nullptr)
    {
        outFile << current->player.userName << endl
               << current->player.age << endl;

        for (int i = 0; i < 5; ++i)
        {
            outFile << current->player.scores[i] << " ";
        }
        outFile << endl;
        current = current->next;
    }
    outFile.close();

    cout << "Records saved to 'player_records.txt." << endl;
}

void closeFile()
{
    cout << "File closed." << endl;
}

int main()
{
    int userChoice;

    do
    {
        cout << "====================================\n"
            << "\t\tMENU\n"
            << "====================================\n\n";
        cout << "1. Add record\n2. View players records\n3. Compute for the average\n4. Show the player(s) who gets the max average.\n5. Show the player(s) who gets the min average."
            << "6. Open the file.\n7. Close the File\n8. Exit\n\nEnter value: ";

        cin >> userChoice;

        system("cls");

        switch (userChoice)
        {
        case 1:
        {
            addRecord();
            system("pause");
            system("cls");
            break;
        }

        case 2:
        {
            viewRecords();
            system("pause");
            system("cls");
            break;
        }

        case 3:
        {
            computeAverage();
            system("pause");
            system("cls");
            break;
        }

        case 4:
        {
            showMaxAverage();
            system("pause");
            system("cls");
            break;
        }

        case 5:
        {
            showMinAverage();
            system("pause");
            system("cls");
            break;
        }

        case 6:
        {
            openFile();
            system("pause");
            system("cls");
            break;
        }

        case 7:
        {
            closeFile();
            system("pause");
            system("cls");
            break;
        }

        case 8:
        {
            return 0;
        }

        }
    } while (userChoice != 8);
    
}

