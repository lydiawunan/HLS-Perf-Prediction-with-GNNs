#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 23605087
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p[2], int p_4)
{
  unsigned long long v_17;
  unsigned int v_15;
  unsigned short v_13;
  short v_11;
  short v_9;
  long long v_7;
  unsigned long long v;
  float result;
  v_17 = (unsigned long long)p[1];
  v_15 = (unsigned int)p_4;
  v_11 = (short)11858;
  v_7 = 114475160LL;
  v = (unsigned long long)p[1];
  result = 86.9304275513f;
  v_13 = (unsigned short)(- (0 - ((unsigned int)((double)v / (p[1] + 666.)) + 3464937806U)));
  v_9 = (short)(123ULL % (~ v + 855ULL) - ((unsigned long long)((float)p_4 * result) * (
                                           (unsigned long long)v_15 - v_17)) % (unsigned long long)(
                                          - p_4 + 983));
  v = (unsigned long long)(! ((((int)v_9 + (int)((short)p[1])) | (int)v_11 % (
                                                                 (int)v_13 + 385)) & (int)(~ v_11)));
  result = (float)(p[1] / ((double)((unsigned long long)(124 - p_4) / (
                                    9115ULL / (v + 178ULL) + 1019ULL)) + 607.) + 
                   - ((double)v_7 - p[0]) * (double)v_7);
  return result;
}


