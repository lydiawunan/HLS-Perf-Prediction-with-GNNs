#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 698222871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned int p, signed char p_5[1][1][4], long long p_7[1],
                 short p_13, short p_15)
{
  unsigned int v_19;
  char v_17;
  char v_11;
  unsigned int v_9;
  float v;
  unsigned int result;
  v_19 = 3758233288U;
  v_11 = (char)103;
  v_9 = 38519U;
  v_17 = (char)74;
  v = (float)(- ((long long)((unsigned long)(-54088L + (long)p_13) % 29382UL) % (
                 ((long long)v_9 % 16887LL) * (long long)((unsigned int)v_17 ^ v_19) + 501LL)));
  v_9 = (unsigned int)(0UL - (unsigned long)((long)((int)(~ v_11) - (int)p_13) ^ 
                                             -75L / (-24981L / (long)(
                                                     (int)p_15 + 647) + 265L)));
  result = (unsigned int)((long long)((unsigned int)v / (p + 969U)) + (
                          (long long)(7279UL * ((unsigned long)p_5[0][0][2] ^ 4063471434UL)) - 
                          p_7[0] % (long long)((v_9 + 4294967241U) + 647U)));
  return result;
}


