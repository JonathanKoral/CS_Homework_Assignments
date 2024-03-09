/*
Name: Largest/Smallest
Copyright: 2024
Author: Jonathan J. Koral
Date: 03-07-24 13:55
Description: This program will ask to input 10 numbers and then go
through all the numbers and find out which number is the largest, and
which number is the smallest.
*/

#include <iostream>
using namespace std;
const int MAX_NUMBERS = 10;
int numArray[MAX_NUMBERS];
void getNumbers (int[]);

// printNumber was to check if getNumbers was working properly.
//  void printNumber(int[]);
int getLargest (int[]);
int getSmallest (int[]);

// This is the main function where everything gets called.
int main ()
{
  getNumbers (numArray);

// printNumber(numArray);
  getLargest (numArray);
  getSmallest (numArray);
  int smallest = getSmallest (numArray);
  int largest = getLargest (numArray);
  cout << largest << " is the largest number and "
	<< smallest << " is the smallest number." << endl;
  return 0;
}

// The getNumber function asks the user to enter 10 numbers 
// and stores it into different values in the Number Array
void getNumbers (int numbers[])
{
  cout << "Enter " << MAX_NUMBERS << " numbers: ";
  for (int count = 0; count < MAX_NUMBERS; count++) {
	  cin >> numArray[count];
	}
}

// The getLargest function gets the largest number in the array
// by going through every array content and checking if the current
// largest nummber is still the largest compared to the next value. 
// If the next value is larger than the current largest value, then 
// it will be replaced as the current largest value.
int getLargest (int numbers[])
{
  int largest = numbers[0];
  for (int count = 1; count < MAX_NUMBERS; count++) {
	  if (largest < numbers[count]) {
		  largest = numbers[count];
		}
	}
  return largest;
}

// The getSmallest function goes through the same process as the 
// getLargest function. The only difference is that its checking 
// for the smallest value and if the next value is smaller than 
// the current value, then it will be replaced as the smallest. 
int getSmallest (int numbers[])
{
  int smallest = numbers[0];
  for (int count = 1; count < MAX_NUMBERS; count++) {
	  if (smallest > numbers[count]) {
		  smallest = numbers[count];
		}
	}
  return smallest;
}

// void printNumber(int numbers[])
// {
// cout << "The numbers you entered are: ";
// for (int count = 0; count < MAX_NUMBERS; count++) {
//     cout << " " << numArray[count];
// }
// }
