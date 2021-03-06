#ifndef SETUP_H
#define SETUP_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#define PIN_SLEEP "19" // gray
#define PIN_STEP "21" // orange
#define PIN_INPUT "18" // blue

#define PIN_PATH(SOME_PIN) "/sys/class/gpio/gpio" SOME_PIN "/value"

// exports all the required pins and sets their direction
void setup();

#endif
