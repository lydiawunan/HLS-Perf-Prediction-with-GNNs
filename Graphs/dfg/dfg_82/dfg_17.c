#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 228020597
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long long p, char p_5, long p_11, short p_13)
{
  double v_19;
  signed char v_17;
  int v_15;
  unsigned short v_9;
  double v_7;
  double v;
  unsigned int result;
  v_19 = (double)p;
  v_17 = (signed char)50;
  v_15 = 33216;
  v_9 = (unsigned short)39457;
  v_15 = - (! v_15 >> ((int)v_17 & 31)) % ((int)v_19 + 23);
  v = (double)((unsigned long long)(! (~ ((int)v_9 / 22045))) - ((unsigned long long)(- (
                                                                 p_11 / (long)(
                                                                 (int)p_13 + 853))) - 
                                                                 ((unsigned long long)v_15 + 57689ULL) / 835ULL));
  v_7 = (double)((unsigned long long)1.37747650163e+38f - (18446744072997345676ULL >> (
                                                           (unsigned long long)-338.813658402 & 63ULL)));
  result = (unsigned int)(((long long)((int)((unsigned char)v) % 126) * ~ p << (
                           ! ((unsigned long)p_5 * 4294936399UL) & 63UL)) / (long long)(
                          (long)p_5 / (! ((long)v_7 % 62945L) + 680L) + 627L));
  return result;
}


