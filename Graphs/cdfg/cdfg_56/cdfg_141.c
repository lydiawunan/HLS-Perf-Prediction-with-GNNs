#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 519140333
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, float p_4, unsigned int p_6, double p_8,
                   unsigned short p_10)
{
  double v_23;
  unsigned long long v_21;
  float v_19;
  unsigned long long v_17;
  double v_15;
  char v_13;
  unsigned char v;
  unsigned short result;
  v_19 = (float)p;
  v_17 = (unsigned long long)p_4;
  v_15 = (double)p_4;
  v_13 = (char)-12;
  while ((unsigned int)v_13 <= (p_6 ^ (unsigned int)((-46776 ^ (int)p) / (
                                                     (int)v_13 * -110 + 22)))) {
    v_23 = (double)v_19 + ((double)v_17 - (v_15 - -1469.));
    v_17 = 718590993ULL;
    v_21 = (unsigned long long)2.70488432863e+36f;
    v_13 = (char)((unsigned long long)((int)((float)v_21 * p_4) % (((int)((signed char)p_4) + (int)p) + 473)) * (
                  (unsigned long long)p + ((unsigned long long)v_23 + v_21)));
  }
  while_0_break: ;
  if ((int)v_13 >= (int)((char)p_4)) {
    result = (unsigned short)((double)((unsigned int)((int)p | (int)((signed char)p_4)) / (
                                       ~ p_6 + 767U)) * 7.62253866051e+37);
    result = (unsigned short)(0 ^ (unsigned long long)((long long)(- result) | -250265012LL));
  }
  else {
    v = (unsigned char)((double)p_10 + - (- p_8));
    result = (unsigned short)(-51668063L - (long)((int)(p_8 - (double)p_10) * (
                                                  (int)v + (int)v)));
  }
  return result;
}


