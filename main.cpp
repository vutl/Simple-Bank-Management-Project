//Secion 16
//Challenge

#include <iostream>
#include <vector>
#include "Account.h"
#include 'Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account"
#include "Account_Util.h"

using namespace std;

int main() {
    
//    Account joe;
//    Checking_Account c;
//    cout << c << endl;
//    cout << endl;
    Account *ptr = new Trust_Account("Leo", 10000, 2.6);
    cout << *ptr << endl;
    return 0;
}
