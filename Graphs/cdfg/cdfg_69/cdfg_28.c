#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 512516266
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(float p, unsigned long long p_11, char p_15)
{
  unsigned long v_21;
  unsigned short v_19;
  unsigned short v_17;
  unsigned long long v_13;
  int v_9;
  long v_7;
  unsigned short v_5;
  unsigned short v;
  long long result;
  v_21 = (unsigned long)p;
  v_19 = (unsigned short)p;
  v_17 = (unsigned short)27981;
  v_13 = (unsigned long long)p;
  v_9 = -36347;
  v_7 = (long)p;
  v_5 = (unsigned short)2497;
  v = (unsigned short)5086;
  result = -56703LL;
  while (v_9 == (int)((double)((int)((unsigned short)(- p)) * (int)(~ v_17)) + (
                      (double)(p_11 % (v_13 + 1012ULL)) + -727.361440421))) {
    v_5 = (unsigned long long)v_21 - ((unsigned long long)v_19 - 18446744073326112011ULL);
    v_9 = (int)v - (28711824 - ((int)v_5 + (int)v_5));
    v_13 = ((p_11 - p_11) * 18446744072638067409ULL) / (unsigned long long)(
           59251L / (long)((int)v_17 / 71 + 668) + 512L);
    v_17 = (unsigned short)(((int)((char)(- p)) / ((int)(~ p_15) + 497)) * (int)v_17);
  }
  while_0_break: ;
  while ((int)v != (int)((unsigned short)p)) {
    result = (long)v_9 * (v_7 - (long)((int)v_5 - 201));
    v_9 = 207568860;
    v_7 = (long)((unsigned long long)(128172223U % (142976898U % (unsigned int)(
                                                    (int)v + 104) + 551U)) / (
                 ~ v_13 % (unsigned long long)((int)p_15 + 588) + 798ULL));
    v = (unsigned short)((unsigned long long)(! result % -349LL) % (p_11 + 810ULL));
  }
  while_0_break_0: ;
  return result;
}


