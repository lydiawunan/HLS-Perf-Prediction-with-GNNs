#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999249967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned int p[1], float p_5, unsigned int p_7, unsigned short p_9,
          unsigned int p_15)
{
  long v_21;
  unsigned long v_19;
  double v_17;
  short v_13;
  short v_11;
  unsigned long v;
  short result;
  v_21 = (long)p_7;
  v_11 = (short)-13559;
  result = (short)p_15;
  if (((unsigned long)((long)result % (v_21 + 920L)) / (unsigned long)(
       - p_15 + 831U)) / (unsigned long)(((long)(62077 % ((int)p_9 + 906)) + 140856267L) + 7L) > 0UL) {
    v_17 = (double)(((unsigned int)p_5 + 3830176108U) * (unsigned int)(
                    (int)v_11 + 59) + p[0]);
    result = (short)v_17;
    v_13 = result;
  }
  else {
    v_11 = (short)((p[0] % (unsigned int)((int)p_9 + 324) + (unsigned int)(
                    110 + (int)p_9)) << (0UL / (unsigned long)(! p_15 + 884U) & 31UL));
    v_19 = (unsigned long)p_15;
    v_13 = (short)((long long)p_15 % ((795408124LL - (52612870LL ^ (long long)v_19)) + 381LL));
  }
  if ((unsigned int)((int)v_11 % (((int)(! v_13) | 23) + 927)) == - (
      p_15 % (p_7 / (p_15 + 510U) + 131U))) {
    v = (unsigned long)p[0];
    result = (short)(~ v);
  }
  else result = (short)((unsigned long long)p_5 + (unsigned long long)p_7 * (
                                                  (unsigned long long)p_9 - 18446744073219751483ULL));
  return result;
}


