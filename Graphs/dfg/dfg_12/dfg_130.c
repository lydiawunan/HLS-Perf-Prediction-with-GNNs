#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 380802304
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p[2][2][2], unsigned long p_4, unsigned int p_9,
          long p_11[2][4])
{
  long v_7;
  long long v;
  short result;
  v_7 = p_11[1][3];
  result = (short)p_11[0][2];
  v = (long long)(~ p_11[1][3]);
  v_7 = (long)(-729203063LL + (long long)(~ (v_7 * 179L)));
  result = (short)(~ v / ((long long)v_7 % ((long long)(p_4 * (unsigned long)result) * (
                                            (long long)p_9 / (v + 930LL)) + 512LL) + 72LL));
  result = (short)(4294957744UL - ((unsigned long)p[1][0][0] - (unsigned long)result % 22422UL) / (
                                  (469984898UL ^ (p_4 - 25076UL)) + 250UL));
  return result;
}


