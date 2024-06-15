#include "BigNumCalc.h"
using namespace std;

list<int> BigNumCalc::buildBigNum(string numString) {
    list<int> convertedList;
    for(char digit : numString) {
        convertedList.push_back(digit - '0');
    }

    return convertedList;
}

list<int> BigNumCalc::add(list<int> num1, list<int> num2) {
    list<int> result;
    int over = 0; // carry over

    // reverse iterators
    list<int>::reverse_iterator revIt1 = num1.rbegin();
    list<int>::reverse_iterator revIt2 = num2.rbegin();

    bool continueCalc = true;

    while(continueCalc) {
        int val1 = 0;
        int val2 = 0;

        if(revIt1 != num1.rend()) {
            val1 = *revIt1;
            ++revIt1;
        }
        if (revIt2 != num2.rend()) {
            val2 = *revIt2;
            ++revIt2;
        }

        int sum = val1 + val2 + over;
        over = sum / 10;
        result.push_front(sum % 10);

        if (revIt1 != num1.rend() || revIt2 != num2.rend() || over) {
            continueCalc = true;
        } else {
            continueCalc = false;
        }   
    }
    return result;
}

list<int> BigNumCalc::sub(list<int> num1, list<int> num2) {
    list<int> result;
    int borrow = 0;

    list<int>::reverse_iterator revIt1 = num1.rbegin();
    list<int>::reverse_iterator revIt2 = num2.rbegin();

    while(revIt1 != num1.rend() || revIt2 != num2.rend() || borrow) {
        int val1 = 0;
        int val2 = 0;

        if(revIt1 != num1.rend()) {
            val1 = *revIt1;
            ++revIt1;
        }
        if(revIt2 != num2.rend()) {
            val2 = *revIt2;
            ++revIt2;
        }
  
        int diff = val1 - val2 - borrow;
        if(diff < 0) {
            diff = diff + 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.push_front(diff);
    }  
    return result;
}

list<int> BigNumCalc::mul(std::list<int> num1, std::list<int> num2) {
    list<int> result;
    
    int mFactor = num2.front(); // As num2 contains only one digit
    int over = 0;
    list<int>::reverse_iterator revIt1 = num1.rbegin();
    for(revIt1; revIt1 != num1.rend(); ++revIt1) {
        int product = over + (*revIt1 * mFactor);

        result.push_front(product % 10);
        over = product / 10;
    }
    while(over) {
        result.push_front(over % 10);
        over = over / 10;
    }

    return result;
}
