#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 30768967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(signed char p, char p_5, unsigned long p_11, char p_13,
        unsigned int p_17)
{
  unsigned char v_21;
  unsigned long v_19;
  float v_15;
  unsigned char v_9;
  float v_7;
  long long v;
  int result;
  v_21 = (unsigned char)13;
  v_19 = (unsigned long)p_5;
  v_9 = (unsigned char)p_11;
  v_7 = (float)(~ p_5);
  v_15 = (float)(((unsigned long)(p_17 % (unsigned int)((int)p_13 + 252)) | v_19) / (unsigned long)(
                 (int)v_9 + 179) + (unsigned long)(4294898691U + (unsigned int)(~ (~ v_21))));
  v = (long long)((unsigned long)((202581902U >> ((int)(- p_5) & 31)) % (
                                  (unsigned int)((1.40208770375e+38 + (double)v_7) - (double)(
                                                 (int)p + (int)v_9)) + 747U)) + ! (
                  p_11 / (unsigned long)((int)p_13 * (int)((char)v_15) + 163)));
  result = (int)(((v - 21353LL) / (long long)((int)p + 236)) * -79LL);
  return result;
}


