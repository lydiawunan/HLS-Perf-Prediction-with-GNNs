#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 473488894
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned long p_7, unsigned int p_9[3][4][3],
         long long p_13, char p_15)
{
  float v_11;
  double v_5;
  unsigned int v;
  char result;
  v_11 = -8587177984.f;
  v_5 = -3.92948747976e+37;
  v = (unsigned int)v_11;
  result = (char)(1 % ((int)((-3.335939584e+38f - (float)((long long)p_15 - -49258LL)) - (float)p_15) + 487));
  v_11 = (float)(- (p_13 / (long long)((-174574064 * (int)1.65511094714e+38f) % (
                                       (-93 + (int)((char)v_11)) + 321) + 221)));
  result = (char)((long long)((unsigned int)(((int)p - (int)result) * (int)result) + ~ (- v)) * (
                  (long long)((unsigned int)(v_5 + (double)p_7) / (p_9[0][1][0] / (
                                                                   (unsigned int)v_11 + 77U) + 878U)) ^ p_13));
  return result;
}


