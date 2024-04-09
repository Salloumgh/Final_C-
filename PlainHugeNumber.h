#pragma once
#include "AbstractHugeNumber.h"

class PlainHugeNumber : public AbstractHugeNumber {
public:
    PlainHugeNumber(const string& num);
    double Convert() override;
    operator double() override;
    AbstractHugeNumber* operator+(AbstractHugeNumber& other) override;
};
