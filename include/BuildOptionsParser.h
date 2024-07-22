#if !defined(BUILD_OPTIONS_PARSER_H)
#define BUILD_OPTIONS_PARSER_H

// CMSIS
#include <stm32f410rx.h>
#include <stm32f4xx.h>
// STD
#include <cstring>
// USER
#include <customTypes.h>

class BuildOptionsParser
{
private:
    //  Variables
    LedPin ledPins[4];
    int baudrate;
    // Methods
    int stoui(char *s, char eos = '\0');
    int checkPortPin(char *s);

public:
    BuildOptionsParser();
    int parsePortPin(char *s);
    int parseBaudrate(int br);
    LedPin getPin(int ledId);
};

#endif // BUILD_OPTIONS_PARSER_H
