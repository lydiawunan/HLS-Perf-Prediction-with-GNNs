#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 76970194
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p[2][2][4], short p_9, long p_11[3][3])
{
  float v_7;
  float v_5;
  char v;
  unsigned char result;
  v_7 = -1.86434773262e+38f;
  v_5 = (float)p_9;
  result = (unsigned char)217;
  v = (char)(13000ULL - (unsigned long long)((-464265154L * (long)p_9) / (
                                             p_11[1][0] + 1005L)));
  while ((unsigned long)((((int)((unsigned char)5948050677.83) + (int)result) / (
                          57348 * (int)v + 520)) / (- p[1][0][3] + 341)) <= - (
         (unsigned long)((int)v + (int)((char)v_5)) % 43469UL)) {
    v_5 = v_7 + -22356.f;
    v_7 = (float)(~ ((unsigned long long)(19709 % ((int)p_9 + 500)) / 4294929819ULL));
    result = (unsigned char)(69.f + v_7);
    v = (char)result;
  }
  while_0_break: ;
  return result;
}


