#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 12495387
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(short p, unsigned int p_7[4][4][1], signed char p_9, double p_15,
        unsigned char p_19)
{
  unsigned int v_21;
  unsigned long long v_17;
  float v_13;
  unsigned char v_11;
  float v_4;
  unsigned char v;
  int result;
  v_21 = (unsigned int)p_9;
  v_13 = 6.96278084469e+37f;
  v_11 = (unsigned char)173;
  v_4 = (float)p;
  v = (unsigned char)p_7[3][3][0];
  result = 806281308;
  while (~ ((int)p / ((int)(- p) + 112)) > ! ((int)(! p_9) - (int)v_11 / (
                                                             (int)p + 736))) {
    v_4 = (long)v_13 * 900341583L;
    v_17 = (unsigned long long)(v_21 ^ (unsigned int)result) * ((unsigned long long)p_19 / 18446744072996225457ULL) - 18532ULL;
    result = (int)(- ((unsigned int)((int)p << ((int)p_19 & 15)) - 3816091332U));
    v_11 = (unsigned char)((unsigned long long)((int)(p_15 / ((double)v + 188.)) >> 1) * (
                           ((unsigned long long)result + v_17) * (unsigned long long)(! p_7[3][1][0])));
  }
  while_0_break: ;
  while ((float)v != -404.583618164f) {
    result = v_4 - 51727.f;
    v_4 = (float)(- (short)-5289);
    v = (unsigned char)(- ((float)(~ p_7[0][2][0]) / (v_4 * 15329.f + 583.f)));
    v = (unsigned char)(- ((double)v + (-933125583.057 + (double)p)));
  }
  while_0_break_0: ;
  return result;
}


