#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 65230536
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(int p, float p_11, short p_13)
{
  double v_9;
  char v_6;
  unsigned long long v_4;
  unsigned int v;
  unsigned long long result;
  v_9 = -109.689020421;
  v_6 = (char)50;
  v_4 = 26204ULL;
  v = (unsigned int)(~ ((int)(v_9 * (double)p_11) << (-117 / ((int)p_13 + 351) & 31)) + ! (
                     (int)p_13 & (int)v_6 % ((int)((char)p_11) + 323)));
  v_6 = (char)(~ (- (~ (v | (unsigned int)p))));
  v = (unsigned int)(! ((int)((signed char)((double)p - v_9)) - -120) + ! (
                     33439 + (int)((unsigned short)5477923840.f)));
  result = - (0ULL % ((unsigned long long)v * v_4 + 170ULL)) << (! ((int)(- v_6) ^ 62100) & 63);
  return result;
}


