#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 738749639
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, unsigned char p_4, unsigned long long p_11[1],
                 long long p_19, double p_21[5])
{
  unsigned short v_17;
  unsigned short v_15;
  int v_13;
  unsigned short v_9;
  short v_7;
  long v;
  unsigned int result;
  v_17 = (unsigned short)29638;
  v_15 = (unsigned short)21062;
  v_9 = (unsigned short)11697;
  result = (unsigned int)p_19;
  v = (long)((double)((long long)(25926U % (unsigned int)((int)v_17 + 701)) * (
                      (long long)v_9 / ((p_19 + (long long)p_21[0]) + 772LL))) / (
             (-9.65359675897e+42 / ((double)(! result) + 914.)) * (double)(
             (unsigned long long)p_4 | (39595ULL & (unsigned long long)p_4)) + 914.));
  v_13 = (int)(! v_15);
  v_7 = (short)(((((unsigned long long)v_13 / (p_11[0] + 35ULL)) % (unsigned long long)(
                  (int)(~ v_9) + 450)) / (unsigned long long)(((int)(! p) + (int)(! p)) + 802)) % (
                p_11[0] + 553ULL));
  result = (unsigned int)((unsigned long long)((long)((7849 % ((int)p + 104)) / (
                                                      (int)p_4 + 728)) * (
                                               ! v - (long)(! p_4))) - 
                          ((unsigned long long)(! v_7) / (((unsigned long long)v_9 - p_11[0]) + 597ULL)) % (unsigned long long)(
                          - ((int)p ^ 53929) + 801));
  return result;
}


