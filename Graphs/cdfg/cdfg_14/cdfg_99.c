#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 408538234
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(int p[3], signed char p_5, signed char p_9, unsigned char p_13,
         unsigned int p_15)
{
  short v_27;
  unsigned short v_25;
  char v_23;
  signed char v_21;
  unsigned int v_19;
  int v_17;
  unsigned long v_11;
  float v_7;
  short v;
  long result;
  v_27 = (short)p_5;
  v_25 = (unsigned short)p_15;
  v_23 = (char)105;
  v_21 = (signed char)-26;
  v_19 = (unsigned int)p_9;
  v_11 = 4202816664UL;
  v_7 = (float)p_15;
  if ((float)((long long)p_9 * ((long long)((int)v_25 * (int)p_9) * (
                                (long long)v_11 + -131543302LL))) >= 
      (float)((unsigned int)(49 * (int)v_27) / ((p_15 - p_15) + 534U)) + - (
      v_7 - -557277952.f)) {
    v_11 = (unsigned long)(- (758304081LL / (long long)((int)p_5 + 667) - (long long)(! p[2])));
    v_7 = (float)(- v_21);
    v_17 = (int)(! (4294967286U ^ 75U % (v_19 + 51U)));
  }
  else {
    v_17 = ! ((int)p_13 / ((int)v_21 + 169)) / ((int)(998.95703125f - (float)(! p_13)) + 724);
    v_11 = (unsigned long)((unsigned int)((p[0] * (int)p_13) / 279) % (
                           ! (~ p_15) + 717U));
    v_7 = (float)(! (((int)p_9 - (int)v_23) - -61274));
  }
  if ((long long)(! v_11 << ((unsigned long)((float)p_13 - v_7) & 31UL)) * (
      (long long)(4294958377U + p_15) * ((long long)p_13 % -50086LL)) < (long long)(
      (unsigned int)p_13 & (unsigned int)p[1] * ((unsigned int)v_17 - 17972465U))) {
    v = (short)p[1];
    result = (long)(- -9378540544.f);
    result = (long)(~ ((unsigned long long)(result * (long)v) / 53195ULL));
  }
  else {
    v_7 = (float)(~ 571803019L);
    result = (long)(((int)(~ p_5) - (int)((signed char)v_7)) - (int)p_9);
  }
  return result;
}


