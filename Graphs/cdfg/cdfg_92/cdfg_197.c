#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 973049506
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(double p, char p_5, unsigned long p_7, short p_9, long p_11)
{
  double v_21;
  int v_19;
  unsigned long long v_17;
  int v_15;
  unsigned long v_13;
  unsigned long v;
  unsigned long result;
  v_21 = 909.633002698;
  v_19 = (int)p_7;
  v_17 = (unsigned long long)p;
  v_13 = 3519191968UL;
  v = 3678137964UL;
  result = (unsigned long)p_11;
  if ((double)(v_13 * v) == v_21) {
    v_13 = - ((unsigned long)1.68842251102e+38 * ! result);
    result = (unsigned long)((unsigned long long)result + - (v_17 - (unsigned long long)p_9));
    v_15 = -707477371;
  }
  else {
    v_15 = -502364592;
    result = (unsigned long)((int)((char)((double)v_19 + p)) / ((int)(! p_5) + 683) + 31744);
    v_13 = (unsigned long)(! (~ p_9));
  }
  if ((((double)p_5 - p) / (- p + 885.)) / ((double)(- v_13 / (unsigned long)(
                                                     ((int)p_5 ^ (int)p_5) + 870)) + 995.) >= (double)(
      (unsigned long long)((int)(! p_5) / ((int)(- p_9) + 872)) & (18446744073709490770ULL % (unsigned long long)(
                                                                   p_7 + 226UL) | 72ULL))) {
    v = 24348UL;
    result = (unsigned long)(((float)v * 177.643707275f + (float)(result * (unsigned long)p_5)) / (
                             (float)(p_7 % 2464UL ^ ! p_7) + 686.f));
    result = (unsigned long)(- ((double)((unsigned long)8205180769.86 + result) + - p));
  }
  else {
    v_13 = (unsigned long)((unsigned int)v_15 - 537415969U);
    v = v_13;
    result = (v % 4041499300UL) * (unsigned long)((long)p_9 - p_11) ^ ~ (~ p_7);
  }
  return result;
}


