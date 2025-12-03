// OhjelmoinninPerusteetProjekti.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
#include <array>
#include <iomanip>
#include <time.h>
#include <random>
#include <clocale>
using namespace std;

void Teht1();
void Teht2();
void Teht3();
void Teht4();
void Teht5();
void Teht6();
void Teht7();
void Teht8();
void Teht9();
void Teht10();

//Ohjelma alkaa aina main-funktiosta:
int main()
{
    //Funktiokutsut (function calls):
    setlocale(LC_ALL, "fi_FI.UTF-8");
    cout << "My Program v0.1\n" << endl;
    //Teht1();
    //Teht2();
    //Teht3();
    Teht4();
    //Teht5();
    //Teht6();
    //Teht7();
    //Teht8();
    //Teht9();
    //Teht10();
}

//Funktion määrittelyt eli toteutukset (definition): Viikkotehtävä 1
void Teht1() 
{
    string Name;
    int Age, StudentNumber;
    float Height, Weight;

    cout << "What is your Name? ";
    //Ottaa nimen getlinellä että voi olla myös sukunimi
    cin.ignore();
    getline(cin, Name);
    cout << "How old are you? ";
    cin >> Age;
    cout << "What is your student number? ";
    cin >> StudentNumber;
    cout << "How tall are you? ";
    cin >> Height;
    cout << "How much do you weight? ";
    cin >> Weight;
    cout << endl << "Your informations are: " << endl << "Name: " << Name << endl;
    cout << "Age: " << Age << endl << "Student Number: " << StudentNumber << endl;
    cout << "Height: " << Height << endl << "Weight: " << Weight << endl;
}
void Teht2() {
    int Frequency;
    float Welfare;

    while (true)
    {
        cout << "How many months of the year do you receive financial aid? ";
        cin >> Frequency;
        //Kysyy kuukausien määrää kunnes se on 1-12 välissä
        if (Frequency >= 1 && Frequency <= 12)
        {
            break;
        }
        cout << "Number must be between 1-12." << endl;
    }
    cout << "How much money do you receive in financial aid per month? ";
    cin >> Welfare;
    cout << "You receive " << Welfare * Frequency << " EUR in financial aid per year." << endl;
}

void Teht3() {
    float ExamScore;

    cout << "How many points did you get from the exam? " << endl;
    cin >> ExamScore;
    //Riippuen annetusta ExamScoresta valitsee oikean arvosanan
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
    //Valinnan perusteella suorittaa tarvittavan laskutoimituksen ja tulostaa vastauksen
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
void Teht5()
{
    int number;
    bool isPrime = true;

    cout << "Input a number to check if it is a prime number: ";
    cin >> number;
    //0 ja 1 ei voi olla Prime numeroita
    if (number == 0 || number == 1)
    {
        isPrime = false;
    }
    //Laskee onko numero prime
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
        cout << number << " is prime number!" << endl;
    }
    else
    {
        cout << number << " is NOT a prime number!" << endl;
    }
}
void Teht6()
{
    time_t startTime, endTime;
    double seconds;
    startTime = time(NULL);
    //Random numero generaattori
    random_device rd;
    mt19937 gen(rd());
    //Asetetaan rajat minkä väliltä random numero valitaan
    uniform_int_distribution<int> dist(100000, 200000);
    //Generoi random numeron 
    int randomNum = dist(gen);
    //Generoi random kirjaimia niin monta kuin randomNum generoi
    for (int i = 0; i <= randomNum; i++)
    {
        char rndChar = rand() % 26 + 97;
        cout << rndChar;
    }
    // Laskee erotuksen ohjelman loppumis ja alkamis ajasta.
    endTime = time(NULL);
    seconds = difftime(endTime, startTime);
    cout << endl << "Randomizing and printing " << randomNum << " letters, time taken: " << seconds << endl;
}
void Teht7()
{
    string lause1;
    int letters = 0;
    int words = 0;
    int sentences = 0;
    bool inWord = false;
    bool inSentence = false;


    cout << "Write a sentence: ";
    //Ignoraa edellisen enter painalluksen jotta voidaan ottaa uusi cin getlinellä
    cin.ignore(10, '\n');
    getline(cin, lause1);

    for (char ch : lause1)
    {
        //Katsoo onko kyseessä kirjain
        if (isalpha(ch))
        {
            letters++;

            //Jos ei olla kirjaimessa, uusi sana alkaa
            if (!inWord)
            {
                words++;
                inWord = true;
            }
            inSentence = true;
        }
        //Katsoo onko virkkeessä päätettä
        else if (inSentence && (ch == '.' || ch == '!' || ch == '?'))
        {
            sentences++;
            inSentence = false;
        }
        else
        {
            //Katsoo jos ollaan "whitespacessa"
            if (isspace(ch))
            {
                inWord = false;
            }
            else
            {
                inWord = false;
                if (isdigit(ch) || ch == '\'')
                {
                    inSentence = true;
                }
            }
        }
    }
    if (inSentence)
    {
        sentences++;
    }

    cout << "Number of letters is: " << letters << endl;
    cout << "Number of words is: " << words << endl;
    //Riippuen lauseiden määrästä päättää onko se päälause vai virke sivulauseilla
    if (sentences != 1)
    {
        cout << "The sentence has multiple clauses, number of clauses is: " << sentences << endl;
    }
    else
    {
        cout << "The sentence is a main clause" << endl;
    }
}
void Teht8()
{
    const int ROWS = 10;
    const int SEATS = 20;
    string seats[ROWS][SEATS];
    cout << "ROW  SEAT" << endl;

    for (int i = 0; i < ROWS; i++)
    {
        cout << setw(2) << setfill('0') << (i + 1) << setfill(' ') << ' ';
        for (int j = 0; j < SEATS; j++)
        {
            seats[i][j] = to_string(j + 1);
            cout << setw(3) << seats[i][j] << ' ';

        }
        cout << endl;
    }
    cout << "Reserve a seat (give a row first and then a seat number ex: 1 10): " << endl;
    int row, seat;
    cin >> row >> seat;

    if (row < 1 || row > ROWS || seat < 1 || seat > SEATS)
    {
        cout << "Virhe: Virheellinen rivi tai paikka! " << endl;
    }
    else seats[row - 1][seat - 1] = "XX";
    cout << "ROW  SEAT" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        cout << setw(2) << setfill('0') << (i + 1) << setfill(' ') << ' ';
        for (int j = 0; j < SEATS; j++)
        {
            cout << setw(3) << seats[i][j] << ' ';
        }
        cout << endl;
    }
}
//Aloittavat 0 ja käyvät yksitellen läpi kaikki arrayn numerot ja katsovat sopivatko ne funktioon ja jos sopivat niin lisäävät omaan määräänsä 1
//Esim jos Howmanyzeros katsoo arraytä läpi ja sieltä tulee vastaan 0 niin se lisää Nollien määrä: 0 -> 1 ja jatkaa arrayn lukemista
int Odds(int arr[], int size)
{
    int Odds = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            Odds++;
        }
    }
    return Odds;
}
int Evens(int arr[], int size)
{
    int Evens = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            Evens++;
        }
    }
    return Evens;
}
int Positives(int arr[], int size)
{
    int Positives = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            Positives++;
        }
    }
    return Positives;
}
int Negatives(int arr[], int size)
{
    int Negatives = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            Negatives++;
        }
    }
    return Negatives;
}
int HowManyZeros(int arr[], int size)
{
    int Zeros = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            Zeros++;
        }
    }
    return Zeros;
}
void Teht9()
{
    //Tekee random numero generaattorin
    random_device rg;
    mt19937 gen(rg());
    //Tekee random numerolle raja arvot
    uniform_int_distribution<int> dist(-10, 10);

    const int SIZE = 40;
    //Tekee arrayn
    int numbers[SIZE];

    //Generoi random numeron jokaisen arrayn kohtaan
    for (int i = 0; i < SIZE; i++)
    {
        numbers[i] = dist(gen);
    }
    cout << "Printing 40 random numbers between -10 and 10: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << endl;
    }
    //Käy läpi funktiot ja tulostaa niiden tuloksen
    int oddCount = Odds(numbers, SIZE);
    int evenCount = Evens(numbers, SIZE);
    int positiveCount = Positives(numbers, SIZE);
    int negativeCount = Negatives(numbers, SIZE);
    int zeroCount = HowManyZeros(numbers, SIZE);
    cout << "Number of odd numbers: " << oddCount << endl;
    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of positive numbers: " << positiveCount << endl;
    cout << "Number of negative numbers: " << negativeCount << endl;
    cout << "Number of zeros: " << zeroCount << endl;

}
void Teht4()
{
    char Choice;
 
    for (;;)
    {
        cout << endl << "1. User Information " << endl << "2. Study Grants " << endl << "3. Convert score and miles " << endl;
        cout << "4. Help " << endl << "5. Prime numbers" << endl << "6. Random generator" << endl;
        cout << "7. Sentence counter" << endl << "8. Cinema seat reserving" << endl << "9. Random number sorter" << endl << "Q - Quit" << endl;
        cin >> Choice;

        //Valinnan perusteella siirtyy valittuun funktioon
        if (Choice == '1')
        {
            Teht1();
            continue;
        }
        else if (Choice == '2')
        {
            Teht2();
            continue;
        }
        else if (Choice == '3')
        {
            Teht3();
            continue;
        }
        else if (Choice == '4')
        {
            cout << "Type the corresponding number / letter to move in the menu" << endl;
            continue;
        }
        else if (Choice == '5')
        {
            Teht5();
            continue;
        }
        else if (Choice == '6')
        {
            Teht6();
            continue;
        }
        else if (Choice == '7')
        {
            Teht7();
            continue;
        }
        else if (Choice == '8')
        {
            Teht8();
            continue;
        }
        else if (Choice == '9')
        {
            Teht9();
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
void Teht10()
{
    
}
