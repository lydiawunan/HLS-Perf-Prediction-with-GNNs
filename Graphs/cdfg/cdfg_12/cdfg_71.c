#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 254752490
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p[2][3][4], long long p_7[4][1][1], unsigned long p_9,
           unsigned char p_11, unsigned long long p_13)
{
  unsigned long long v_21;
  unsigned short v_19;
  long long v_17;
  unsigned long long v_15;
  char v_5;
  double v;
  double result;
  v_21 = 18446744073709512865ULL;
  v_19 = (unsigned short)54034;
  v_17 = p_7[1][0][0];
  v_15 = (unsigned long long)p_7[0][0][0];
  if ((unsigned long long)((v_17 & (p_7[2][0][0] | (long long)v_19)) << (
                           p_9 & 63UL)) < 4294967175ULL) v = (double)(! (-65169L));
  else {
    v_5 = (char)((unsigned long long)p_7[0][0][0] - (p_13 | 4294911001ULL) % (
                                                    (unsigned long long)p[0][0][3] % (
                                                    v_15 + 834ULL) + 421ULL));
    v_5 = (char)((unsigned long long)((63355 + (int)p_11) - (int)(- v_5)) + 348045208084932ULL);
    v = (double)(((long long)(! v_5) + - p_7[0][0][0]) | (long long)p_9);
  }
  result = (double)(! (~ ((int)p[1][0][3] - (int)((short)v))));
  return result;
}


