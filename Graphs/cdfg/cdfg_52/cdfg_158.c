#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 176142951
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned short p_9, unsigned long p_19,
                double p_21[2][3], float p_27)
{
  unsigned char v_25;
  unsigned short v_23;
  float v_17;
  double v_15;
  unsigned int v_13;
  unsigned int v_11;
  unsigned short v_7;
  unsigned short v_5;
  signed char v;
  signed char result;
  v_25 = (unsigned char)p_27;
  v_23 = (unsigned short)p_19;
  v_17 = p_27;
  v_15 = -226.8864693;
  v_7 = p_9;
  v_5 = p_9;
  v = (signed char)111;
  result = (signed char)110;
  v_11 = (unsigned int)((p - p) * (unsigned long long)((float)v_23 * -5.04504859305e+37f) << (
                        ((unsigned int)v_5 & 4294933367U) * (unsigned int)(
                        -4.83575945282e+37 / (v_15 + 754.)) & 63U));
  if (((long long)((int)((unsigned char)3.22312927602e+37) & (int)(! v_25)) | 
       (long long)(~ result) * 765037081LL) < (long long)v_25) {
    v_5 = (unsigned short)(! (28306LL - (long long)v_11) - (long long)(
                           (unsigned int)((int)v + (int)p_9) ^ v_11));
    v = (signed char)(- ((int)v_7 % ((int)p_9 + 517)));
    result = (signed char)((unsigned long long)v + p);
  }
  else {
    v_15 = (double)(16498UL / (unsigned long)(((int)v_25 - (int)((unsigned char)(
                                               p_27 / -1.72140359728e+38f))) + 556));
    v_13 = (unsigned int)((862392457LL * (long long)v_17 - (long long)(! p_19)) % (long long)(
                          (unsigned long)((int)((unsigned short)p_21[1][1]) - (int)v_23) % (
                          ! p_19 + 590UL) + 105UL));
    result = (signed char)((unsigned long long)(- v_13 + (unsigned int)v_15) % 1019520590ULL);
  }
  return result;
}


