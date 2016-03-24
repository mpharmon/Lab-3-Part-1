#include <xc.h>
#include <math.h>

#define MOTOR1A_TRIS    TRISDbits.TRISD0
#define MOTOR1A_ODC     ODCDbits.ODCD0
#define MOTOR1A_LAT     LATDbits.LATD0
#define MOTOR1A_RP      RPD0Rbits.RPD0R
//#define MOTOR2B_ANSEL 

#define MOTOR2A_TRIS    TRISDbits.TRISD1
#define MOTOR2A_ODC     ODCDbits.ODCD1
#define MOTOR2A_LAT     LATDbits.LATD1
#define MOTOR2A_RP      RPD1Rbits.RPD1R
#define MOTOR2A_ANSEL   ANSELDbits.ANSD1

#define MOTOR2B_TRIS    TRISDbits.TRISD5
#define MOTOR2B_ODC     ODCDbits.ODCD5
#define MOTOR2B_LAT     LATDbits.LATD5
#define MOTOR2B_RP      RPD5Rbits.RPD5R
//#define MOTOR2B_ANSEL 

#define MOTOR1B_TRIS    TRISDbits.TRISD8
#define MOTOR1B_ODC     ODCDbits.ODCD8
#define MOTOR1B_LAT     LATDbits.LATD8
#define MOTOR1B_RP      RPD8Rbits.RPD8R
//#define MOTOR1B_ANSEL 

#define OC1_OUTPUT 0b1100
#define OC2_OUTPUT 0b1011

#define TRIS_OUTPUT 0

#define ODC_ENABLE 1
#define ODC_DISABLE 0

#define LAT_ENABLE 1
#define LAT_DISABLE 0

void PWM_Init();

void PWM_SetOC1DutyCycle(float newDutyCycle);

void PWM_SetOC2DutyCycle(float newDutyCycle);

void PWM_SetForward();

void PWM_SetBackward();