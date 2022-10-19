// License       : License.txt
// Specifications: Spec-00000058.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : TC1046_00000058.cpp
// BSL              : 00000058
// Model number     : Microchip Technology TC1046
// Spec               Component type       : ADC
//                    OS                   : Mbed
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 13/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "TC1046.h"

AnalogIn TC1046_adc( iTC1046_pin , iVref );             // AnalogIn object

// Main Function
pp2ap_adc_t TC1046_00000058( void )
{
        pp2ap_adc_t res = pp_00000058( TC1046_adc , tbl_TC1046 );
        return( res );
}
