#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 656631444
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(float p, signed char p_11,
                       unsigned long p_13[1][5][1], float p_17, int p_19)
{
  long long v_23;
  char v_21;
  unsigned long long v_15;
  unsigned short v_8;
  unsigned char v_6;
  unsigned short v_4;
  char v;
  unsigned long long result;
  v_23 = -65019LL;
  v_21 = (char)p_11;
  v_15 = (unsigned long long)p;
  v_8 = (unsigned short)2355;
  v_6 = (unsigned char)156;
  v_4 = (unsigned short)52386;
  v = (char)-7;
  result = (unsigned long long)p_19;
  if (((unsigned long long)((int)v / (p_19 + 326)) + 897186184ULL) >> (
      (5295258463089ULL - 82686781ULL % (v_15 + 726ULL)) & 63ULL) >= 54034ULL) {
    v_6 = (unsigned char)((int)(- v_21) - (int)((char)(- p)));
    v = (char)((float)((int)p_17 / ((p_19 + (int)v_4) + 468)) - p);
    v_4 = (unsigned short)((~ result - result) % (unsigned long long)(
                           -27397987LL * (long long)(100 | (int)((signed char)p)) + 56LL));
  }
  else {
    v = (char)(-0);
    v_4 = (unsigned short)v_23;
    v_8 = (unsigned short)-1.84475695318e+38f;
  }
  if ((unsigned long long)((unsigned long)v / (4294948108UL / (unsigned long)(
                                               (int)p_11 + 751) + 572UL) - (
                           (unsigned long)(1690461184.f + p) & ~ p_13[0][0][0])) < - (
      (18446744072755741330ULL + v_15) / ((unsigned long long)v_8 % (
                                          v_15 + 291ULL) + 475ULL))) {
    v = (char)(~ 3896398783UL);
    result = (unsigned long long)v;
  }
  else {
    v_4 = (unsigned short)(! ((int)v_4 ^ (int)v_6) - ((int)v_8 >> ((int)((unsigned short)(
                                                                   106.f - p)) & 15)));
    result = 191ULL;
    result = - (~ result + (unsigned long long)(~ v_4));
  }
  return result;
}


