#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 810507194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned int p, long long p_13, unsigned char p_15, float p_17,
              long long p_19)
{
  int v_21;
  char v_10;
  float v_8;
  unsigned long v_6;
  char v_4;
  unsigned char v;
  long long result;
  v_21 = 877208833;
  v_10 = (char)p;
  v_8 = (float)p_13;
  v_6 = (unsigned long)p;
  v_4 = (char)0;
  v = (unsigned char)65;
  result = -928405206LL;
  if (~ ((unsigned int)(- p_15) / (~ p + 893U)) <= (unsigned int)((float)(
                                                                  (unsigned long)-3.14306725506e+38f / 4294942088UL + (unsigned long)(! v_10)) - - (
                                                                  47.f + v_8))) {
    v_6 = (unsigned long)((long long)((float)p_15 * p_17 - (float)(p_13 + (long long)v_10)) | result);
    v_4 = (char)-72;
    result = ! (p_13 / -432418210LL) + -8809970691LL;
  }
  else {
    result = (long long)v_21;
    v_8 = (float)p_13;
    v_10 = (char)(((long long)v + (long long)p_15 % (p_19 + 351LL)) | (long long)(
                  -4056L << (p & 31U)));
  }
  while ((int)v == (int)v_4) {
    v = (int)v_10 % -115;
    result = (long long)(~ (- (~ p)));
    v_8 = (float)(((unsigned int)v_8 * ! p) * - (p | p));
    v_4 = (char)(~ (! v_6 | 58775UL));
  }
  while_0_break: ;
  return result;
}


