#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944749469
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, double p_5, char p_11)
{
  char v_9;
  float v_7;
  unsigned short v;
  unsigned long long result;
  v = (unsigned short)676;
  v_9 = (char)(0 / (unsigned int)((int)p_11 + 493));
  v_9 = (char)(- (- ((double)v_9 + (p_5 - 4294918373.))));
  v_7 = (float)((unsigned long)(- (~ (580321674L % (long)((int)v_9 + 361)))) / (unsigned long)(
                ((unsigned int)(p_5 * 3670.) - (unsigned int)p / 3749773606U) / (unsigned int)(
                p + 167) + 535U));
  result = (unsigned long long)(- ((unsigned long)(! v) / ((unsigned long)p * 3926983799UL + 50UL)) + (
                                4294967281UL * ((unsigned long)p_5 % 17557UL) >> (
                                (unsigned long)v_7 & 31UL)));
  return result;
}


