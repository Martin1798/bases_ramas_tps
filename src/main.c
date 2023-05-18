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

/* === Public variable definitions ============================================================= */

/* === Private variable definitions ============================================================ */

/* === Private function implementation ========================================================= */

/* === Public function implementation ========================================================= */

int main(void) {



    

    board_t board = BoardCreate();

    while (true) {

    DisplayWriteBCD(board->display,(uint8_t[]){1,2,3,4},4);
    
        if(DigitalInputState(board->F1)){
            DisplayWriteBCD(board->display,(uint8_t[]){1,2,3,4},4);
            
        }
        if(DigitalInputState(board->F2)){
            DisplayWriteBCD(board->display,NULL,0);

            
        }

        for(int index=0;index < 1000 ; index++){
            for(int delay=0;delay < 24 ; delay++){
                __asm("NOP");
             }
        }

        if(DigitalInputState(board->Aceptar)){
                DigitalOutPutActivate(board->Dig_1);
                DigitalOutPutActivate(board->Dig_2);
                DigitalOutPutActivate(board->Dig_3);
                DigitalOutPutActivate(board->Dig_4);
                DigitalOutPutActivate(board->Seg_A);
                DigitalOutPutActivate(board->Seg_B);
                DigitalOutPutActivate(board->Seg_C);
                DigitalOutPutActivate(board->Seg_D);
                DigitalOutPutActivate(board->Seg_E);
                DigitalOutPutActivate(board->Seg_F);
                DigitalOutPutActivate(board->Seg_G);
                DigitalOutPutActivate(board->Punto);}

        if(DigitalInputState(board->Cancelar)){
                DigitalOutPutDesactivate(board->Dig_1);
                DigitalOutPutDesactivate(board->Dig_2);
                DigitalOutPutDesactivate(board->Dig_3);
                DigitalOutPutDesactivate(board->Dig_4);
                DigitalOutPutDesactivate(board->Seg_A);
                DigitalOutPutDesactivate(board->Seg_B);
                DigitalOutPutDesactivate(board->Seg_C);
                DigitalOutPutDesactivate(board->Seg_D);
                DigitalOutPutDesactivate(board->Seg_E);
                DigitalOutPutDesactivate(board->Seg_F);
                DigitalOutPutDesactivate(board->Seg_G);
                DigitalOutPutDesactivate(board->Punto);}
        
    }
}


/* === End of documentation ==================================================================== */

/** @} End of module definition for doxygen */
