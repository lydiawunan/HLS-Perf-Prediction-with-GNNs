#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 18045693
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned long long p, char p_4, long p_9, float p_15,
                  char p_17[1][2][2])
{
  double v_13;
  unsigned short v_11;
  long long v_7;
  signed char v;
  unsigned char result;
  v_13 = (double)p;
  v_11 = (unsigned short)21154;
  v_7 = (long long)p_4;
  v = (signed char)11;
  result = (unsigned char)199;
  if (- ((unsigned long long)v & 47394ULL) / (unsigned long long)((int)(! (- result)) + 599) < (unsigned long long)p_4) {
    v_13 = (double)p_15;
    v = (signed char)116;
    v_11 = (unsigned short)((unsigned long long)((unsigned long)(-3861 * (int)v) | 4294923937UL) / (
                            p + 651ULL));
  }
  else {
    result = (unsigned char)((595124116L / (long)(((int)p_17[0][0][0] + (int)p_17[0][0][0]) + 498)) * ~ (
                             p_9 / (p_9 + 539L)));
    v_7 = (long long)result;
    result = (unsigned char)(! (18446744072713379641ULL * (unsigned long long)v_11));
  }
  while ((long long)v == - (v_7 - -27LL) + (long long)((long)6760960512.f + 997368514L) % (
                                           (-815504602LL >> (p_9 & 63L)) + 275LL)) {
    v_11 = (unsigned long long)v_11 % 18446744073709508227ULL;
    result = (unsigned char)(~ ((long)(105635566 / ((int)v_13 + 140)) ^ 
                                p_9 % (long)((int)v + 838)));
    v = (signed char)(~ p_9);
    v_7 = (long long)(- (- ((unsigned long long)v - p)));
  }
  while_0_break: ;
  return result;
}


