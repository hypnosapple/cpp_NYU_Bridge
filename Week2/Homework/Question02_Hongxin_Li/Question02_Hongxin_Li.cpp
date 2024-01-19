// Question02_Hongxin_Li.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const int dollarV = 100;
const int quarterV = 25;
const int dimeV = 10;
const int nickelV = 5;
const int pennieV = 1;

int main()
{
    int dollar;
    int quarterN;
    int dimeN;
    int nickelN;
    int pennieN;
    int cent;
    int total;
    int remain;

    cout << "Please enter your amount in the format of dollars and cents separated by a space: \n";
    cin >> dollar >> cent;

    total = (dollar * dollarV) + cent;
    
    quarterN = total / quarterV; 
    remain = (total - (quarterN * quarterV));

    dimeN = remain / dimeV; 
    remain = (total - (quarterN * quarterV) - (dimeN * dimeV));

    nickelN = remain / nickelV;
    remain = (total - (quarterN * quarterV) - (dimeN * dimeV) - (nickelV * nickelN));

    pennieN = remain / pennieV;

    cout << dollar << " dollars and " << cent << " cent are: \n";
    cout << quarterN << " quarters, " << dimeN << " dimes, " << nickelN << " nickels and " << pennieN << " pennies" << endl;
}

