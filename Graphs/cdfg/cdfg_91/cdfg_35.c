#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1049627572
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(double p, unsigned long long p_4, unsigned short p_7,
                  char p_11, long long p_13)
{
  double v_27;
  long v_25;
  int v_23;
  long long v_21;
  unsigned char v_19;
  double v_17;
  unsigned int v_15;
  unsigned long long v_9;
  double v;
  unsigned char result;
  v_27 = 5297855332.04;
  v_25 = -23544L;
  v_23 = -674578777;
  v_21 = 6361LL;
  v_19 = (unsigned char)248;
  v_17 = -2.27756040489e+38;
  v_15 = 3659246927U;
  v_9 = 11918ULL;
  v = -6135504105.45;
  while ((long long)p_11 % ((long long)((int)v_19 | (int)p_7) / ((1888LL >> (
                                                                  v_21 & 63LL)) + 876LL) + 108LL) < (long long)(! (
         (v_15 ^ 4294967217U) + (unsigned int)(~ v_23)))) {
    v = (long)v_27 + v_25 * 16681L;
    v_19 = (unsigned char)(! (~ p_4 | (unsigned long long)(- v_19)));
    v_19 = (unsigned char)((unsigned long long)(88 - (int)(- p_11)) + (
                           (v_9 - (unsigned long long)p_11) << (p_4 * (unsigned long long)v_19 & 63ULL)));
    v_15 = (unsigned int)((long long)p_11 - ((long long)((long)p_7 | -17890L) - p_13));
  }
  while_0_break: ;
  if ((int)p_11 + (int)((char)((double)(v_15 * (unsigned int)p) * ((double)p_13 * v_17))) >= (int)(~ (~ (~ v_19)))) {
    result = (unsigned char)v_9;
    result = (unsigned char)(((unsigned long long)result / (p_4 + 263ULL) << (
                              ((unsigned long)v + 3375115569UL) & 63UL)) - (unsigned long long)(
                             (p + 8.) - (double)(- p_7)));
    result = (unsigned char)((int)result - (17292 - (int)((unsigned short)p)) % (
                                           (int)(! result) + 98));
  }
  else result = (unsigned char)(- -305.052345233);
  return result;
}


