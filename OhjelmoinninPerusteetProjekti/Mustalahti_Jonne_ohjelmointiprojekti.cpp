// OhjelmoinninPerusteetProjekti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <clocale>
using namespace std;

void Teht1();
void Teht2();
void Teht3();
void Teht4();
void Teht5();

//Ohjelma alkaa aina main-funktiosta:
void main()
{
    //Funktiokutsut (function calls):
    setlocale(LC_ALL, "fi_FI.UTF-8");
    cout << "My Program v0.1\n" << endl;
    //Teht1();
    //Teht2();
    //Teht3();
    Teht4();
    //Teht5();
}

//Funktion määrittelyt eli toteutukset (definition): Viikkotehtävä 1
void Teht1() {
    string Name;
    int Age, StudentNumber;
    float Height, Weight;

    cout << "What is your Name? ";
        cin >> Name;
        cout << "How old are you? ";
        cin >> Age;
        cout << "What is your student number? ";
        cin >> StudentNumber;
        cout << "How tall are you? ";
        cin >> Height;
        cout << "How much do you weight? ";
        cin >> Weight;
        cout << endl << "Your informations are: " << endl << "Name: " << Name << endl << "Age: " << Age << endl << "Student Number: " << StudentNumber << endl << "Height: " << Height << endl << "Weight: " << Weight << endl;
}

void Teht2() {
    int Frequency;
    float Welfare, WelfareAmount;

    cout << "How many months of the year do you receive financial aid? ";
    cin >> Frequency;
    cout << "How much money do you receive in financial aid per month? ";
    cin >> Welfare;
    WelfareAmount = Frequency * Welfare;
    cout << "You receive " << WelfareAmount << " EUR in financial aid per year.";
}

void Teht3() {
    float ExamScore;

    cout << "How many points did you get from the exam? " << endl;
    cin >> ExamScore;

    if (ExamScore > 0 && ExamScore < 50)
    {
        cout << "Your grade is 0. " << endl;
    }
    else if (ExamScore >= 50 && ExamScore < 60)
    {
        cout << "Your grade is 1. " << endl;
    }
    else if (ExamScore >= 60 && ExamScore < 70)
    {
        cout << "Your grade is 2. " << endl;
    }
    else if (ExamScore >= 70 && ExamScore < 80)
    {
        cout << "Your grade is 3. " << endl;
    }
    else if (ExamScore >= 80 && ExamScore < 90)
    {
        cout << "Your grade is 4. " << endl;
    }
    else if (ExamScore >= 90 && ExamScore < 100)
    {
        cout << "Your grade is 5. " << endl;
    }
    else if (ExamScore == 100)
    {
        cout << "Your graade is 5. You also got the perfect score! " << endl;
    }
    else {
        cout << "Your score does not match the amount in the exam, please tell your score on a scale 0-100. " << endl;
    } 
    float Distance;
    char Miles = 'M';
    char NauticalMiles = 'N';
    char Quit = 'Q';
    char Selection;

    cout << "Give your travel distance in kilometers. " << endl;
    cin >> Distance;
    cout << "-----------------------" << endl << "Write M to convert to miles. " << endl << "Write N to convert to nautical miles. " << endl << "Write Q to quit. " << endl;
    cin >> Selection;

    if (Selection == 'M' || Selection == 'm')
    {
        cout << "Distance in miles: " << Distance * 0.6214 << " miles" << endl;
    }
    else if (Selection == 'N' || Selection == 'n')
    {
        cout << "Distance in nautical miles: " << Distance * 0.539956803 << " nautical miles" << endl;
    }
    else if (Selection == 'Q' || Selection == 'q')
    {
        cout << "Quitting program. " << endl;
    }
    else
    {
        cout << "Your selection does not match any of the options. " << endl;
    }
}
void Teht4()
{
    // Tähän asti suurimmaksi osaksi ollut itselle kertausta, mutta tässä tehtävässä oli ekaa kertaa miten...
    // ...pidetään päällä ikuista looppia missä voi liikkua eri paikasta toiseen.
    // Kohdassa 5 joutui pähkäillä miten alkulukuja lasketaan, mutta sen kanssa oli enemmän vaikeuksia ihan vain matikan suhteen kuin itse koodauksen.
    char Choice, Selection;
    char Quit = 'Q', Miles = 'M', NauticalMiles = 'N';
    string Name;
    int Age, StudentNumber, Frequency, Distance, number;
    float Height, Weight, Welfare, WelfareAmount, ExamScore;
    bool isPrime = true;

    // For loopilla pidetään ikuisesti ohjelma käynnissä.
    for (;;)
    {
        cout <<  endl << "1. User Information " << endl << "2. Study Grants " << endl << "3. Convert score and miles " << endl << "4. Help " << endl << "5. Prime numbers" << endl << "Q - Quit" << endl;
        cin >> Choice;

        // if komennolla valitaan mihin halutaan siirtyä.
        if (Choice == '1')
        {
            //Ohjelma ensin kysyy ja sitten tulostaa annetut tiedot
            cout << "What is your Name? ";
            cin >> Name;
            cout << "How old are you? ";
            cin >> Age;
            cout << "What is your student number? ";
            cin >> StudentNumber;
            cout << "How tall are you? ";
            cin >> Height;
            cout << "How much do you weight? ";
            cin >> Weight;
            cout << endl << "Your informations are: " << endl << "Name: " << Name << endl << "Age: " << Age << endl << "Student Number: " << StudentNumber << endl << "Height: " << Height << endl << "Weight: " << Weight << endl;
            continue;
        }
        else if (Choice == '2')
        {
            //Ohjelma kysyy ja sen jälkeen laskee annettujen tietojen tulon
            cout << "How many months of the year do you receive financial aid? ";
            cin >> Frequency;
            cout << "How much money do you receive in financial aid per month? ";
            cin >> Welfare;
            WelfareAmount = Frequency * Welfare;
            cout << "You receive " << WelfareAmount << " EUR in financial aid per year.";
            continue;
        }
        else if (Choice == '3')
        {
            //Ohjelma kysyy ja sen jälkeen valitsee mitä vastata tiedon perusteella
            cout << "How many points did you get from the exam? " << endl;
            cin >> ExamScore;

            if (ExamScore > 0 && ExamScore < 50)
            {
                cout << "Your grade is 0. " << endl;
            }
            else if (ExamScore >= 50 && ExamScore < 60)
            {
                cout << "Your grade is 1. " << endl;
            }
            else if (ExamScore >= 60 && ExamScore < 70)
            {
                cout << "Your grade is 2. " << endl;
            }
            else if (ExamScore >= 70 && ExamScore < 80)
            {
                cout << "Your grade is 3. " << endl;
            }
            else if (ExamScore >= 80 && ExamScore < 90)
            {
                cout << "Your grade is 4. " << endl;
            }
            else if (ExamScore >= 90 && ExamScore < 100)
            {
                cout << "Your grade is 5. " << endl;
            }
            else if (ExamScore == 100)
            {
                cout << "Your graade is 5. You also got the perfect score! " << endl;
            }
            else {
                cout << "Your score does not match the amount in the exam, please tell your score on a scale 0-100. " << endl;
            }

            //Ohjelma kysyy mitä halutaan laskea ja laskee valinnan mukaan mitä ikinä valittiinkaan
            cout << "Give your travel distance in kilometers. " << endl;
            cin >> Distance;
            cout << "-----------------------" << endl << "Write M to convert to miles. " << endl << "Write N to convert to nautical miles. " << endl << "Write Q to quit. " << endl;
            cin >> Selection;

            if (Selection == 'M' || Selection == 'm')
            {
                cout << "Distance in miles: " << Distance * 0.6214 << " miles" << endl;
            }
            else if (Selection == 'N' || Selection == 'n')
            {
                cout << "Distance in nautical miles: " << Distance * 0.539956803 << " nautical miles" << endl;
            }
            else if (Selection == 'Q' || Selection == 'q')
            {
                cout << "Returning to menu. " << endl;
            }
            else
            {
                cout << "Your selection does not match any of the options. " << endl;
            }
            continue;
        }
        else if (Choice == '4')
        {
            cout << "Type the corresponding number / letter to move in the menu" << endl;
            continue;
        }
        else if (Choice == '5')
        {
            //Ohjelma kysyy tietoa ja laskee sitten onko se alkuluku, tässä tuli opittua enemmän matikkaa kun ohjelmointia.
            cout << "Input a number to check if it is a prime number: ";
            cin >> number;

            if (number == 0 || number == 1)
            {
                isPrime = false;
            }
            for (int i = 2; i <= number / 2; i++)
            {
                if (number % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
            {
                cout << number << " is prime number!";
            }
            else
            {
                cout << number << " is NOT a prime number!";
            }
            continue;
        }
        else if (Choice == 'Q' || Choice == 'q')
        {
            cout << "Exiting program";
            break;
        }
        break;
    }
}
void Teht5()
{
    int number;
    bool isPrime = true;

    cout << "Input a number to check if it is a prime number: ";
    cin >> number;

    if (number == 0 || number == 1)
    {
        isPrime = false;
    }
    for (int i = 2; i <= number / 2; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << number << " is prime number!";
    }
    else
    {
        cout << number << " is NOT a prime number!";
    }
}
