#include<iostream>
#include<cmath>
using namespace std;

long double sum(float x, float y) {   //summation
    long double summ = x + y;
    return summ;
}

long double diff(float x, float y) {  //substraction
    long double diff = x - y;
    return diff;
}

long double prod(float x, float y) { //product
    long double prod = x * y;
    return prod;
}

long double quot(float x, float y) { //quotient
            long double quot = x / y;
            return quot;
}

long double power(float x, float y) { //power
            long double power = 1;
            power = pow(x, y);
            return power;
}

long double squareRoot(float x) { //root
    return sqrt(x);
}

int reminder(int x, int y) { //reminder
    int remind = x % y;
    return remind;
}

long long factorial(int x) {
    long long fact = 1;
    if (x == 0 || x == 1) { return 1; }
    for (int i = x; i > 0; i--) {
        fact *= i;
    }
    return fact;
}


int main() {
    float x = 0, y = 0;
    string c;
    int choice;
    cout << "This is a calculator\n";
    do {
        do {
            cout << "choose the operation \n";
            cout << "1-summation\n" << "2-substraction\n" << "3-product\n" << "4-quotient\n" << "5-power\n" << "6-square root\n" << "7-reminder\n"<<"8-factorial\n";
            cin >> choice;
            if (choice > 8 || choice < 1) { cout << "invalid choice\n" << "please choose between 1 and 8\n"; }
        } while (choice > 8 || choice < 1);


        switch (choice) {
        case 1:
            cout << "Enter 2 numbers\n";
            cin >> x >> y;
            cout << "the sum = " << sum(x, y) << endl;
            break;
        case 2:
            cout << "Enter 2 numbers\n";
            cin >> x >> y;
            cout << "the difference = " << diff(x, y) << endl;
            break;
        case 3:
            cout << "Enter 2 numbers\n";
            cin >> x >> y;
            cout << "the product = " << prod(x, y) << endl;
            break;
        case 4:
            do {
                cout << "Enter 2 numbers\n";
                cin >> x >> y;
                if (y == 0) {
                    cout << "invalid input\n" << "can not divid by zero\n";
                }
            } while (y == 0);
            cout << "the quotient = " << quot(x, y) << endl;
            break;
        case 5:
            cout << "Enter the number\n";
            cin >> x;
            cout << "Enter the power\n";
            cin >> y;
            cout << "the result = " << power(x, y) << endl;
            break;
        case 6:
            do {
                cout << "Enter non-negative number\n";
                cin >> x;
                if (x < 0) { cout << "invalid input\n"; }
            } while (x < 0);
            cout << "the result = " << squareRoot(x) << endl;
            break;
        case 7:
            do {
                cout << "Enter 2 integer numbers \n";
                cin >> x >> y;
                if (x - floor(x) != 0 || y - floor(y) != 0) { cout << "invalid input\n"; }
            } while (x - floor(x) != 0 || y - floor(y) != 0);
            cout << "the reminder = " << reminder(static_cast<int>(x), static_cast<int>(y)) << endl;
            break;
        case 8:
            do {
                cout << "Enter non-negative integer number \n";
                cin >> x;
                if (x - floor(x) != 0 || x < 0) { cout << "invalid input \n"; }
            } 
            while (x - floor(x) != 0 || x < 0);
            cout << "the factorial = " << factorial(static_cast<int>(x)) << endl;
            break;
        }
        
        do {
            cout << "perform another operation ? (y/n)\n";
            cin >> c;
            if (c != "n" && c != "N" && c != "y" && c != "Y") {
                cout << "invalid input\n";
            }
        }
        while (c != "n" && c != "N" && c != "y" && c != "Y");
    } while (c != "n" && c != "N");

    cout << endl<< "*thank you for using our calculator :-)* \n";

    return 0;
}