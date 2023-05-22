/* Copyright 2022, Laboratorio de Microprocesadores
 * Facultad de Ciencias Exactas y Tecnología
 * Universidad Nacional de Tucuman
 * http://www.microprocesadores.unt.edu.ar/
 * Copyright 2022, Esteban Volentini <evolentini@herrera.unt.edu.ar >
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS  "
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;  BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

/** \brief Simple sample of use LPC HAL gpio functions
 **
 ** \addtogroup samples Sample projects
 ** \brief Sample projects to use as a starting point
 ** @{ */

/* === Headers files inclusions =============================================================== */

#include "chip.h"
#include "digital.h"
#include "poncho.h"
#include "bsp.h"
#include <stdbool.h>


/* === Macros definitions ====================================================================== */

/* === Private data type declarations ========================================================== */

/* === Private variable declarations =========================================================== */

/* === Private function declarations =========================================================== */
void delay(void);

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================= */

int main(void) {



    

    board_t board = BoardCreate();
    DisplayWriteBCD(board->display,(uint8_t[]){1,2,3,4},4);
    while (true) {

    
    /*DigitalOutPutActivate(board->Dig_4);
    DigitalOutPutActivate(board->Seg_A);
    delay();
    DigitalOutPutDesactivate(board->Dig_4);
    DigitalOutPutDesactivate(board->Seg_A);
    delay();

    DigitalOutPutActivate(board->Dig_3);
    DigitalOutPutActivate(board->Seg_B);
    delay();
    DigitalOutPutDesactivate(board->Dig_3);
    DigitalOutPutDesactivate(board->Seg_B);
    delay();

    DigitalOutPutActivate(board->Dig_2);
    DigitalOutPutActivate(board->Seg_C);
    delay();
    DigitalOutPutDesactivate(board->Dig_2);
    DigitalOutPutDesactivate(board->Seg_C);
    delay();

    DigitalOutPutActivate(board->Dig_1);
    DigitalOutPutActivate(board->Seg_D);
    delay();
    DigitalOutPutDesactivate(board->Dig_1);
    DigitalOutPutDesactivate(board->Seg_D);
    delay();*/

    while(DigitalInputState(board->Aceptar)) __asm("NOP");/*DisplayWriteBCD(board->display,(uint8_t[]){1,1,1,1},4)*/;
    DisplayRefresh(board->display);
    
    delay();




        
    }
}

void delay(){
    for(int i=0;i>10000;i++) __asm("NOP");
}



/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */
