#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 183704005
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(char p[2], short p_4, short p_7, unsigned char p_13, short p_19)
{
  long long v_21;
  unsigned long long v_17;
  float v_15;
  unsigned long long v_11;
  long long v_9;
  unsigned long v;
  double result;
  v_21 = (long long)p_19;
  v_15 = (float)p_7;
  v_11 = 58284ULL;
  v_9 = 33491LL;
  result = -9.45900450646e+37;
  v_17 = (unsigned long long)(((double)((int)p_7 - -13) - ((double)v_21 - result)) / (
                              (double)(- v_9) + 429.));
  if (((unsigned long long)((double)v_17 * 160.903408314) | (- v_11 - (unsigned long long)p_19)) != (unsigned long long)(- (
      - v_9 - (long long)(738222987U >> 16ULL)))) {
    v = (unsigned long)((int)p_4 % ((int)(- p_7) + 297) - 16154);
    result = (double)(((unsigned long long)(-121 / ((int)p_4 + 568)) % (
                       ((unsigned long long)v + 25092ULL) + 297ULL)) * (unsigned long long)(
                      -2.64984207737e+38 / (result + 122.)));
    result = (double)(- ((int)p[0] + (int)((char)result)));
  }
  else {
    v_11 = (unsigned long long)(51099 - ! ((int)((short)v_15) % ((int)p_4 + 814)));
    v_9 = (long long)(- p_7);
    result = (double)((unsigned long long)(! ((long long)p[1] / (v_9 + 953LL))) % (
                      (v_11 % (unsigned long long)((int)p[0] + 305)) / (unsigned long long)(
                      (int)p_13 + 530) + 120ULL));
  }
  return result;
}


