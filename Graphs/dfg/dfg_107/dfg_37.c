#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 621487653
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(signed char p, long long p_13)
{
  unsigned char v_11;
  unsigned long v_9;
  unsigned char v_7;
  long v_5;
  unsigned long long v;
  signed char result;
  v_11 = (unsigned char)51;
  v_9 = 48576UL;
  v_5 = 51479385L;
  v = (unsigned long long)p_13;
  result = (signed char)(! ((long long)(! p) + ((long long)v_11 + p_13 % (long long)(
                                                                  (int)p + 466))));
  v_7 = (unsigned char)v;
  v = ((unsigned long long)v_5 % 521ULL) % (unsigned long long)(- v_9 + 738UL);
  result = (signed char)(((unsigned long long)p / (v + 51ULL) + (unsigned long long)(
                          (long)4610045952.f / (v_5 + 1000L) - (long)(~ result))) % (
                         ((unsigned long long)(- ((unsigned int)v_7 * 4294939789U)) + 2130ULL) + 404ULL));
  return result;
}


