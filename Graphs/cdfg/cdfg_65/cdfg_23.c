#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 137575158
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long long p, double p_13, float p_15)
{
  unsigned int v_19;
  char v_17;
  unsigned int v_11;
  short v_9;
  short v_7;
  unsigned char v_5;
  unsigned char v;
  unsigned short result;
  v_19 = 3637800955U;
  v_17 = (char)p_13;
  v_11 = 3940859773U;
  v_9 = (short)7838;
  v_7 = (short)-22441;
  v_5 = (unsigned char)p_15;
  v = (unsigned char)67;
  result = (unsigned short)9933;
  if (~ ((unsigned int)v_5 / 43770U) + 24550U != (unsigned int)(- (p_15 * (float)(- v_5)))) {
    v_5 = (unsigned char)(p_13 / 61511462.);
    v = (unsigned char)((double)((p + 657412728LL) + (long long)(37U % (
                                                                 v_11 + 286U))) * (
                        0. / ((double)p * p_13 + 748.)));
    result = (unsigned short)p;
  }
  else {
    v_5 = (unsigned char)((int)v_17 * (int)((char)(((float)v_19 * p_15) / (
                                                   (float)((int)((unsigned char)-8986455576.64) % (
                                                           (int)v + 71)) + 60.f))));
    v_11 = (unsigned int)p_15;
    v = (unsigned char)(- (p * 7LL) - (long long)(- p_13 - 4294958879.));
  }
  while (! (-114LL % (((long long)v + p) + 993LL)) == (long long)(- v_5)) {
    v_5 = (unsigned char)719.123560659;
    result = (unsigned short)(((long long)(v_11 | (unsigned int)v_7) / (
                               (p - (long long)v_11) + 992LL)) / (long long)(
                              (unsigned int)(-34 % ((int)v_9 + 407)) % (
                              ((unsigned int)v_5 + 208575610U) + 862U) + 966U));
    v = (unsigned char)((long)(((int)v_5 % 30931) % ((int)v_5 + 561)) - (
                        -40298L << ((p + (long long)v_9) & 31LL)));
  }
  while_0_break: ;
  return result;
}


