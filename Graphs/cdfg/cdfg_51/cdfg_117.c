#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 56041746
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(int p[3][2], long p_4[2][5], unsigned int p_6,
                 long long p_9, float p_11)
{
  signed char v_29;
  double v_27;
  unsigned long v_25;
  unsigned long long v_23;
  double v_21;
  unsigned long long v_19;
  unsigned int v_17;
  float v_15;
  char v_13;
  double v;
  unsigned int result;
  v_29 = (signed char)-81;
  v_27 = (double)p_11;
  v_25 = 3482252908UL;
  v_23 = (unsigned long long)p[0][0];
  v_21 = (double)p_4[1][0];
  v_19 = 18446744073709510025ULL;
  v_17 = 32617U;
  v_15 = (float)p[0][0];
  v_13 = (char)48;
  while ((unsigned long long)(- ((long long)v_17 / (p_9 + 32LL)) * (long long)(~ (~ p[2][0]))) != 
         (~ v_19 + (unsigned long long)(- v_21)) % ((unsigned long long)(- v_15) + 493ULL)) {
    v_19 = (unsigned long long)((- v_25 & (unsigned long)(- v_27)) - (unsigned long)(~ (
                                -627656718L + (long)v_29)));
    v_21 = (double)((unsigned long long)(- (-13974.f + p_11)) / (! v_23 % (
                                                                 (unsigned long long)v_15 * v_23 + 972ULL) + 148ULL));
    v_17 = (unsigned int)(- (- p[1][1]));
  }
  while_0_break: ;
  if ((long long)(p_11 * ((float)v_13 / (v_15 + 219.f))) + 3443LL % (
                                                           p_9 / (p_9 + 167LL) + 56LL) <= 1343706LL) 
    result = (unsigned int)(- (59L - (-19501L - (long)p[1][0])));
  else {
    v = (double)p_9;
    result = (unsigned int)((double)(- ((unsigned long)p_4[1][3] % (unsigned long)(
                                        p_6 + 87U))) + v);
  }
  return result;
}


