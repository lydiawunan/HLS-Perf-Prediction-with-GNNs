#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 943350569
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned short p[2][3][4], unsigned short p_5, double p_13,
                 signed char p_15, long long p_17)
{
  char v_21;
  unsigned long long v_19;
  char v_11;
  long long v_9;
  char v_7;
  char v;
  unsigned int result;
  v_21 = (char)p_17;
  v_19 = 18446744073709502435ULL;
  v_11 = (char)p_5;
  v_7 = (char)-92;
  result = 3893523593U;
  v_9 = (long long)(((unsigned long long)(p_17 | (long long)p_5) - v_19 / (unsigned long long)(
                                                                   p_17 + 431LL)) / (unsigned long long)(
                    (p_17 % (long long)((int)p_15 + 688)) / ((long long)(- p_13) + 905LL) + 265LL) - (unsigned long long)(
                    (long)(-1.86189017593e+18 + (double)(26027UL * (unsigned long)result)) + (
                    (long)((int)v_11 * (int)p[0][0][3]) & (670034921L & (long)v_21))));
  result = (unsigned int)(4294967295LL / (((long long)v_7 + v_9) * (long long)(
                                          (int)v_11 | (int)((char)p_13)) + 406LL) << (
                          (unsigned int)(1.53477406502f + (float)p_15) % (
                          4120416296U % (unsigned int)((int)p_15 + 148) + 492U) & 63U));
  v = (char)120;
  result = (((result | (unsigned int)p[1][1][2]) - (unsigned int)(~ v)) - (
            - result - (unsigned int)((int)p_5 - -544818818))) & (unsigned int)(~ p[1][0][3]);
  return result;
}


