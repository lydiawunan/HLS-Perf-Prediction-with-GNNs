#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 26897124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned short p, unsigned long p_4, int p_6,
                  long long p_8, char p_10)
{
  float v_13;
  short v;
  unsigned long result;
  v_13 = 4.37646006685e+36f;
  v = (short)p_8;
  result = (unsigned long)((int)p_10 % (p_6 + 367));
  if (! ((long long)p_6 + (p_8 + (long long)p_10)) != ((long long)p_6 * -5845LL ^ (long long)(
                                                       result & 4294924737UL)) * (long long)(
                                                      ((long)v + -28569L) * (long)(
                                                      -58 - (int)((signed char)v_13)))) 
    result = (unsigned long)p;
  else result = ! (~ (p_4 << 19U));
  return result;
}


