#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 995604175
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, unsigned short p_4[4], float p_6,
          unsigned int p_13)
{
  signed char v_11;
  float v_9;
  int v;
  short result;
  v_11 = (signed char)92;
  result = (short)((long long)((unsigned long)(-706621984L * (long)(- p_6)) % (unsigned long)(
                               (4240576402U + p_13 % (unsigned int)((int)p + 913)) + 378U)) + 1);
  v_9 = (float)34288;
  v = (int)(- v_11);
  result = (short)(- (((float)((int)p * (int)p_4[0]) - - p_6) / ((float)(
                                                                 ((int)result - v) - (
                                                                 -499157812 + (int)v_9)) + 869.f)));
  return result;
}


