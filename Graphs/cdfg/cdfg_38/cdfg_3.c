#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 654950761
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(double p[4][5], long p_7)
{
  unsigned char v_15;
  char v_13;
  char v_11;
  long long v_9;
  unsigned long long v_5;
  unsigned long long v;
  int result;
  v_15 = (unsigned char)p[0][3];
  v_13 = (char)61;
  v_11 = (char)119;
  v_9 = -23373LL;
  v_5 = (unsigned long long)p[3][0];
  v = (unsigned long long)p[3][4];
  result = (int)p[2][1];
  v_13 = (char)((unsigned long long)((long long)(947962449U - (unsigned int)v_13) / (
                                     (long long)v_13 * v_9 + 605LL)) % (
                ((unsigned long long)((long)v_13 * p_7) + (130ULL - v)) + 98ULL));
  while ((unsigned long long)(- p[0][2] * (double)v) - (! v_5 - v_5) >= 
         (unsigned long long)(((long long)p_7 * v_9) % 194844031LL) + (
         (unsigned long long)((long)v_11 + p_7) + v / (unsigned long long)(
                                                  (int)v_13 + 154))) {
    v = (unsigned long)v_15 & 3993526200UL;
    v_15 = (unsigned char)-2.03690499728e+38f;
    v_9 = (long long)(- (p[3][2] - (double)p_7 / (p[3][4] + 644.)));
    v_5 = (unsigned long long)((long long)(0.269508050035 * (double)(
                                           (unsigned long long)p_7 + v)) & 
                               v_9 * ~ v_9);
  }
  while_0_break: ;
  return result;
}


