#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628381230
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, char p_4, float p_6[5], unsigned long long p_8,
                  unsigned long long p_11)
{
  unsigned short v_19;
  float v_17;
  long v_15;
  float v_13;
  unsigned short v;
  unsigned char result;
  v_17 = (float)p;
  v = (unsigned short)p_4;
  result = (unsigned char)202;
  if ((int)(- v) > (int)v) {
    v_15 = (long)((((int)((char)p) * (int)p_4) / ((int)(- p) + 195)) / 74);
    v_13 = (float)((unsigned long long)((long)(p_6[3] * 1.84467440737e+19f) & 
                                        v_15 / ((long)v_17 + 238L)) * (
                   (unsigned long long)(- p_4) + (unsigned long long)result * p_11));
    result = (unsigned char)v_13;
  }
  else {
    v_19 = (unsigned short)(- (~ ((long)-2492962798.23 / -49728L)));
    v = (unsigned short)(1.11057096933e+13 - - (- p));
    v_13 = (float)((unsigned long long)(- (! v_19)) ^ 18446744073709522080ULL);
  }
  if (- ((unsigned long long)((int)result >> ((int)v & 7)) % (~ p_11 + 1001ULL)) != (unsigned long long)v_13) 
    result = (unsigned char)42;
  else result = (unsigned char)p;
  return result;
}


