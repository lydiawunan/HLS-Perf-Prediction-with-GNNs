#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1008842160
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned short p_4, signed char p_6, short p_8[3][4],
        double p_13)
{
  unsigned int v_27;
  unsigned long long v_25;
  unsigned long v_23;
  unsigned char v_21;
  unsigned short v_19;
  char v_17;
  double v_15;
  double v_11;
  double v;
  int result;
  v_25 = 14719ULL;
  v_23 = (unsigned long)p_6;
  v_21 = (unsigned char)67;
  v_19 = (unsigned short)25212;
  v_11 = -1.39236176995e+38;
  if (804004665LL != (long long)(3423302991UL - ((unsigned long)p_4 % (
                                                 v_23 + 748UL)) * (unsigned long)(
                                                (int)p_6 * -30713))) {
    v_17 = (char)(207143531L - (long)v_21);
    v_15 = (double)((-9.f + p) / 493739872.f) - (double)((int)((unsigned short)v_11) << (
                                                         (int)v_19 & 15)) * - p_13;
    v = - (- v_15) * (double)(((int)v_17 + (int)((char)p_13)) + (int)1.63218411673e+38);
  }
  else {
    v_27 = 41969U;
    v_11 = (double)(((unsigned long long)(~ p_8[1][0]) + v_25 * (unsigned long long)p_4) * (unsigned long long)(
                    (v_27 << ((int)p_8[0][3] & 31)) << 19LL));
    v = (double)v_23;
  }
  if ((2.21402264822e+36 + - v) * 4294964290. >= (double)((int)v_11 ^ - (
                                                          123 + (int)((unsigned char)p_13)))) {
    result = (int)((long long)(((int)p_4 | (int)p_6) % -908) % -54617LL);
    result &= (int)(- p) % ((int)p / (result + 597) + 448);
  }
  else result = 471401270 - 32 % ((int)(- p_8[0][3]) + 732);
  return result;
}


