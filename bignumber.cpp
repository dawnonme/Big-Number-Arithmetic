#include "bignumber.h"

BigNumber::BigNumber(const string& num) { this->num = num; }

BigNumber::BigNumber(const long long& num) { this->num = to_string(num); }

BigNumber::~BigNumber() {}

void BigNumber::showNumber() const { cout << num << endl; }

BigNumber BigNumber::add(const BigNumber& other) {}

BigNumber BigNumber::subtract(const BigNumber& other) {}

BigNumber BigNumber::multiply(const BigNumber& other) {}

BigNumber BigNumber::divide(const BigNumber& other) {}