#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 248506222
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, long long p_7, unsigned int p_9, unsigned long p_15)
{
  short v_17;
  int v_13;
  unsigned char v_11;
  unsigned long v_4;
  int v;
  signed char result;
  v_17 = (short)20551;
  v_13 = 1068651396;
  v_4 = (unsigned long)p_9;
  v = 37101;
  result = (signed char)-17;
  v_11 = (unsigned char)p;
  while ((long long)(~ ((int)result)) > (long long)((unsigned long)(- v) * (
                                                    v_4 % (unsigned long)(
                                                    (int)p + 650))) - ~ (
                                        p_7 % (long long)(p_9 + 732U))) {
    v = (long long)v_11 - -318660183LL;
    result = (signed char)(- v_17);
    v_11 = (unsigned char)(- result);
    v_4 = ! (50701UL * p_15) % (((unsigned long)v_13 + p_15 % (p_15 + 634UL)) + 725UL);
  }
  while_0_break: ;
  return result;
}


