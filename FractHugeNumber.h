#pragma once

#include "AbstractHugeNumber.h"

class FractHugeNumber : public AbstractHugeNumber {
public:
    FractHugeNumber(const string& num);
    double Convert() override;
    operator double() override;
    AbstractHugeNumber* operator+(AbstractHugeNumber& other) override;
};
