#include "Utils.h"

float Utils::mapFloat(float x, float in_min, float in_max, float out_min, float out_max){
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

float Utils::normalize(float a){
  int z=a*NORMALIZE_PRECISION;
  z%=NORMALIZE_PI;
  return (((float)z)/NORMALIZE_PRECISION);
}
