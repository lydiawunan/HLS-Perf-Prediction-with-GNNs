#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1035874537
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(float p[4][3][4], signed char p_5, double p_7,
                unsigned int p_9[5], signed char p_17[3][3])
{
  char v_21;
  char v_19;
  unsigned int v_15;
  signed char v_13;
  int v_11;
  unsigned long long v;
  signed char result;
  v_21 = (char)p_17[2][0];
  v_15 = 4194394556U;
  v_13 = (signed char)92;
  result = (signed char)11;
  v_19 = (char)(~ result);
  v_11 = (int)(854585586. - ((double)((int)p_17[2][1] % ((int)p_17[0][1] % (
                                                         (int)v_19 + 296) + 574)) + (
                             p_7 * (double)v_21 - -102.)));
  v = (unsigned long long)((long long)p_9[4] + (long long)v_11 % -17807LL) / (
      (735014118ULL % (unsigned long long)((int)v_13 % -19108 + 45) >> (
       - v_15 % (unsigned int)(v_11 + 332) & 63U)) + 323ULL);
  result = (signed char)(v ^ (unsigned long long)(((int)((signed char)p[2][0][1]) / (
                                                   (int)result + 532) << (
                                                   (18567 + (int)((short)-6.30013018405e+37f)) & 31)) / (
                                                  (((int)p_5 >> 5) - 
                                                   (int)p_5 % ((int)((signed char)p_7) + 617)) + 604)));
  return result;
}


