#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 468346784
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p[1], unsigned int p_7, int p_15, signed char p_19,
         float p_21[2][1][4])
{
  unsigned long long v_27;
  long v_25;
  unsigned char v_23;
  unsigned int v_17;
  unsigned long long v_13;
  unsigned short v_11;
  unsigned short v_9;
  float v_5;
  char v;
  char result;
  v_27 = 18446744073709550156ULL;
  v_25 = 627660711L;
  v_23 = (unsigned char)p_7;
  v_17 = 4294933139U;
  v_11 = (unsigned short)5538;
  v_9 = (unsigned short)p_7;
  v_5 = -218.662780762f;
  v = (char)p_21[1][0][3];
  result = (char)-32;
  if ((unsigned int)(- ((241 * (int)v_23) % (~ p_15 + 510))) < ~ (~ (
      v_17 * (unsigned int)v_11))) {
    v_23 = (unsigned char)v_25;
    v_13 = (unsigned long long)v_23;
    v_11 = (unsigned short)((61U - p_7) - (unsigned int)(- (p_15 - (int)p_19)));
  }
  else {
    v = (char)(3.08092507021e+38 + (double)(p_7 / 4294967187U + (unsigned int)(
                                            (int)result - (int)v)));
    v_11 = (unsigned short)(v_27 * (unsigned long long)(~ (! v_11)));
    v_13 = (unsigned long long)((unsigned int)p[0] * (p_7 + 26U)) % (
           v_27 + 237ULL);
  }
  if ((int)v != (int)p_19) {
    v_9 = (unsigned short)((unsigned long long)(((int)((unsigned short)-7.15354089361e+37) + (int)v_9) / (
                                                (int)v_11 + 335)) / (
                           (v_13 - (unsigned long long)(! p_15)) + 365ULL));
    v = (char)(- (v_5 * (float)p_7 - (float)v_9));
    result = (char)((31804175465ULL - (unsigned long long)(-854427377L / (long)(
                                                           p[0] + 217))) + (unsigned long long)(
                    (int)v * -530548338));
  }
  else {
    v_17 = (unsigned int)p_21[0][0][0];
    result = (char)((v_17 / (unsigned int)((int)p_19 + 309) << ((unsigned long)p_15 * 3328873437UL & 31UL)) - (unsigned int)p[0]);
  }
  return result;
}


