#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 529392271
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p, long p_5, signed char p_9[5][3][4], long p_11[2],
          long long p_15)
{
  unsigned long v_17;
  unsigned int v_13;
  short v_7;
  char v;
  float result;
  v_17 = 200322662UL;
  v_13 = 3519951990U;
  v_7 = (short)-11139;
  v = (char)(- (3246880020LL % (p_15 / (long long)(v_17 + 769UL) + 828LL) - (long long)(- (
                p - -20081.))));
  v = (char)((unsigned long)((long)v - - p_5) - ((unsigned long)((int)(
                                                                 27044. / (
                                                                 p + 869.)) >> (
                                                                 -121 / (
                                                                 (int)v_7 + 662) & 31)) + 
                                                 (unsigned long)((long)p_9[0][2][2] + p_11[0]) / (unsigned long)(
                                                 ~ v_13 + 314U)));
  result = (float)((int)(! v) / ((int)((char)p) + 768));
  return result;
}


