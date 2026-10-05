#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

// display function prototypes
void welcome();
void displayMenu();
void readOption(char &option);
void encode(char encodeFileName[]);
void readInput(char fName[], char lName[], bool &lateFlag);
void readInput(char parsedID[], char fileName[]);
void readTime(char strTime[]);

//start of bulk code
//welcome function
void welcome(){
    cout << "Welcome to my fileName encoding program!" << endl;
}

void displayMenu(){
    cout << "Please pick an option from below:" << endl;
    cout << "(e) Encode a file name" << endl;
    cout << "(q) Quit" << endl;
}

void readOption(char &option){
    cout << "What would you like to do?: ";
    cin >> option;
    while(option != 'e' || option != 'E' || option !='q' || option != 'Q'){
        cout << "Invalid option! Please try again!" << endl;
    }
}

void encode(char encodeFileName[]){

}

void readInput(char fName[], char lName[], bool &lateFlag){
    char binaryChoice;
    int i;

    cout << "\nEnter your last name: ";
    cin >> lName;
    for(i = 0; lName[i]; ++i){
        lName[i] = tolower(lName[i]);
    }
    cout << endl;

    cout << "Enter your first name: ";
    cin >> fName;
    for(i = 0; fName; ++i){
        fName[i] = tolower(fName[i]);
    }
    cout << endl;

    cout << "Was your assignment late? (y/n): ";
    cin >> binaryChoice;
    if(binaryChoice == 'Y' || binaryChoice == 'y'){
        lateFlag = true;
    }else if(binaryChoice == 'N' || binaryChoice == 'n'){
        lateFlag = false;
    }
}

void readInput(char parsedID[], char fileName[]){
    char stdID[50];

    cout << "Enter your Student-ID (format: 222-22-2222): ";
    cin >> stdID;
    strncpy(parsedID, stdID +7, 4);

    cout << "\nEnter the file name: ";
    cin >> fileName;
}

void readTime(char strTime[]){
    int min;
    int hour;
    char discard = ':';

    cout << "Enter the time submitted (military time - ex: 18:24 for 6:24pm): ";
    cin >> hour >> discard >> min;
    cin.ignore(100, '\n');

    if(hour >= 0 && hour <= 24){
        strTime[0] = '0';
    } 
    strncat(strTime, to_string(hour).c_str(), 24);

    else {
        cout << "Invalid input! Please try again!" << endl;
        cin.clear();
		cin.ignore(100, '\n');
        cin >> hour >> discard >> min;
    }

    if(min >= 0 && min <= 60){
        strcat(strTime, "0");
    }
    strcat(strTime, to_string(min).c_str());
    else{
        cout << "Invalid input! Please try again!" << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cin >> hour >> discard >> min;
    }
    cin.getline(hour, 50, ':');
    cin.getline(min, 50);
}
