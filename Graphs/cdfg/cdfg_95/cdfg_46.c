#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 335442033
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned char p_5, double p_9,
                       unsigned long p_13, signed char p_17)
{
  short v_29;
  float v_27;
  char v_25;
  short v_23;
  unsigned short v_21;
  unsigned short v_19;
  unsigned long v_15;
  int v_11;
  short v_7;
  float v;
  unsigned long long result;
  v_29 = (short)-1592;
  v_27 = 3.3010775192e+37f;
  v_23 = (short)22923;
  v_21 = (unsigned short)p_5;
  v_19 = (unsigned short)p_13;
  v_15 = (unsigned long)p_17;
  v_11 = 51529;
  if (p_13 != (~ p_13 + (v_15 - (unsigned long)p_17)) - (unsigned long)3.32388964916e+38) {
    v_15 = ((unsigned long)(v_11 + (int)v_21) + p_13) + ((unsigned long)(
                                                         p_9 * (double)p_13) | 
                                                         816775801UL * (unsigned long)v_23);
    v = (float)p_17;
    v_11 = (int)((unsigned long)(65 / ((int)((char)(- v)) + 578)) / (
                 ((unsigned long)p_9 / (p_13 + 470UL)) / 87UL + 956UL));
  }
  else {
    v_19 = (unsigned short)(! (! 0L));
    v_25 = (char)(! ((18446744073543402402ULL << ((int)v_29 & 63)) ^ 1170473874ULL));
    v_11 = - ((int)(~ v_25) + (int)((char)((double)v_27 * p_9)));
  }
  if ((long long)(v_11 >> ((p_13 / 4294967174UL) / 27189UL & 31UL)) < 
      (long long)v_15 - (long long)(~ p_17) * (60354LL * (long long)v_19)) {
    v = (float)(- -414.477708297);
    result = (unsigned long long)(- (- (v - 182557232.f)));
  }
  else {
    v_7 = (short)(! (! 2350363264UL));
    result = (unsigned long long)(- (p + (unsigned int)p_5) - (unsigned int)(
                                  (int)(~ v_7) - (int)((short)(- p_9))));
  }
  return result;
}


