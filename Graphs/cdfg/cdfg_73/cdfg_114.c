#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 265824834
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(short p, int p_9, unsigned long p_11, char p_13,
                   double p_17)
{
  unsigned int v_21;
  long v_19;
  float v_15;
  unsigned int v_6;
  int v_4;
  long long v;
  unsigned short result;
  v_21 = (unsigned int)p_9;
  v_19 = (long)p_13;
  v_15 = -9.79165369823e+37f;
  v_6 = (unsigned int)p_11;
  v_4 = 792161944;
  v = (long long)p_13;
  result = (unsigned short)37548;
  while (0L != (long)(! p_9) * (v_19 & (long)(9064 / (p_9 + 830)))) {
    v = v_21 - 4294967211U;
    v_4 = ~ (((int)p + p_9) | (int)((short)-736243414.22) % ((int)p + 745));
    v_6 = (unsigned int)(v_4 + - (p_9 - v_4));
    v_19 = (long)p;
  }
  while_0_break: ;
  while ((2112LL + - v) % (long long)(((unsigned int)v_4 * v_6 ^ (unsigned int)(
                                       201 / ((int)p + 125))) + 710U) < (long long)(
         (unsigned long)((v_4 & -12188) * - p_9) - (0UL ^ (p_11 + (unsigned long)p_13)))) {
    result = (double)v_15 - 2990542507.17;
    v = (long long)(- p_17);
    v = (long long)((double)v_4 * (((double)p_9 - p_17) / ((double)(v ^ (long long)p) + 90.)));
    v_6 = (unsigned int)p_13;
  }
  while_0_break_0: ;
  return result;
}


