#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1028611683
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, int p_15, long long p_19)
{
  int v_21;
  float v_17;
  unsigned char v_13;
  long long v_11;
  unsigned int v_9;
  long v_7;
  unsigned char v_5;
  char v;
  unsigned int result;
  v_21 = -940096148;
  v_17 = (float)p_15;
  v_13 = (unsigned char)p_15;
  v_9 = (unsigned int)p_19;
  v_7 = 49535L;
  v_5 = (unsigned char)25;
  result = 40226U;
  v_13 = (unsigned char)((long long)(0U / ((unsigned int)(- p) % (result + 60U) + 402U)) + (
                         ((long long)((int)v_13 - (int)((unsigned char)v_17)) + 
                          (long long)result % (p_19 + 305LL)) + (long long)(
                         (int)p / (v_21 + 297) + 85)));
  v = (char)((int)(- (~ v_13)) | p_15);
  v_11 = (long long)(-3294796532U);
  result = (unsigned int)((long long)((int)p * ((int)(- v) % ((int)v / (
                                                              (int)p + 863) + 508))) / (
                          ((long long)((unsigned long)((long)v_5 + v_7) - (unsigned long)v_9) & (
                           (long long)2.85618441842e+38 - (v_11 & (long long)v_7))) + 154LL));
  return result;
}


