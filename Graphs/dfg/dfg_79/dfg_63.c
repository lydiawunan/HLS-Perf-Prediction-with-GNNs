#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 146419093
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(short p, unsigned long long p_13)
{
  char v_15;
  long v_10;
  char v_8;
  int v_6;
  unsigned long long v_4;
  float v;
  double result;
  v_15 = (char)p_13;
  v_4 = 18446744072826842994ULL;
  v = (float)p;
  result = -4682116635.7;
  v_8 = (char)p_13;
  v_10 = (long)((unsigned long long)((int)(! (~ p)) | (int)v_15) + p_13);
  v_6 = (int)v_8 / ((int)((char)((double)(- ((long)result - v_10)) + (
                                 -114.513836353 + (double)((unsigned long long)p + p_13)))) + 954);
  result = (double)((15 * (int)((char)(v / ((float)v_4 + 722.f)))) % (
                    v_6 + 918) ^ 152765378);
  return result;
}


