#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 105465967
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p, unsigned int p_11, unsigned short p_13, short p_19[5][3],
         float p_21)
{
  signed char v_23;
  signed char v_17;
  long v_15;
  double v_9;
  unsigned long v_7;
  unsigned long long v_5;
  signed char v;
  long result;
  v_23 = (signed char)p_11;
  v_17 = (signed char)p_13;
  v_15 = 15821L;
  v = (signed char)p_11;
  v_9 = (double)v_23;
  if (! (p_11 / (unsigned int)((int)(- v_17) + 383)) == (unsigned int)(~ (
      (int)((short)((float)p_19[2][2] - p_21)) ^ (int)p_19[1][1]))) {
    v_7 = (unsigned long)(- v_15);
    v_5 = (unsigned long long)(((double)(143UL ^ v_7) - v_9) - (double)(- (
                               p_11 + (unsigned int)p_13)));
    result = (long)((unsigned long long)(~ ((int)v - p)) % (18446744073709540837ULL / (
                                                            ~ v_5 + 655ULL) + 931ULL));
  }
  else result = 18052412L;
  return result;
}


