#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 910672561
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, short p_4, char p_6, int p_9)
{
  signed char v_11;
  int v;
  short result;
  v_11 = (signed char)p_9;
  result = (short)26289;
  if (240UL < (unsigned long)(! p_9) - ((814951475UL - (unsigned long)result) + (unsigned long)v_11)) {
    v = (int)510.683147664;
    result = (short)(-690222263 % ((v - 52834) + 699));
    result = (short)(- ((-65414L * (long)result) * -24L));
  }
  else result = (short)(p_9 * 188);
  result = (short)(((int)p * (int)result) % ((int)(- p_4) + 648) >> (
                   (int)p_6 / ((int)(~ result) + 883) & 31));
  return result;
}


