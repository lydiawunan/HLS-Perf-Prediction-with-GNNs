#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 105612125
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p, double p_9, unsigned char p_11, float p_15)
{
  unsigned char v_13;
  double v_7;
  float v_5;
  unsigned char v;
  double result;
  v_13 = (unsigned char)149;
  v_7 = (double)p_11;
  v_5 = 3.29932172171e+38f;
  v = (unsigned char)50;
  result = (double)p_15;
  v_7 = ((double)p_15 + v_7) / (double)((v_5 - 1639.f) + 875.f);
  v = (unsigned char)((~ ((int)p % -13785) - (int)(- p) % (((int)v - (int)((unsigned char)p_9)) + 874)) % (
                      (int)((double)((unsigned long long)(! p_11) + 18446744072756158044ULL / (unsigned long long)(
                                                                    (int)v_13 + 83)) / (
                            v_7 + 716.)) + 9));
  result = ((double)((int)(- v) % 39) - ((double)v_5 * result + v_7)) - 4884.;
  result = (-5317209600. - - ((double)p / (result + 655.))) + 92.;
  return result;
}


