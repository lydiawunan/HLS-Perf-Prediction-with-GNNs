#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 77215678
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned int p, char p_4, unsigned long p_6[3][2], char p_8,
           int p_11)
{
  int v_15;
  short v_13;
  unsigned char v;
  double result;
  v_15 = p_11;
  v_13 = (short)-25689;
  if ((unsigned long long)p == (unsigned long long)(0UL - ! p_6[0][0]) / (
                               (((unsigned long long)p_8 - 18446744073370849705ULL) + (unsigned long long)(
                                (int)v_13 + v_15)) + 703ULL)) {
    result = (double)(! (- (p_6[0][0] * (unsigned long)p_8)));
    result = (double)((9345U - (unsigned int)result) % (unsigned int)(
                      51 % ((int)((char)result) + 673) + 304) - (p + 
                                                                 p * (unsigned int)p_4));
  }
  else {
    v = (unsigned char)(-(char)122);
    result = (double)(! (343985034LL % (long long)((int)v + 409)) - (long long)(! p_11));
  }
  return result;
}


