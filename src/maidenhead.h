
#ifndef MAIDENHEAD_H_
#define MAIDENHEAD_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

typedef struct {
    float lat, lng;             // radians north, east
    float lat_d, lng_d;         // degrees
} LatLong;

#define MAID_CHARLEN    7       // maidenhead string length, including EOS

void ll2maidenhead (char maid[MAID_CHARLEN], const LatLong &ll);
bool maidenhead2ll (LatLong &ll, const char maid[MAID_CHARLEN]);

#endif
