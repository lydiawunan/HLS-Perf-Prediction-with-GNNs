#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 290644393
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p, long p_5, signed char p_7, char p_9, short p_15)
{
  int v_25;
  unsigned long v_23;
  short v_21;
  char v_19;
  unsigned long v_17;
  float v_13;
  long v_11;
  long long v;
  float result;
  v_25 = -57567;
  v_23 = (unsigned long)p;
  v_21 = (short)-9517;
  v_19 = (char)2;
  v_17 = (unsigned long)p_9;
  v_13 = (float)(((v_17 + (unsigned long)p) * (unsigned long)(~ p_5) - (unsigned long)(
                  ((int)v_19 - (int)p_9) & (int)v_21)) / ((unsigned long)p_7 / (
                                                          (~ v_23 + (unsigned long)(
                                                           v_25 * (int)p_9)) + 811UL) + 1023UL));
  v_11 = (long)(! (4294987983LL / (long long)((int)(! p_15) + 480)) * 53854LL);
  v = (long long)(- ((long)p_7 % (((long)p_9 - v_11 * (long)v_13) + 246L)));
  result = (float)((- ((long long)p * v) + (long long)(- p_5)) * 311247385LL);
  return result;
}


