#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 112039937
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, char p_9, unsigned short p_11[4], char p_13,
                 long long p_19[2][5])
{
  long v_17;
  unsigned long v_15;
  char v_7;
  unsigned char v_4;
  long v;
  unsigned int result;
  v_17 = (long)p_13;
  v_7 = (char)111;
  v_4 = (unsigned char)146;
  result = (unsigned int)p_11[1];
  v = (long)(- ((long long)((long)v_7 / (v_17 + 609L)) ^ -12LL / (p_19[1][0] + 487LL)) % (
             (0LL % (p_19[1][1] / 39628LL + 294LL)) % (p_19[0][1] + 663LL) + 30LL));
  v_15 = 4077513095UL;
  result = (unsigned int)((((unsigned long)result * (unsigned long)(v * (long)p_11[3])) % (
                           ((unsigned long)result * (unsigned long)p) * (unsigned long)(
                           (int)p_13 - (int)p_13) + 822UL)) % (v_15 + 236UL));
  result = (unsigned int)(~ (((unsigned long)(v >> ((int)v_4 & 31)) * (
                              (unsigned long)p * (unsigned long)result)) / (unsigned long)(
                             (long)(58906 - (int)v_7) % ((long)p_9 / (
                                                         p + 184L) + 402L) + 414L)));
  return result;
}


