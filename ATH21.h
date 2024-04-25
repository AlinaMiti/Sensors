#include "TempSensors.h"
#include "HumiditySensor.h"
#include <tuple>
#pragma once

class ATH{
private:
    TempSensors _temp;  //автоматически вызовется контр. по умолч.
    HumiditySensor _hum;
public:
    double GetTemp(){
        return _temp();
    }
    double GetHum(){
        return _hum();
    }
    std::tuple<double, double> operator()(){  //кортеж. Может вернуть 2 значения сразу
        return std::tuple<double, double>();
    }
};