#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 449888924
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned long p, long p_4, unsigned long long p_7,
                   unsigned long p_15, unsigned char p_25)
{
  double v_27;
  long v_23;
  long long v_21;
  unsigned long v_19;
  signed char v_17;
  unsigned short v_13;
  unsigned short v_11;
  float v_9;
  unsigned short v;
  unsigned short result;
  v_27 = 1.33398577785e+38;
  v_23 = 41603L;
  v_21 = (long long)p_15;
  v_17 = (signed char)p_25;
  v_13 = (unsigned short)p_7;
  v_11 = (unsigned short)p_15;
  v_9 = (float)p_25;
  while (v_23 < (long)(~ v_11)) {
    v_27 = (double)((unsigned long long)(- v_27) % (995995991ULL * ~ p_7 + 175ULL));
    v_9 = (float)(- ((double)(- p_25) / (v_27 + 151.)));
    v_23 = - -449096541L;
  }
  while_0_break: ;
  if (v_21 < (long long)((! p_15 | (unsigned long)(v_23 - (long)-1.89179648176e+37)) * (
                         (p_15 - (unsigned long)p_25) - (unsigned long)v_13))) {
    v_11 = (unsigned short)p_4;
    v = (unsigned short)(- ((67 * (int)v_11) / 887));
    result = (unsigned short)((float)(p * (unsigned long)p_4) * ((float)(- v) + (
                                                                 (float)p_7 - v_9)));
  }
  else {
    v_19 = (unsigned long)v_9;
    v_13 = (unsigned short)((unsigned long long)(p_15 * 4294915789UL - (unsigned long)(- v_13)) % (
                            (p_7 / (unsigned long long)((int)v_17 + 275)) % (unsigned long long)(
                            v_19 + 890UL) + 93ULL));
    result = v_13;
  }
  return result;
}


