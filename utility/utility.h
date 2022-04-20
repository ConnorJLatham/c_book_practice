#ifndef utility_h
#define utility_h

#include <stdio.h>
#include <math.h>

typedef enum { north, east, west, south } directionT;

int GetInt(char* phrase);

float GetReal(char* phrase);

int IsPrime(int n);

void CheckPrime(void);

double CelsiusToFahrenheit(double c);

typedef struct State State;

float get_percent(struct State *st);

int RandomInteger(int low, int high);

directionT OppositeDirection(directionT dir);

#endif