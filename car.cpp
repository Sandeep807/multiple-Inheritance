#include "car.h"

void Car ::drive()
{
    startEngine();
    accelarate();
    cout << "Drive car" << endl;
}

void Car ::stop()
{
    stopEngine();
    brake();
    cout << "Stop car" << endl;
}