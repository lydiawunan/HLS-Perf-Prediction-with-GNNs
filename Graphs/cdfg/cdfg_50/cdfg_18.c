#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 213490745
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(signed char p, long p_7, float p_19[5][2][3],
                       double p_23[5], unsigned long long p_29)
{
  float v_27;
  unsigned long v_25;
  char v_21;
  unsigned long v_17;
  unsigned char v_15;
  unsigned long long v_13;
  unsigned int v_11;
  double v_9;
  int v_5;
  unsigned long v;
  unsigned long long result;
  v_27 = 4.65283597616e+37f;
  v_25 = (unsigned long)p_19[1][1][0];
  v_21 = (char)126;
  v_15 = (unsigned char)p_19[2][1][0];
  v_11 = (unsigned int)p_19[4][0][0];
  v_5 = -43865;
  result = p_29;
  if (((result & ! p_29) ^ (unsigned long long)(~ v_11 - (unsigned int)(
                                                751.349743615 + (double)v_25))) >= (unsigned long long)v_5) {
    v_9 = (double)(- ((unsigned int)p / (v_11 + 285U)) << 12LL);
    v_5 = (int)(! (unsigned short)15633);
    v = (unsigned long)((long)v_5 ^ (p_7 - (long)(- v_9)));
  }
  else {
    v_17 = (unsigned long)((unsigned long long)((int)v_21 + (int)((char)p_23[4])) / (
                           result + 633ULL) ^ (unsigned long long)((unsigned long)p_7 + (
                                                                   v_25 - (unsigned long)v_27)));
    v_13 = (unsigned long long)(- (- ((float)v_17 + p_19[1][1][1])));
    v = (unsigned long)(((v_13 + (unsigned long long)v_15) & 18446744073709543536ULL) & (unsigned long long)(
                        (int)p * (int)p));
  }
  result = (unsigned long long)(((int)p & (int)p) / ((57875 << (- v & 31UL)) + 599));
  return result;
}


