#include <stdlib.h>
#pragma once

class CO2Sensor{
private:
    double _percent;
    void Update(){
        double delta = -10 + rand() % 20;
        _percent = delta/10;
        if (_percent > MAX_PERCENT)
            _percent = MAX_PERCENT;
        if (_percent < 0)
            _percent = 0;
    }
public:
    const double MAX_PERCENT = 100;

    CO2Sensor(){
        _percent = rand() % static_cast<int>(MAX_PERCENT);
    }

    
};