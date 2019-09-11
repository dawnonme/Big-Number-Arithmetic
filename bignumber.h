#ifndef BIGNUMBER_H
#define BIGNUMBER_H

#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class BigNumber {
   public:
    BigNumber(const string& num);
    BigNumber(const long long& num);
    ~BigNumber();

    void showNumber() const;
    BigNumber add(const BigNumber& other);
    BigNumber subtract(const BigNumber& other);
    BigNumber multiply(const BigNumber& other);
    BigNumber divide(const BigNumber& other);

   private:
    string num;
};

#endif