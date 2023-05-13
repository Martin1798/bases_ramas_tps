#include "chip.h"
#include "digital.h"
#include <stdbool.h>
#include <stdint.h>


typedef struct board_s{

    digital_output_t led_azul;
    digital_output_t led_rojo;
    digital_output_t led_amarillo;
    digital_output_t led_verde;

    digital_input_t tecla_1;
    digital_input_t tecla_2;
    digital_input_t tecla_3;
    digital_input_t tecla_4;

}const* const board_t;



board_t BoardCreate(void);

