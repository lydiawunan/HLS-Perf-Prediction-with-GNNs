#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460949408
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(signed char p, float p_11, unsigned char p_15, float p_19)
{
  double v_23;
  unsigned int v_21;
  unsigned short v_17;
  float v_13;
  unsigned char v_8;
  unsigned short v_6;
  unsigned long v_4;
  signed char v;
  unsigned long result;
  v_23 = -2.30132246119e+38;
  v_17 = (unsigned short)9421;
  v_13 = 2.70354683048e+38f;
  v_8 = (unsigned char)2;
  result = 754037701UL;
  if (~ ((result & 22077UL) - (unsigned long)v_23) >= (unsigned long)(
      86 - (int)((char)(- p_11)))) {
    v_6 = (unsigned short)((unsigned long long)p_15 % ((unsigned long long)(
                                                       (int)((unsigned short)p_11) - (int)v_17) * (
                                                       18446744073709544585ULL >> (
                                                       (int)p_15 & 63)) + 272ULL));
    v = (signed char)((float)((int)v_8 % ((int)p + 239) - (int)p_11) * v_13);
    v_4 = (unsigned long)v_6;
  }
  else {
    v_21 = (unsigned int)(! 3892063411UL);
    v_4 = (unsigned long)(- (p_19 + -44.f) / ((float)v_21 + 542.f));
    v = (signed char)15;
  }
  result = (unsigned long)v + - (- v_4);
  return result;
}


