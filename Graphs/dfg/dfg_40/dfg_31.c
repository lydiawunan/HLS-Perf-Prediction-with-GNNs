#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 761106296
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, char p_5, unsigned long long p_9)
{
  unsigned short v_13;
  unsigned long long v_11;
  unsigned int v_7;
  signed char v;
  unsigned short result;
  v_13 = (unsigned short)52314;
  result = (unsigned short)p_9;
  v_11 = (unsigned long long)((unsigned long)(736325418L / ((long)2.94873299899e+38 + 17L)) - 3391806277UL);
  v_7 = (unsigned int)(p_9 * (~ v_11 % ((18446744073435199114ULL / (unsigned long long)(
                                         (int)v_13 + 194) ^ (unsigned long long)(- result)) + 468ULL)));
  v = (signed char)(~ -7279L);
  result = (unsigned short)((unsigned int)(~ (-50 / ((int)p + 983) - 
                                              (int)v * (int)p_5)) / (
                            ~ (~ (- v_7)) + 360U));
  return result;
}


