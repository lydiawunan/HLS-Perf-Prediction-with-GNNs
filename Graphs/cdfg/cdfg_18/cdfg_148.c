#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 805737727
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned short p, long p_4[5][1], short p_6, double p_13,
          unsigned long long p_17)
{
  double v_25;
  unsigned char v_23;
  unsigned short v_21;
  unsigned int v_19;
  int v_15;
  long long v_11;
  unsigned int v_9;
  long v;
  float result;
  v_25 = (double)p;
  v_23 = (unsigned char)p_17;
  v_21 = (unsigned short)p_4[1][0];
  v_19 = 4294964233U;
  v_15 = -29926;
  v_11 = (long long)p_17;
  v_9 = (unsigned int)p_6;
  v = (long)p;
  if ((long long)((int)(! p_6) * ~ ((int)p_6 / ((int)p + 268))) == ~ (
      (long long)((int)p - v_15) ^ (5921LL + v_11))) {
    v = (long)(p_17 % (~ p_17 / 740182530ULL + 611ULL));
    v_19 = (unsigned int)(- -2.91536840624e+38f);
    v_15 = (int)(- p_17);
  }
  else {
    v_15 = (int)(! (51622ULL % ((unsigned long long)(- v_25) + 554ULL)));
    v_23 = (unsigned char)((unsigned long long)v_23 * 76335193ULL);
    v_9 = (unsigned int)((long)((int)p / ((int)((unsigned short)-2.05121935383e+37) + 850) << (
                                ((int)v_23 + 72) & 31)) & (long)p * (
                                                          p_4[2][0] - (long)v_21));
  }
  if ((unsigned long long)(- (~ ((int)p_13 % (v_15 + 617)))) >= (p_17 - (unsigned long long)v_19) * (
                                                                p_17 + 51206ULL) + 
                                                                ((unsigned long long)v_21 / (
                                                                 p_17 + 485ULL)) * (unsigned long long)(
                                                                (int)v_23 ^ (int)((unsigned char)p_13))) 
    result = (float)((int)p | 0 % ((int)(~ p) + 610));
  else {
    v_11 = (long long)(~ ((long)(-266.876259805 * (double)v_9) / (- p_4[1][0] + 125L)));
    result = (float)(! v_9);
    result = (float)((long long)((long)(result / ((float)p_4[0][0] + 352.f)) / (
                                 (long)p_6 % (v + 743L) + 552L)) % ((
                                                                    (long long)(~ v_9) + - v_11) + 344LL));
  }
  return result;
}


