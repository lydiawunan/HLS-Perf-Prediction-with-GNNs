#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 337973252
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned long long p_5, int p_7,
                   float p_11, unsigned long p_13)
{
  double v_23;
  signed char v_21;
  short v_19;
  long long v_17;
  unsigned int v_15;
  float v_9;
  unsigned short v;
  unsigned short result;
  v_21 = (signed char)-54;
  v_19 = (short)p_7;
  v_17 = 17701LL;
  v_9 = (float)p;
  result = (unsigned short)p_7;
  while (- p_13 % (unsigned long)(((int)(! result) + (int)(- result)) + 36) <= p_13) {
    v_23 = (int)v_21 - 15056;
    v_21 = ~ p;
    v_23 = -46. * ((double)p_5 / (v_23 + 793.)) - (double)(~ (v_17 * (long long)v_23));
    result = (unsigned short)(~ (v_17 - v_17) % (long long)((int)(- v_19) + 271));
  }
  while_0_break: ;
  if ((unsigned long long)(~ (- v_17 - (long long)(! v_19))) <= 0ULL) {
    result = (unsigned short)p_13;
    v = (unsigned short)((float)((923010457L + (long)v_9) + (long)(- v_9)) * (
                         -49.f / (-34.f / (p_11 + 202.f) + 392.f)));
    result = (unsigned short)((unsigned long long)((int)p * (int)result + (
                                                   (int)v | (int)result)) % (
                              (p_5 / (unsigned long long)(p_7 + 245)) % 18446744073709486135ULL + 631ULL));
  }
  else {
    v_15 = (unsigned int)p_7;
    v_15 = (unsigned int)(! (((unsigned long)v_15 / 341378325UL) / (unsigned long)(
                             (8152U & v_15) + 727U)));
    result = (unsigned short)(-3405992597.48 * (double)((float)p_7 * (
                                                        (float)v_15 / (
                                                        p_11 + 833.f))));
  }
  return result;
}


