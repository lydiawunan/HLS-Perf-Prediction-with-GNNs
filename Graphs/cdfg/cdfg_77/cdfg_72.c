#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 956299381
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, signed char p_5, float p_7, unsigned int p_9[5],
                   double p_15)
{
  short v_25;
  unsigned int v_23;
  unsigned short v_21;
  long v_19;
  unsigned short v_17;
  unsigned int v_13;
  unsigned int v_11;
  float v;
  unsigned short result;
  v_25 = (short)p_7;
  v_23 = 156799076U;
  v_21 = (unsigned short)24042;
  v_19 = (long)p_15;
  v_11 = p_9[0];
  v = (float)p_9[0];
  if (4294967207U / ((p_9[1] % (unsigned int)((int)v_25 + 396)) * (unsigned int)v + 210U) < (unsigned int)-2273381120.f) {
    v_17 = (unsigned short)(4294935654LL % ((-715146839LL + (long long)(
                                             44U / (p_9[2] + 655U))) + 985LL));
    v_13 = (unsigned int)((int)((unsigned short)(2.69458068248e+38 - (double)(~ p_5))) / (
                          (int)v_17 + 970));
    v_11 = (unsigned int)((double)(! (v_19 + -21040L)) + ((double)p_5 - (
                                                          1.84467440735e+19 + p)));
  }
  else {
    v_13 = (unsigned int)(! ((unsigned long long)v_21 * 649594758ULL + (unsigned long long)(
                             (unsigned long)v_19 * (unsigned long)v_23)));
    v_17 = (unsigned short)(4294967296.f - p_7);
    v_13 = - v_13 / (unsigned int)((int)p_5 / ((int)v_21 + 892) + 756) | 39056U;
  }
  if (v_11 * ! v_13 != (unsigned int)(~ (((int)((signed char)p_15) / -51) / (
                                         (int)(- v_17) + 138)))) {
    v = (float)((long long)(~ p_5) % 42668LL - (long long)p_7);
    result = (unsigned short)((long)(- p) * ((long)(- v) / ((long)p / 17279L + 464L)));
  }
  else result = (unsigned short)(! (! p_9[3]) + (unsigned int)-6965227520.f);
  return result;
}


