#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 839551011
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, float p_13)
{
  signed char v_10;
  unsigned long v_8;
  long v_6;
  double v_4;
  unsigned short v;
  signed char result;
  v_10 = (signed char)p_13;
  v_8 = (unsigned long)p_13;
  v_6 = 34590L;
  v_4 = (double)p_13;
  result = (signed char)((856910392UL + - v_8) * (unsigned long)(438921U + (unsigned int)(
                                                                 (int)((signed char)v_4) - (int)v_10)) - (unsigned long)(
                         5284L >> (p * (unsigned long)v_10 & 31UL)));
  v = (unsigned short)(- v_4 * (double)((unsigned long)((unsigned int)result & 4294922966U) / (unsigned long)(
                                        ! v_6 + 131L)));
  result = (signed char)(! (~ (- (! v))));
  return result;
}


