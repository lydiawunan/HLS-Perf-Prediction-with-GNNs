#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 999237998
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, long p_5[4], long long p_7[3][2][5], int p_9,
                   unsigned short p_11)
{
  unsigned int v_25;
  char v_23;
  char v_21;
  long v_19;
  unsigned long long v_17;
  long long v_15;
  unsigned char v_13;
  unsigned short v;
  unsigned short result;
  v_25 = (unsigned int)p_5[1];
  v_21 = (char)89;
  v_19 = 9158L;
  v_17 = 18446744072999107724ULL;
  v_15 = 23305LL;
  v = (unsigned short)26830;
  result = (unsigned short)51855;
  if ((unsigned long long)(51782L - (v_19 ^ 2559L)) - 56065ULL < (unsigned long long)p_11) {
    v_13 = (unsigned char)((unsigned long)(~ (- v)) * ((unsigned long)(
                                                       (long)p * v_19) % (
                                                       (unsigned long)v_21 * 4294910602UL + 528UL)));
    v = (unsigned short)((unsigned long long)(! (-85066063L / (long)(
                                                 (int)v_13 + 457))) * (
                         (unsigned long long)(! v_15) + (v_17 ^ 21245ULL)));
    v = (unsigned short)(((long long)((double)v + p) | ((long long)p_5[0] | p_7[2][1][4])) - (long long)(
                         (long)(-548765619 + p_9) / (((long)p_11 - p_5[3]) + 620L)));
  }
  else {
    v_23 = (char)((long long)((unsigned int)p % ((v_25 - 34994632U) + 732U)) * (
                  (long long)(! result) + -980269393LL));
    v_21 = (char)p;
    v = (unsigned short)((int)v_21 * (int)((char)((double)((int)v_23 + 13234) * (
                                                  p - 18471.))));
  }
  result = v;
  return result;
}


