#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 109884366
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(short p, unsigned char p_5, unsigned short p_9, int p_11,
          long long p_15)
{
  unsigned int v_27;
  unsigned long long v_25;
  unsigned long v_23;
  int v_21;
  unsigned long long v_19;
  unsigned short v_17;
  double v_13;
  unsigned short v_7;
  float v;
  short result;
  v_27 = 32880U;
  v_25 = 18446744072666043513ULL;
  v_21 = (int)p_9;
  v_17 = (unsigned short)7824;
  v_13 = (double)p_11;
  if (7999ULL >= (unsigned long long)(! p_15 * ((long long)p * p_15)) * (
                 v_25 / (unsigned long long)(v_27 + 290U) + (unsigned long long)(
                 (int)p_9 + -106407537))) {
    v_17 = p_9;
    v_19 = (unsigned long long)(! (unsigned short)31483);
    result = (short)v_19;
  }
  else {
    v_23 = (unsigned long)(- v_21 ^ 65);
    v_21 = -13441;
    result = (short)((int)p_5 / (((v_21 + -77) << (v_23 & 31UL)) + 555));
  }
  if (((int)(- p_5) | (int)((unsigned char)(5189259776.f / ((float)p_15 + 115.f)))) * (int)result == (int)v_17) {
    v = (float)p;
    result = (short)v;
  }
  else {
    v_7 = (unsigned short)((unsigned long long)((int)(~ result) % ((int)(- result) + 353)) & 18446744073709505301ULL);
    v = (float)v_13;
    result = (short)(((int)(! result) * ((int)p_5 + (int)v_7)) * ((int)p_9 / 136 + (int)(
                                                                  (float)p_11 / (
                                                                  v + 644.f))));
  }
  return result;
}


