#include "ATH21.h"
#include "CO2Sensor.h"
#include "TempSensors.h"
#include "PressureSensor.h"
#include "HumiditySensor.h"

class SensorsHandler{
private:
    TempSensors** Temp_array;
    HumiditySensor** Hum_array;
    PressureSensor** Pres_array;
    CO2Sensor** CO2_array;
    ATH** ATH_array;
    size_t ATH_size = 40;
    size_t CO2_size = 15;
    size_t Hum_size = 11;
    size_t Pres_size = 12;
    size_t Temp_size = 10;
public:
    SensorsHandler(){
        Temp_array = new TempSensors*[Temp_size];
        Hum_array = new HumiditySensor*[Hum_size];
        Pres_array = new PressureSensor*[Pres_size];
        CO2_array = new CO2Sensor*[CO2_size];
        ATH_array = new ATH*[ATH_size];
    }
    void add_SensorsTemp( TempSensors* temp){
        for (int i = 0; i < Temp_size; i++){
            if(Temp_array[i] == nullptr){
                Temp_array[i] = temp;
                break;
            }
        }
    }
    void add_SensorsTemp( CO2Sensor* co){
        for (int i = 0; i < Temp_size; i++){
            if(CO2_array[i] == nullptr){
                CO2_array[i] = co;
                break;
            }
        }
    }
    void add_SensorsTemp( HumiditySensor* hum){
        for (int i = 0; i < Temp_size; i++){
            if(Hum_array[i] == nullptr){
                Hum_array[i] = hum;
                break;
            }
        }
    }
    void add_SensorsTemp( PressureSensor* pres){
        for (int i = 0; i < Temp_size; i++){
            if(Pres_array[i] == nullptr){
                Pres_array[i] = pres;
                break;
            }
        }
    }
    void add_SensorsTemp( ATH* ath){
        for (int i = 0; i < Temp_size; i++){
            if(ATH_array[i] == nullptr){
                ATH_array[i] = ath;
                break;
            }
        }
    }

    friend std::ostream& operator<<(std::ostream& os, const SensorsHandler& temp){
        for(int i = 0; i < temp.Temp_size; i++){
            if (temp.Temp_array[i] == nullptr){
                break;
            }
            os << "TempSensors" << i << ": " << (*temp.Temp_array[i])() << " ";
        }
        return os;
    }
};