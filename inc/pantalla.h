#include <stdint.h>
#ifndef __PANTALLA_H
#define __PANTALLA_H


#define SEGMENT_A (1 << 0)///Pone en 1 el bit correspondiente al segmento A
#define SEGMENT_B (1 << 1)
#define SEGMENT_C (1 << 2)
#define SEGMENT_D (1 << 3)
#define SEGMENT_E (1 << 4)
#define SEGMENT_F (1 << 5)
#define SEGMENT_G (1 << 6)
#define SEGMENT_P (1 << 7)


typedef struct display_s *display_t;

typedef void (*display_screen_off_t) (void);

typedef void(*display_segment_on_t)(uint8_t segments);

typedef void(*display_digit_on_t)(uint8_t digit);

/// @brief para cargar los punteros a las funciones que le dan funcionalidad a la pantalla
typedef struct display_driver_s{
    display_screen_off_t ScreenTurnOff;
    display_segment_on_t SegmentsTurnOn;
    display_digit_on_t   DigitTurnOn;
}const *const display_driver_t;

/// @brief Esta funcio crea display
/// @param digits se reciben el numero de digitos
/// @param driver se reciben punteros a funciones que manejan la pantalla
/// @return 
display_t DisplayCreate(uint8_t digits,display_driver_t driver);

/// @brief Se llama solamente cada vez que se desea cambiar un valor en pantalla
/// @param display Determina el display en el cual se tendra la informacion
/// @param number Puntero al array donde se encuentran los numeros a cargar
/// @param size Numero de digitos del display

void DisplayWriteBCD(display_t display,uint8_t *number,uint8_t size);
/// @brief Con esta funcion se hace el barrido de la pantalla 
/// @param display Determina el display en el cual se tendra que multiplexar

void DisplayRefresh(display_t display);

#endif