#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll getInput();
ll convertFromBinaryToDecimal(ll input);
ll convertFromDecimalToBinary(ll input);
ll getChooseOptionFromUser();
void printResultNumber (ll resultNumber);
void printSaparator();

int main() {
    ll result = 0;
    ll input;
    while(true){
        ll chooseOption = getChooseOptionFromUser();
        if(chooseOption == 0){
            break;
        }

        input = getInput();

        if (chooseOption == 1){
            result = convertFromBinaryToDecimal(input);
        }
        else if(chooseOption == 2){
            result = convertFromDecimalToBinary(input);
        }

        printResultNumber(result);
        printSaparator();
    }
}


ll getChooseOptionFromUser(){
    ll chooseOption;
    cout << "hello please choose option\n" << 
            "1- from binary to decimal\n" << 
            "2- from decimal to binary\n" << 
            "0- exit\n" << 
            ">>> ";

    cin >> chooseOption;

    return chooseOption;
}

ll getInput(){
    ll number;
    cout << "please enter the number: ";
    cin >> number;

    return number;
}

ll convertFromBinaryToDecimal(ll input){
    ll currPower = 0;
    ll resultNumber = 0;
    ll base = 2;

    while(input != 0){
        ll currLastDigit = input % 10;
        if (currLastDigit == 1){
            resultNumber += pow(base, currPower);
        }
        currPower++;
        input /= 10;
    }
    return resultNumber;
}

ll convertFromDecimalToBinary(ll input){
    string resultNumber;
    while (input != 0){
        if (input % 2 == 0){
            resultNumber += '0';
        }
        else {
            resultNumber += '1';
        }
        input /= 2;
    }
    reverse(resultNumber.begin(),resultNumber.end());
    return stoll(resultNumber);
}

void printResultNumber (ll resultNumber){
    cout << "the result is: " << resultNumber << endl;
}

void printSaparator(){
    cout << "=====================================\n\n";
}
