#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 154891494
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, int p_7, short p_13, unsigned int p_15, unsigned int p_17)
{
  long long v_21;
  char v_19;
  char v_11;
  int v_9;
  unsigned char v_5;
  int v;
  short result;
  v_21 = 561366216LL;
  v_19 = (char)p_13;
  v_11 = (char)p_7;
  v_9 = (int)p_15;
  v = (int)((long long)((int)v_19 - p_7) - ((4294927167LL / (v_21 + 614LL) + (long long)(
                                             4294959890U ^ p_15)) + -1030598737LL));
  v_5 = (unsigned char)(p_17 * (unsigned int)v);
  result = (short)((unsigned int)v * (((unsigned int)p * 4294952555U) % (unsigned int)(
                                      ((int)v_5 - p_7) + 724)) | (unsigned int)(
                                                                 ~ v_9 - 
                                                                 (int)v_11 % (
                                                                 (int)p_13 + 410)) * (
                                                                 38046U - ! p_15));
  result = result;
  return result;
}


