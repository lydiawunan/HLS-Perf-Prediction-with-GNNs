#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 380668860
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(int p, signed char p_4, unsigned short p_6, unsigned short p_8,
          unsigned long p_11)
{
  unsigned char v_27;
  unsigned short v_25;
  unsigned long long v_23;
  double v_21;
  signed char v_19;
  long long v_17;
  unsigned long v_15;
  unsigned long v_13;
  float v;
  short result;
  v_27 = (unsigned char)197;
  v_25 = p_6;
  v_23 = (unsigned long long)p;
  v_21 = (double)p_11;
  v_19 = (signed char)p_8;
  v_17 = (long long)p_4;
  v_15 = (unsigned long)p_4;
  v_13 = 3580928523UL;
  if ((unsigned long long)((long long)(16613UL + (unsigned long)v_25 / (
                                                 v_13 + 462UL)) + (v_17 % (long long)(
                                                                   p_11 + 938UL)) * (long long)(! v_27)) >= ! (- (
      18446744073709547023ULL * (unsigned long long)v_15))) {
    v = (float)(! (49541U + (unsigned int)p_4) >> (- v_15 % (unsigned long)(
                                                   (int)p_4 * (int)p_8 + 993) & 31UL));
    v_17 = (long long)((- v_21 + - v_21) + (double)(v * (float)((unsigned long long)p_8 / (
                                                                v_23 + 185ULL))));
    v = (float)((v_17 / (long long)(641593469 % (p + 326) + 480)) % (
                (long long)(v_13 * (unsigned long)v_19) * 20412LL + 818LL));
  }
  else {
    v_13 = (unsigned long)(! (- (- p)));
    v_15 = 280558925UL;
    v = (float)v_25;
  }
  if (v != 0.f) result = (short)(0 / (long long)(~ (-69 - p) + 344));
  else result = (short)((int)p_4 * (int)p_6 + (int)p_8);
  return result;
}


