#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 250595985
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, char p_7, signed char p_13, char p_15,
          unsigned long long p_19)
{
  long v_17;
  int v_11;
  long long v_9;
  double v_5;
  unsigned short v;
  float result;
  v_17 = (long)p_7;
  v_11 = 29670;
  v_9 = (long long)p_19;
  v_5 = (double)(~ ((unsigned long long)(4294944901LL - v_9) / (((unsigned long long)(
                                                                 (long)p + v_17) + 
                                                                 (unsigned long long)p_13 / (
                                                                 p_19 + 692ULL)) + 550ULL)));
  v_9 = - ((long long)(! (- p)) | ((long long)(-11235 - (int)p_7) - 728234999LL));
  v = (unsigned short)(((~ v_9 + ((long long)v_11 + -605452470LL)) & (long long)(
                        v_11 - (int)(~ p_13))) % (long long)((- ((int)p_7 + (int)p_15) >> (
                                                              v_17 & 31L)) + 529));
  result = (float)((long long)((double)(((int)((char)-3.21056305774e+38f) | -39) % (
                                        (int)v % ((int)p + 219) + 355)) * - (- v_5)) * (
                   (long long)p_7 - v_9));
  return result;
}


