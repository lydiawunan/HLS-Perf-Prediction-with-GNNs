#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 95239928
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, float p_7, unsigned long p_11, unsigned long p_13,
          unsigned long long p_19)
{
  unsigned long v_21;
  int v_17;
  float v_15;
  long v_9;
  unsigned char v_5;
  signed char v;
  short result;
  v_21 = (unsigned long)p;
  v_15 = (float)p_11;
  v_9 = (long)p_19;
  v_5 = (unsigned char)57;
  v_17 = (int)((long long)v_21 / (! (-386975811LL + (long long)((unsigned long)v_9 & p_13)) + 718LL));
  v = (signed char)p_19;
  v_9 = (long)(- (((float)(p_11 & 4294967282UL) + ((float)p_13 - v_15)) / (
                  (float)(! (v_17 * 54)) + 7.f)));
  result = (short)((- (-63 + (int)p) ^ 232) + (((int)v + (int)v) + 0 % (
                                                                   (int)v_5 + 424)) / (
                                              (int)(p_7 + (float)v_9) + 815));
  return result;
}


