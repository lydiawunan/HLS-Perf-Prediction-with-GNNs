#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 899302921
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned int p[1][1][4], int p_5, short p_7, short p_9,
                  long long p_11)
{
  char v_27;
  float v_25;
  unsigned long v_23;
  unsigned int v_21;
  unsigned long v_19;
  long long v_17;
  char v_15;
  double v_13;
  long long v;
  unsigned char result;
  v_25 = -1805897088.f;
  v_23 = 4223756949UL;
  v_21 = (unsigned int)p_5;
  v_19 = 41405UL;
  v_17 = (long long)p_5;
  v_15 = (char)3;
  v_13 = (double)p_11;
  result = (unsigned char)p[0][0][0];
  if ((unsigned long)(- (-9.93626423635e+37f + (float)p[0][0][3]) - (float)(
                      (int)p_7 * 237)) != ~ (3717030370UL + (unsigned long)(
                                             (unsigned int)p_9 / (v_21 + 75U)))) {
    v = ((3532110781LL - p_11) + (long long)v_13) + (long long)(184054356UL / (
                                                                v_23 + 562UL));
    v_15 = (char)(~ v);
    v_19 = (unsigned long)(~ (! (6577U / (v_21 + 264U))));
  }
  else {
    v_27 = (char)(1.38052310159e+38 + (double)p[0][0][2]);
    result = (unsigned char)((double)(v_25 / ((float)v_17 + 121.f)) / (
                             v_13 + 411.) + (double)v_27);
    v_19 >>= - (52508U ^ p[0][0][3]) & 31U;
  }
  if ((long long)p_9 > v_17) {
    v = (long long)(((51681UL % (unsigned long)(p_5 + 33)) / ((unsigned long)(
                                                              656616832.f - (float)p_5) + 595UL)) / (unsigned long)(
                    ~ ((int)p_7 - p_5) + 743));
    v = ! v + ((long long)((int)p_7 / ((int)p_9 + 531)) - ! p_11);
    result = (unsigned char)(v * (long long)((113U % (p[0][0][2] + 720U)) % (unsigned int)(
                                             ! p_5 + 306)));
  }
  else {
    v_13 = (double)p[0][0][3];
    v_13 = (double)(((long long)v_15 & v_17) + (long long)(~ v_19)) * - (
           v_13 * 3368713176.);
    result = (unsigned char)((((int)p_9 + 119) * (-789 & p_5)) * ((int)result + (int)((unsigned char)(
                                                                  (double)p_5 + v_13))));
  }
  return result;
}


