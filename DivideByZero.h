#pragma once
#include "Exception.h"

class DivideByZero : public Exception
{
public:
    DivideByZero(const char* message);
};


