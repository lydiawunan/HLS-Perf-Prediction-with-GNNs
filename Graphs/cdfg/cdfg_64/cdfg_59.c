#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 524463304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(double p, unsigned long long p_11, unsigned int p_13,
         unsigned long p_15, double p_17)
{
  char v_21;
  signed char v_19;
  signed char v_9;
  unsigned int v_6;
  float v_4;
  unsigned long v;
  long result;
  v_21 = (char)p_11;
  v_19 = (signed char)p_17;
  v_4 = (float)p_13;
  result = 65358L;
  if (- (p * -55086. - - p_17) == - ((double)(p_11 + (unsigned long long)v_21) * (
                                     4294914039. / (p_17 + 323.)))) {
    v_9 = (signed char)result;
    v = (unsigned long)((unsigned long long)((int)((short)(p - -6885784015.14)) / 319) + ! (
                        37881ULL & p_11));
    v_6 = 3297124954U << ((((int)v_9 + (int)v_9) - (int)p) & 31);
  }
  else {
    v_4 = (float)((! p_11 % (unsigned long long)(! p_15 + 665UL)) % (unsigned long long)(
                  4294949042U * (unsigned int)(9558 / ((int)v_19 + 182)) + 421U));
    v_6 = (unsigned int)((double)((unsigned int)-8251195116.28 % (p_13 + 536U)) + - (
                         (double)p_15 * p_17));
    v = 33447UL;
  }
  result = (long)((double)((float)v / (v_4 / (v_4 + 209.f) + 116.f)) - - (
                  (double)v_6 * p));
  return result;
}


