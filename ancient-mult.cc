/*
 *        File: ancient-mult.cc
 *      Author: Ryan Walsh
 *        Date: Date
 * Description: This program allows for the multiplication of two integers
 *              how people used to, through multiplication and division
 *              by twos.
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//function prototypes

int main(int argc, char const *argv[]) {

    char choice;
    int x;
    int y;
    int total;
    bool check, looper = true;

    cout << "Do you have two integers for multiplication? (y/n) \n";
    cin >> choice;
    while(looper == true){
        total = 0;
        if(choice == 'y'){
            cout << "Please enter the integers: \n";
        } else {
            return 0;
        }
        do{
            cin >> x >> y;

            if(x < 0 || y < 0){
                cout << "Error, one of the integers is negative, try again.\n";
                check = false;
            } else {
                check = true;
            }
        }while(check == false);
    
        while(y >= 1){
            if(y % 2 == 1){
                total += x;
            }
            x = x * 2;
            y = y / 2;
        }
    
        cout << "Total is: " << total << endl;
        cout << "More integers? (y/n)" << endl;
        cin >> choice;
        if(choice == 'n'){
            looper = false;
        }

    }
    return 0;
}// main