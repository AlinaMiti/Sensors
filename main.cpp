#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "TempSensors.h"
#include "HumiditySensor.h"
#include "PressureSensor.h"
#include "ATH21.h"
#include "SensorsHandler.h"


int main(){
    srand(time(NULL));
    TempSensors Temp1; 
    std::cout << "Temperature: "<< Temp1() << std::endl;
    
    HumiditySensor Humidity1;
    std::cout << "Humidity: " << Humidity1() << std::endl;

    PressureSensor Pressure1;
    std::cout << "Pressure: " << Pressure1() << std::endl;

    ATH Sen;
    auto F = Sen();
    std::cout << "ATH: Temp: " << std::get<0>(F) << ", Humidity: "<< std::get<1>(F) << std::endl;

    TempSensors t1;
    TempSensors t2;
    TempSensors t3;
    SensorsHandler aaa;
    aaa.add_SensorsTemp(&t1);
    std::cout << aaa << std::endl;
    

    return 0;
}