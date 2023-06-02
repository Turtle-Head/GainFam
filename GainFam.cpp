// GainFam.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author: James Fehr
// Written in C++
// Date June 1, 2023

#include <iostream>
void numberfun();
void askforaname();
void askforanumber();
void pastpresentfuture();
bool checkOdd(int num);
bool divby3(int num);
const int CYEAR = 2023;

int main()
{
    askforaname();
    numberfun();
    askforanumber();
    pastpresentfuture();
    return 0;
}

bool checkOdd(int num) {
    if (num % 2 == 0)
        return(true);
    else
        return(false);
}

bool divby3(int num) {
    if (num % 3 == 0)
        return(true);
    else
        return(false);
}

void askforanumber() {
    int number;

    std::cout << "\n Please enter a number: ";
    std::cin >> number;
    if (checkOdd(number)) {
        std::cout << "\n " << number << " Even ";
    }
    else {
        std::cout << "\n " << number << " Odd \n";
    }
    if (divby3(number)) {
        std::cout << "\n " << number << " is Divisible by 3 \n";
    }
    else {
        std::cout << "\n " << number << " is not Divisible by 3 \n";
    }
}

void pastpresentfuture() {
    int year;
    std::cout << "\n Enter a year: ";
    std::cin >> year;
    if (year < CYEAR) {
        std::cout << "\n The past...\n";
    }
    else if (year == CYEAR) {
        std::cout << "\n The present !\n";
    }
    else if (year > CYEAR) {
        std::cout << "\n The FUTURE !! \n";
    }
}

void askforaname() {
    std::string name;
    int age;
    std::cout << "\n Enter your name: ";
    std::cin >> name;
    std::cout << "\n Enter your age: ";
    std::cin >> age;
    std::cout << "\n Hello " << name << ", you are " << age << " yeas old today\n";
}
void numberfun() {
    int num1, num2;
    std::cout << "\n Enter a number: ";
    std::cin >> num1;
    if (num1 % 2 == 0) { std::cout << "\n " << num1 << " is even\n"; }
    else { std::cout << "\n " << num1 << " is odd\n"; }
    std::cout << "\n Enter a number: ";
    std::cin >> num2;
    if (num2 % 2 == 0) { std::cout << "\n " << num2 << " is even\n"; }
    else { std::cout << "\n " << num2 << " is odd\n"; }
    double sum = num1 * num2;
    std::cout << "\n " << num1 << " x " << num2 << " = " << sum << " \n";
    sum = num1 + num2;
    std::cout << "\n " << num1 << " + " << num2 << " = " << sum << " \n";
    sum = num1 - num2;
    std::cout << "\n " << num1 << " - " << num2 << " = " << sum << " \n";
    sum = num1 / num2;
    std::cout << "\n " << num1 << " / " << num2 << " = " << sum << " \n";
}
