#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 925014269
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, short p_4, unsigned short p_6)
{
  int v_17;
  signed char v_15;
  unsigned long long v_13;
  unsigned short v_11;
  long long v_9;
  signed char v;
  double result;
  v_17 = 945545589;
  v_15 = (signed char)-84;
  v_11 = p_6;
  result = -2.51917784826e+38;
  v_9 = (long long)v_17;
  v_13 = 18446744073709524384ULL;
  v = (signed char)(((long)v_11 * -936120895L) * (long)(- (result / (
                                                           (double)v_13 + 30.))) ^ (long)v_15);
  result = (double)((long long)((-105 % ((int)p + 66)) / ((((int)p_4 | 62641) + 
                                                           (int)p_6 % (
                                                           (int)v + 790)) + 87)) % (
                    v_9 + 519LL));
  return result;
}


