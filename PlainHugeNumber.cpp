#include "PlainHugeNumber.h"

PlainHugeNumber::PlainHugeNumber(const string& num) {
    hugeNumAsString = num;
}

double PlainHugeNumber::Convert() {
    return stod(hugeNumAsString);
}

PlainHugeNumber::operator double() {
    return Convert();
}

AbstractHugeNumber* PlainHugeNumber::operator+(AbstractHugeNumber& other) {
    double result = Convert() + static_cast<double>(other);
    return new PlainHugeNumber(to_string(result));
}
