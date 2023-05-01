#include "chip.h"
#include "digital.h"
#include <stdbool.h>

typedef struct digital_output_s{
uint8_t port;
uint8_t pin;
bool allocated;
} *digital_output_t;

digital_output_t DigitalOutputAllocate(void);

digital_output_t DigitalOutputAllocate(void){
    digital_output_t output =NULL;

    static struct digital_output_s instances[4]={0};

    for(int index=0;index<4;index++){
        if(!instances[index].allocated){
            instances[index].allocated=true;
            output=&instances[index];
            break;
        }
    }

return output;
}


digital_output_t Digital_OutputCreate(uint8_t port,uint8_t pin){

digital_output_t output=DigitalOutputAllocate();

if(output){
output->port=port;
output->pin=pin;

    Chip_GPIO_SetPinState(LPC_GPIO_PORT, output->port, output->pin, false);
    Chip_GPIO_SetPinDIR(LPC_GPIO_PORT, output->port, output->pin, true);
}
return output;
}

void DigitalOutPutActivate(digital_output_t output){
    Chip_GPIO_SetPinState(LPC_GPIO_PORT,output->port,output->pin,true);
}

void DigitalOutPutDesactivate(digital_output_t output){
    Chip_GPIO_SetPinState(LPC_GPIO_PORT,output->port,output->pin,false);
}

void DigitalOutPutToggle(digital_output_t output){
Chip_GPIO_SetPinToggle(LPC_GPIO_PORT,output->port,output->pin);
}