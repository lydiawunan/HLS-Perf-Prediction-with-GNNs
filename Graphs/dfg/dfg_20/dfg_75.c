#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 770952158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[2][1], unsigned long p_5, long long p_11, float p_19)
{
  long long v_21;
  long v_17;
  unsigned long long v_15;
  char v_13;
  char v_9;
  long long v_7;
  unsigned char v;
  double result;
  v_21 = (long long)p_19;
  v_17 = (long)p_5;
  v_15 = (unsigned long long)p[0][0];
  v_13 = (char)-37;
  result = (double)p_5;
  v_9 = (char)(- ((~ v_15 + (unsigned long long)(v_17 % ((long)result + 164L))) * (unsigned long long)(
                  p_19 * (float)(v_21 - 3500004173LL))));
  v_7 = (long long)((int)v_9 % -31676) % (~ p_11 * (54886LL % (long long)(
                                                    (int)v_13 + 324)) + 124LL);
  v = (unsigned char)v_7;
  result = (double)((unsigned long)(~ ((int)p[0][0] * (int)v | (int)(- v))) & (
                    23849UL + ~ (91UL % (p_5 + 350UL))));
  return result;
}


