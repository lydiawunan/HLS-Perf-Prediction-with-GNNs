#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 772490058
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned char p, short p_4[4][5], short p_7,
                unsigned short p_9, char p_11)
{
  unsigned short v_21;
  long v_19;
  char v_17;
  unsigned long v_15;
  long long v_13;
  unsigned long long v;
  signed char result;
  v_21 = (unsigned short)p_7;
  v_19 = (long)p_9;
  v_17 = (char)-65;
  v_15 = 3676435701UL;
  if (- v_15 + ((unsigned long)v_17 - (v_15 | (unsigned long)v_19)) < (unsigned long)(~ (
      ((int)v_21 + -23) * ((int)p_7 - (int)p_9)))) v_13 = (long long)(- p_7);
  else {
    result = (signed char)86;
    v = (unsigned long long)((9 / ((int)(! result) + 292)) * (int)(- (~ p)));
    v_13 = (long long)(- (- ((unsigned long long)p_4[2][2] % (v + 157ULL))));
  }
  if ((long long)(((unsigned long)-198.775445036 & 4110787164UL) ^ 37194UL) == v_13) 
    result = (signed char)((long long)(-13887 * (int)p + ((int)p_4[3][2] + (int)p_4[3][2])) + 19LL);
  else {
    v = (unsigned long long)((float)((int)p_7 + (int)p_9 / ((int)p_11 + 103)) / (
                             ((float)p * 5780161536.f) * 4294905856.f + 903.f));
    result = (signed char)(! v);
  }
  return result;
}


