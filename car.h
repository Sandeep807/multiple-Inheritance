#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "chassis.h"

class Car : public Engine, public Chassis
{
public:
    void drive();
    void stop();
};

#endif