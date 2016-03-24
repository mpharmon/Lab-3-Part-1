#include "ADC.h"

void ADC_Init(){
  AD1CON1bits.FORM = 0; // Unsigned Integer Output
  AD1CON1bits.SSRC = 7; // Auto Converstion
  AD1CON1bits.ASAM = 1; // Enable Auto Sample
  AD1CON2bits.VCFG = 0; // Voltage Refrence (Vdd & Vss)
  AD1CON2bits.CSCNA = 0; // Do Not Scan Inputs
  AD1CON2bits.SMPI = 15; //Interrupt after 16 Sample and Converts
  AD1CON2bits.BUFM = 0; // Use a Single 16 Byte Buffer
  AD1CON2bits.ALTS = 0; // Only Use Mux A
  AD1CON3bits.ADRC = 0; // Clock Derived From Peripheral Bus
  AD1CON3bits.SAMC = 1;
  AD1CON3bits.ADCS = 1;
  AD1CHSbits.CH0NA = 0;
  AD1CHSbits.CH0SA = 0;
  AD1CON1bits.ON = 1; // Turn ADC On
}