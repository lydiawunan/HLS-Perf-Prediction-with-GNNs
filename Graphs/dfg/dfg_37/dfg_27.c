#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 856178500
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p[4][5][4], double p_5, long long p_11,
          unsigned long long p_13)
{
  char v_15;
  int v_9;
  short v_7;
  unsigned long v;
  short result;
  v_15 = (char)-82;
  v_9 = (int)p_13;
  v = (unsigned long)p_5;
  result = (short)p_13;
  v_7 = (short)v;
  v = (unsigned long)((unsigned long long)(4294936132U % (unsigned int)(
                                           (int)v_7 * 64267 + 227)) % (
                      (unsigned long long)((unsigned long)v_9 - v) / (
                      ((unsigned long long)(p_11 / (long long)((int)result + 692)) - (
                       p_13 + (unsigned long long)v_15)) + 748ULL) + 665ULL));
  v = (unsigned long)p[0][1][3] ^ (4294929810UL / ((unsigned long)(-960023925. * p_5) + 454UL)) * ~ (
                                  4294936013UL * v);
  result = (short)(- v);
  return result;
}


