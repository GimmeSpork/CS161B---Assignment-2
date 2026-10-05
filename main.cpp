/******************************************************************************
# Author:           Lucy P
# Lab:              Assignment 8
# Date:             May 31, 2021
# Description:      calculates your numeric and letter grade from given 
#                   assignment scores, midterm exam score, and final exam score.
# Input:            numAssigns as int, numScore as double, 
# Output:           decimalGrade as double, letterGrade as char, prompt as string.
# Sources:          zybooks, assignment 7 and 8 resources.
#******************************************************************************/
#include <iostream>
#include <iomanip>
#include <cstring>
#include "bulkcode.cpp"
using namespace std;

//start of main function
int main(){
  char encodeFileName[50];
  char userOption;

  welcome();

  do{
    displayMenu();
    readOption(userOption);
    encode(encodeFileName);

    cout << "Your encoded file name is: " << encodeFileName << endl;

  }while(userOption == 'e' || userOption == 'E');

  cout << "\nThank you for using my fileName generator!" << endl;
}


