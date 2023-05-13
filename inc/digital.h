

#ifndef NUMERO_GPIO_OUT
#define NUMERO_GPIO_OUT 4
#endif

#ifndef NUMERO_GPIO_INPUT
#define NUMERO_GPIO_INPUT 4
#endif

#ifndef invertir_logica
#define invertir_logica 1
#endif

#ifndef no_invertir_logica
#define no_invertir_logica 0
#endif

#ifndef DIGITAL_H
#define DIGITAL_H


#define LED_R_PORT 2
#define LED_R_PIN 0
#define LED_R_FUNC SCU_MODE_FUNC4
#define LED_R_GPIO 5
#define LED_R_BIT 0

#define LED_G_PORT 2
#define LED_G_PIN 1
#define LED_G_FUNC SCU_MODE_FUNC4
#define LED_G_GPIO 5
#define LED_G_BIT 1

#define LED_B_PORT 2
#define LED_B_PIN 2
#define LED_B_FUNC SCU_MODE_FUNC4
#define LED_B_GPIO 5
#define LED_B_BIT 2

#define LED_1_PORT 2
#define LED_1_PIN 10
#define LED_1_FUNC SCU_MODE_FUNC0
#define LED_1_GPIO 0
#define LED_1_BIT 14

#define LED_2_PORT 2
#define LED_2_PIN 11
#define LED_2_FUNC SCU_MODE_FUNC0
#define LED_2_GPIO 1
#define LED_2_BIT 11

#define LED_3_PORT 2
#define LED_3_PIN 12
#define LED_3_FUNC SCU_MODE_FUNC0
#define LED_3_GPIO 1
#define LED_3_BIT 12

#define TEC_1_PORT 1
#define TEC_1_PIN 0
#define TEC_1_FUNC SCU_MODE_FUNC0
#define TEC_1_GPIO 0
#define TEC_1_BIT 4

#define TEC_2_PORT 1
#define TEC_2_PIN 1
#define TEC_2_FUNC SCU_MODE_FUNC0
#define TEC_2_GPIO 0
#define TEC_2_BIT 8

#define TEC_3_PORT 1
#define TEC_3_PIN 2
#define TEC_3_FUNC SCU_MODE_FUNC0
#define TEC_3_GPIO 0
#define TEC_3_BIT 9

#define TEC_4_PORT 1
#define TEC_4_PIN 6
#define TEC_4_FUNC SCU_MODE_FUNC0
#define TEC_4_GPIO 1
#define TEC_4_BIT 9


typedef struct digital_output_s *digital_output_t;
typedef struct digital_input_s *digital_input_t;


digital_output_t Digital_OutputCreate(uint8_t port,uint8_t pin);
digital_input_t  DigitalInputCreate(uint8_t port,uint8_t invertir,uint8_t pin);

void DigitalOutPutActivate(digital_output_t output);

void DigitalOutPutDesactivate(digital_output_t output);

void DigitalOutPutToggle(digital_output_t output);

bool DigitalInputState(digital_input_t input);

bool DigitalInputhasChanged(digital_input_t input);

bool DigitalInputhasActivated(digital_input_t input);

bool DigitalInputhasDesactivated(digital_input_t input);


#endif



