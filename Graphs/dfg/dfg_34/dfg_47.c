#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 568469648
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(int p, signed char p_4[5][1][2], signed char p_9,
              short p_11[5][1], unsigned int p_13[3][5][4])
{
  double v_15;
  long long v_7;
  long long v;
  long long result;
  v_15 = -3.16650523467e+38;
  v = -23556LL;
  v_7 = (long long)(176262651U * (unsigned int)((((int)((short)v_15) - (int)p_11[0][0]) * (int)(~ p_9)) % (
                                                (int)p_11[1][0] + 527)));
  result = (long long)((-1.00130351849e+38f * (float)(! v) + (float)p / (
                                                             -319.228179932f * (float)v_7 + 250.f)) + (float)(
                       (unsigned int)-8575823983.16 * ((unsigned int)(
                                                       (int)p_9 + (int)p_11[1][0]) - ! p_13[1][3][1])));
  v = ~ (0LL % (113LL / (result + 1020LL) + 513LL)) + (long long)(~ (~ p));
  result = (long long)(- ((unsigned long long)((long long)(p % -17769) % (
                                               result + 905LL)) + (unsigned long long)p_4[3][0][0] / (
                                                                  ((unsigned long long)v + 18446744072684185671ULL) + 763ULL)));
  return result;
}


