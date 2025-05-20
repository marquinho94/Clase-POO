#ifndef INCLUDES_Y_DEFINES_H
#define INCLUDES_Y_DEFINES_H


    #include <Arduino.h>
    #include <Wire.h>
    #include <LiquidCrystal.h>

    #ifdef ESP32

        #define LED_ROJO 2
        #define LED_VERDE 3
        #define LED_AZUL 4

    #endif


    #ifndef ESP32

        #error "This code is only for ESP32 boards. Please use a compatible board."

    #endif

    extern int a,b,c;




#endif


