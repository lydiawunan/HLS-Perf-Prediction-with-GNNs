#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 597029623
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(int p, unsigned int p_4, signed char p_6,
                  unsigned short p_11, float p_13)
{
  unsigned char v_25;
  unsigned long long v_23;
  long long v_21;
  unsigned long long v_19;
  unsigned long v_17;
  unsigned int v_15;
  long long v_9;
  float v;
  unsigned long result;
  v_25 = (unsigned char)p_4;
  v_23 = (unsigned long long)p_4;
  v_21 = 794726618LL;
  v_15 = (unsigned int)p_11;
  v_9 = -31815LL;
  v_17 = 189538320UL;
  if ((double)(- (v_23 % (unsigned long long)(p + 324))) + 955.632925954 == (double)(
      ((unsigned long long)v_21 * ((unsigned long long)p / (v_23 + 251ULL))) / (
      (18446744073709525440ULL - (unsigned long long)((int)v_25 / ((int)v_25 + 143))) + 275ULL))) {
    v_9 = (long long)(! ((int)p_11 | (int)((unsigned short)p_13))) % (
          v_9 + 951LL);
    v = (float)v_9;
    result = (unsigned long)(0U / ((p_4 / (unsigned int)((int)p_6 + 661) + (unsigned int)(
                                    p << ((int)v & 31))) + 480U));
  }
  else {
    v_19 = (unsigned long long)p_4 + (unsigned long long)(! v_21) * 437176633ULL;
    v_15 = (unsigned int)((unsigned long long)((unsigned long)v_15 + (
                                               v_17 - (unsigned long)p_4)) % (
                          v_19 + 644ULL));
    result = (unsigned long)((unsigned int)(- (41015 ^ p)) + v_15);
  }
  return result;
}


