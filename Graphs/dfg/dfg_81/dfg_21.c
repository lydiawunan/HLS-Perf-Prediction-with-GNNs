#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 173083060
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned char p, float p_5[5][3][5], long long p_7, char p_15,
         unsigned short p_17)
{
  signed char v_13;
  double v_11;
  short v_9;
  char v;
  long result;
  v_11 = 2.27328146831e+38;
  v_13 = (signed char)(! ((449872237 / ((int)p_15 + 446)) % ((int)-1.60991818912e+38f + 826)) + ~ (~ (
                       (int)p_17 & (int)p_17)));
  v_9 = (short)(- (- v_11 + (double)((long)v_13 * -1032173924L)) * (double)p_7);
  v = (char)v_9;
  result = (long)((long long)((int)p - (int)((unsigned char)((float)v / (
                                                             1.84467440737e+19f / (
                                                             p_5[3][2][1] + 480.f) + 593.f)))) + ~ (~ (
                  p_7 - 352962775LL)));
  return result;
}


