#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 633604106
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long long p, signed char p_5, short p_7[4], double p_9,
              char p_15[5][1][2])
{
  long long v_17;
  int v_13;
  signed char v_11;
  unsigned char v;
  long long result;
  v_17 = 1065028948LL;
  v_13 = -831652970;
  v = (unsigned char)177;
  v = (unsigned char)(- v_17 / (long long)((int)v + 647));
  v_11 = (signed char)(171 * (! (~ v_13) % (((int)(! p_7[1]) + (int)p_15[2][0][0]) + 236)));
  v = (unsigned char)(-19 - (int)(! (! (~ v))));
  result = (! p * (long long)((unsigned int)v ^ 4294925034U) + (long long)(~ (
            3498864438UL ^ (unsigned long)p_5))) + (long long)((int)p_7[2] - (
                                                               (int)((signed char)p_9) << (
                                                               (int)(- v_11) & 7)));
  return result;
}


