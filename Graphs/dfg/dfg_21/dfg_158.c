#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 21895469
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, long p_4, unsigned short p_6, short p_11,
                long long p_13)
{
  char v_15;
  unsigned short v_9;
  float v;
  signed char result;
  v_15 = (char)p_6;
  v_9 = (unsigned short)32527;
  v = 2.71003497049e+38f;
  result = (signed char)((long long)v_9 % (((long long)(v + 166.54675293f) * ! p_13 + (long long)v_15) + 740LL));
  v = (float)p_11;
  v_9 = p_6;
  result = (signed char)((float)(! result) * -4.47805166245f - (float)(
                         (long)(~ ((int)p - 64980)) & (p_4 + (long)p_6) * (long)(
                                                      (int)((unsigned short)v) * (int)v_9)));
  return result;
}


