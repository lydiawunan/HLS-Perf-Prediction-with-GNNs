#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 329377210
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, unsigned int p_13, unsigned int p_15,
                       unsigned long long p_17)
{
  unsigned short v_19;
  long long v_11;
  long v_9;
  int v_6;
  unsigned short v_4;
  float v;
  unsigned long long result;
  v_19 = (unsigned short)62567;
  v_11 = (long long)p;
  v_9 = (long)p;
  v_6 = -52566;
  v_4 = (unsigned short)14956;
  v = (float)p_13;
  result = 64633ULL;
  while ((79UL % (p * 58611UL + 252UL) & ((unsigned long)(! p_13) - (unsigned long)v_9 * (unsigned long)p_15)) > 0UL) {
    v_19 = (unsigned long)v_19 + 4012167585UL;
    v_6 = -22311;
    v_11 = (long long)(~ v_4);
    v_9 = (long)p_17;
  }
  while_0_break: ;
  while ((unsigned long)v == (((unsigned long)((int)((unsigned short)v) - (int)v_4) + 3855953179UL) ^ (unsigned long)(
                              (18 << (v_6 & 7)) << (! p & 31UL)))) {
    v_11 %= (long long)(v_9 / -65L + 346L);
    v_9 = (long)((unsigned long long)(330863706UL * (unsigned long)(1901U + p_15)) * (
                 ((unsigned long long)v_6 * p_17) * p_17));
    v_6 = (int)(p / (~ (905246036UL - (unsigned long)p_13) + 672UL));
    v = (float)(- (p_13 + (unsigned int)v_6));
  }
  while_0_break_0: ;
  return result;
}


