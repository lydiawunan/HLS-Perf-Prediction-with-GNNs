//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 2832927
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned char p, unsigned int p_7, unsigned long long p_9,
                 unsigned long p_13, unsigned short p_15)
{
  short v_17;
  long long v_11;
  signed char v_4;
  short v;
  unsigned int result;
  v_17 = (short)-4126;
  v_4 = (signed char)((((unsigned long long)((int)p_15 - (int)p_15) * (
                        p_9 - 18446744073709519933ULL)) / (unsigned long long)(
                       (int)p + 877)) * (unsigned long long)v_17);
  v_11 = (long long)p_15;
  v = (short)(~ (! (! v_11) + (long long)(p_13 - (unsigned long)((unsigned int)v_4 / 453626980U))));
  result = (unsigned int)((unsigned long long)((((int)v * -58) * ((int)v_4 / (
                                                                  (int)p + 682))) % 83) * ! (~ (
                          (unsigned long long)p_7 & p_9)));
  return result;
}


