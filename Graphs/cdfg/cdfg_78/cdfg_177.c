#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 225232080
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(long p[1][3][5], unsigned char p_7)
{
  char v_5;
  unsigned long v;
  unsigned long result;
  v = (unsigned long)p[0][1][0];
  v_5 = (char)((long)((int)((unsigned char)2.08518906074e+38) / 31) - ~ (! p[0][1][4]));
  if ((double)(- (~ v)) != (double)((long)(~ v_5) - (p[0][1][3] + p[0][2][1])) / (
                           (2571723.89906 / ((double)p_7 + 11.) - 39389.) + 1023.)) 
    result = (unsigned long)(-(unsigned short)46944);
  else result = (unsigned long)p[0][0][4];
  return result;
}


