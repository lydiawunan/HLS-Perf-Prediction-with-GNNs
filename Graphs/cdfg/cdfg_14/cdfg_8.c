#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 846945911
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(double p[1][4], unsigned int p_7, short p_9[2][4][5], float p_13)
{
  unsigned char v_21;
  long long v_19;
  long long v_17;
  long long v_15;
  unsigned long long v_11;
  double v_5;
  unsigned char v;
  double result;
  v_19 = (long long)p_9[1][3][1];
  v_17 = -30263LL;
  v_15 = -327579379LL;
  v_11 = (unsigned long long)p_7;
  v_5 = (double)p_7;
  v = (unsigned char)5;
  result = (double)p_13;
  while (- (v_5 / ((double)p_7 + 315.) - (double)p_9[0][3][3]) <= result) {
    v = v_11 + 18446744073709530139ULL;
    v_21 = (unsigned char)(- (0U / ((23669U - p_7) + 285U)));
    v_11 = (unsigned long long)(v_15 / ((v_17 << (v_19 & 63LL)) % (long long)(
                                        (int)v_21 / ((int)v_21 + 521) + 306) + 460LL));
    v_5 = ((result + (double)p_13) / ((double)(3283116764ULL % (v_11 + 672ULL)) + 936.)) * (double)p_9[1][3][1];
  }
  while_0_break: ;
  result = (double)v;
  return result;
}


