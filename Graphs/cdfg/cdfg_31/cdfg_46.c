#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 357050489
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, unsigned char p_7, int p_9,
                       unsigned int p_11, long p_17[5])
{
  unsigned long long v_23;
  unsigned long v_21;
  unsigned long v_19;
  unsigned int v_15;
  float v_13;
  unsigned int v_5;
  short v;
  unsigned long long result;
  v_23 = (unsigned long long)p_17[0];
  v_21 = 27853UL;
  v_19 = (unsigned long)p;
  v_15 = (unsigned int)p_17[1];
  v = (short)p;
  result = (unsigned long long)p_7;
  if ((unsigned long long)(((long long)((long)p_7 - p_17[2]) / -759218972LL) / (long long)(
                           ((4294933181UL + v_19) - (v_21 + (unsigned long)p_11)) + 31UL)) != ~ (
      v_23 / (unsigned long long)(14699U / (unsigned int)((int)p_7 + 279) + 543U))) {
    v_5 = (unsigned int)((unsigned long)(v_15 * 4294956278U) - 4294949842UL);
    v_13 = (float)((unsigned long long)(31U & v_5) - result * 55078ULL);
    v_5 = (unsigned int)(! (p_9 / 19 - (int)v_13));
  }
  else {
    v_5 = (unsigned int)(! (-0LL));
    v = (short)(! ((unsigned long)v_5 / (unsigned long)(p_17[3] + 71L)) / (unsigned long)(
                p_17[4] + 283L));
  }
  result = (unsigned long long)((unsigned int)(- ((int)p / ((int)v + 421))) - (
                                v_5 * (unsigned int)p_7 + ((unsigned int)p_9 - p_11)));
  return result;
}


