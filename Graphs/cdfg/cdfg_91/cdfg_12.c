#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 40378494
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long long p, int p_13, int p_15)
{
  unsigned short v_19;
  double v_17;
  unsigned short v_10;
  int v_8;
  char v_6;
  float v_4;
  signed char v;
  unsigned char result;
  v_19 = (unsigned short)p_15;
  v_17 = -738.795200191;
  v_10 = (unsigned short)p_15;
  v_8 = (int)p;
  v_6 = (char)-51;
  v_4 = -365.041229248f;
  v = (signed char)74;
  result = (unsigned char)98;
  while (- v_4 > (float)((int)v_6 - (int)v_6)) {
    v = (int)v_19 ^ (int)((short)v_17) * 120;
    v = (signed char)(431301326248ULL % (unsigned long long)((int)v + 397) + 18446744073220145664ULL);
    v_17 = (double)(signed char)-47;
    v_6 = (char)((float)(60 / ((int)(~ v_10) + 615)) * - (- v_4));
  }
  while_0_break: ;
  while ((unsigned long long)(- ((float)((int)v / 130) / ((v_4 - (float)v_6) + 821.f))) < 
         (0ULL - ((unsigned long long)v_4 - 18446744073709492349ULL)) % (unsigned long long)(
         v_8 + 834)) {
    result = (long long)v_10 + -46432LL;
    v = (signed char)((~ p_15 / ((int)v_6 + 179)) / (- v_8 * - p_15 + 291));
    v_4 = (float)(238 * - ((int)v_6 + (int)result));
    v_8 = (int)((p % (long long)(p_13 + 708)) * (long long)(107 | (int)((char)v_4)) + (long long)(
                0 % (p_13 + 456)));
  }
  while_0_break_0: ;
  return result;
}


