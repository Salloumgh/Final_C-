#include "FractHugeNumber.h"

FractHugeNumber::FractHugeNumber(const string& num) {
    hugeNumAsString = num;
}

double FractHugeNumber::Convert() {
    return stod(hugeNumAsString);
}

FractHugeNumber::operator double() {
    return Convert();
}

AbstractHugeNumber* FractHugeNumber::operator+(AbstractHugeNumber& other) {
    double result = Convert() + static_cast<double>(other);
    return new FractHugeNumber(to_string(result)); 
}
