#include <bits/stdc++.h>
#include <cmath>
using namespace std;    

#define ll long long

int getNumber(ll& currNumber);
ll binaryToDecimal(ll& currNumber,ll power,ll& resultNumber,ll& ans1);
void printResultNumber (ll resultNumber);

int main() {
    ll ans1 = 2;
    ll currNumber;
    ll resultNumber = 0;
    ll power = 0;
    ll chooseNumber;
    while(true){
        cout << "hello please choose option" << endl << "1-from binary to decimal" << endl << "2-from decimal to binary" << endl << "0-exit" << endl << ">>> ";
        cin >> chooseNumber;
        if (chooseNumber == 1){
            getNumber(currNumber);
            binaryToDecimal(currNumber,power,resultNumber,ans1);
            printResultNumber (resultNumber);
        }
        else if (chooseNumber == 0){
            return 0;
        }
    }
}

int getNumber(ll& currNumber){
    cout << "please enter the number :";
    cin >> currNumber;
    return currNumber;
}

ll binaryToDecimal(ll& currNumber,ll power,ll& resultNumber,ll& ans1){
    resultNumber = 0;
    while(currNumber != 0){
        ll ans = currNumber % 10;
        if (ans == 0){
            power++;
        }
        else{
            resultNumber += pow(ans1,power);
            power++;
        }
        currNumber /= 10;
    }
    return resultNumber;
}

void printResultNumber (ll resultNumber){
    cout << "the result is: " << resultNumber << endl;
}