//----------------------------------------------------------------------------------------------------------------------------------------------------------------
//This code was written by Faizan Ahmad 476602 Section A 
// this is my submission for Fundimentals of Programming Assignment 1
// this code will cover all 10 questions from the assignment


#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	
	
//Question 1
//Write a C++ program to display factors of a number using for loops.


//	int num, factor;
//	cout<<"Enter a number"<<endl;
//	cin>>num;
//	cout<<"The factors of your number are:"<<endl;
//	for (int i = 1; i <= num; i++) {
//		if ( num % i == 0 ) {
//			cout<<i<<", ";
//		}
//		else {
//			continue;
//		}
//	}
	
	

//Answer to Question 2
	// the out put is "x is 5 and y is 10"
	
	
//Question 3
//Write a C++ program, take an integer value from user and check if it’s greater
//than 10 and less thanequal to 20. Print 1 if yes and print 0 if no. Use 
//appropriate datatype for output.


//int num, ans;
//
//cout<<"Enter a number"<<endl;
//cin>>num;
//
//ans = ( num > 10 && num <= 20 ) ? 1 : 0;
//
//cout<<ans;


//Question 4
//Write a C++ program that uses a while loop to find the largest prime number 
//less than a given positive integer N. Your program should take the value of N as 
//input from the user and then find the largest prime number less than or equal to 
//N. You are not allowed to use any library or pre-existing functions to check for 
//prime numbers.


//int N, num1, maxprime;
//
//cout<<"Enter a positive number"<<endl;
//cin>>N;
//
//if ( N <= 1 ) {
//	cout<<"Please enter a positive integer greater than 1"<<endl;
//	return 1;
//} 
//
//num1 = N;
//
//while ( num1 > 1 ) {
//	int i;
//	for ( i = 2; i <= num1/2; i++) {
//		
//		if ( num1 % i == 0 ) {
//			break;
//		}
//	}
//	
//	if ( i > num1 / 2 ) {
//		maxprime = num1;
//		break;
//	}
//	
//	num1--;
//}
//
//	cout<<"The largest prime numeber between 1 and "<<N<<" is: "<<maxprime;


//Question 5
//Write a C++ program, take two string as input from user and check if both 
//strings are equal or not. If they are equal make them unequal by rotating string. 
//e.g., Hello is turned into olleH etc.


//string a;
//string b;
//cout<<"Enter 2 strings of letters"<<endl;
//cin>>a>>b;
//
//int x;
//x = a.length();
//
//if ( a == b ) {
//	cout<<"The 2 strings are equal"<<endl;
//	
//	for ( int i=x; i >= 0; i-- ) {
//		
//		cout<<a[i];
//		
//	}
//	
//}
//else {
//	cout<<"The 2 strings are not equal"<<endl;
//}


//Question 6
//Perform division in C++ without / using for loops. You can use / only to display 
//the final results. Your dividend must be greater than divisor. 


//long double divident, divisor, remainder, answer;
//int quotient=0;
//
//cout<<"Enter your first number"<<endl;
//cin>>divident;
//cout<<endl<<"Enter your second number"<<endl;
//cin>>divisor;
//
//if ( divident < divisor || divisor == 0 ) {
//	cout<<"Invalid input, insure that the first number is greater than the second and that the secound number is not 0";
//}
//else {
//
//int i;
//for ( int i = divisor; i <= divident; i = i + divisor ) {
//	quotient++;
//}
//
//cout<<"quotient = "<<quotient<<endl;
//
//remainder = fmod( divident, divisor );
//
//cout<<"remainder = "<<remainder<<endl;
//
//answer = quotient + remainder / divisor;
//cout<<divident<<" / "<<divisor<<" = "<<answer;
//
//}


//Question 7
//Write a C++program for a string which may contain lowercase and uppercase 
//characters. The task is to remove all duplicate characters from the string and find 
//the resultant string.


int x;
string a;
string b;

cout<<"Enter a string of letters"<<endl;
cin>>a;

x = a.length();

for ( int i = 0; i < x; i++) {
	
	for (int j = i+1; j< x; j++) {
		
		if ( tolower( a[i] ) == tolower ( a[j] )   && i < j) {
			
			for ( int k = j; k < x-1; k++ ) {
				a[k] = a[k + 1 ];
				
			}
			a[x-1] = ' ';
			x--;
			j--;
			
		}
		
	}
	
}
cout<<"removing all the duplicates ---> ";
for ( int i = 0; i <= x; i++) {
	cout<<a[i];
}


//Question 8
//Suppose an integer array a[5] = {1,2,3,4,5}. Add more elements to it and 
//display them in C++.


//cout<<"Enter numbers to add to the series '1, 2, 3, 4, 5' "<<endl;
//int x=4, choice;
//int a[5] = {1,2,3,4,5};
//int b[99];
//
//
//for (int i = 0; i<5; i++) {
//	b[i] = a[i];
//}
//
//while (  choice != 1 ) {
//	
//	cin>>b[x + 1];
//	x++;
//	
//	for (int i = 0; i<=x; i++) {
//	cout<<" "<<b[i];
//	
//}
//	cout<<endl<<"Do you want to continue? if no enter 1, if yes enter any other number"<<endl;
//	cin>>choice;
//
//}


//Question 9
//Given an integer array and an integer X. Find if there’s a triplet in the array 
//which sums up to the given integer X.



//    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
//    int n = 14;
//
//    int X;
//    cout << "Enter the target sum (X): ";
//    cin >> X;
//
//    int tripletFound = 0; // 0 represents false, 1 represents true
//
//    for (int i = 0; i < n - 2; i++) {
//        for (int j = i + 1; j < n - 1; j++) {
//            for (int k = j + 1; k < n; k++) {
//                if (a[i] + a[j] + a[k] == X) {
//                    // Triplet found
//                    cout << "Triplet found: " << a[i] << ", " << a[j] << ", " << a[k] << endl;
//                    tripletFound = 1;
//                }
//            }
//        }
//    }
//
//    if (!tripletFound) {
//        cout << "No triplet found." << endl;
//    }


//Question 10
//Implement Bubble Sort on an array of 6 integers.


//int temp;
//cout<<"Enter 6 numbers"<<endl;
//
//int a[6];
//
//for (int i = 0; i < 6; i++) {
//	cin>>a[i];
//	
//}
//
//for (int i = 0; i<5; i++) {
//	for (int j = i + 1; j<6; j++) {
//		
//		if ( a[i] > a[j] ) {
//			temp = a[i];
//			a[i] = a[j];
//			a[j] = temp;
//		}
//	}
//}
//
//for ( int i = 0; i<6; i++ ) {
//	cout<<endl<<a[i];
//	
//}


	return 0;
} 
















