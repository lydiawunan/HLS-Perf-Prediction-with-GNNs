#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 908610688
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, float p_15)
{
  long long v_13;
  signed char v_11;
  short v_9;
  unsigned int v_7;
  long v_4;
  short v;
  long result;
  v_13 = -63947LL;
  v_9 = (short)31831;
  v_7 = 1048092103U;
  v_4 = (long)p_15;
  v = (short)(~ v_7);
  v_11 = (signed char)v_9;
  v = (short)(((unsigned long)(~ v_4 * (long)((int)p + 143)) % (unsigned long)(
               ((281856094U + v_7) + (unsigned int)((int)v * (int)v_9)) + 693U)) * (unsigned long)(
              (int)(- v_11) + (int)((signed char)((float)(! p) - (float)v_13 / (
                                                                 p_15 + 763.f)))));
  result = (long)(~ (- v));
  return result;
}


