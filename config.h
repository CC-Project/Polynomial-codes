#ifndef CONFIG_H
    #define CONFIG_H
    #define DEBUG 1 //If enable, debugging routines will be compiled

	//The following preprocessor code selects the architecture
	#ifdef __AVR__
        #warning AVR plateform selected
        #define BAUD_RATE 0x19      //38400
		#define F_CPU	16000000UL  //CPU clock frequency
		#include <avr/io.h>
		#define EXIT_FAILURE -1
    #else
        #warning Windows plateform selected
        #include <inttypes.h>
        #include <stdlib.h>
	#endif

    //Generator polynomial
    #define G 00111
    #define K 2
    #define N 5

    #define BASE_L 1
    #define BASE_D (1 << BASE_L)

#endif // CONFIG_H