#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 218882441
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned long long p[3][2], unsigned int p_5, int p_7, float p_15,
        long long p_17)
{
  unsigned long v_19;
  signed char v_13;
  unsigned long long v_11;
  long long v_9;
  signed char v;
  int result;
  v_19 = (unsigned long)p_7;
  v_13 = (signed char)127;
  v_9 = 1063401075LL;
  result = (int)p_5;
  v_11 = (unsigned long long)((long long)(p_15 + (float)p_17) / (v_9 + 704LL) - 
                              ((long long)((int)v_13 / 34616) - - p_17) * (long long)(
                              (unsigned long)(~ result) % (((unsigned long)p_7 - v_19) + 751UL)));
  v = (signed char)((unsigned long long)(- (- (6321 % (p_7 + 452)))) * (
                    ! ((unsigned long long)v_9 % (v_11 + 358ULL)) / (unsigned long long)(
                    (int)v_13 + 299)));
  result = (int)(~ (p[0][0] - (unsigned long long)p_5));
  result = (int)(((unsigned long long)(! ((long)result * -1052376729L)) & 
                  (unsigned long long)v % ((p[1][0] + 18446744073709525717ULL) + 341ULL)) * 52751ULL);
  return result;
}


