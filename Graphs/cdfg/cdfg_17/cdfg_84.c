#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 62477871
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p[1], float p_7, long p_13,
                   unsigned short p_17, unsigned long long p_19)
{
  unsigned char v_23;
  char v_21;
  signed char v_15;
  signed char v_11;
  int v_9;
  unsigned long long v_4;
  float v;
  unsigned short result;
  v_23 = (unsigned char)p_7;
  v_21 = (char)-111;
  v_15 = (signed char)p[0];
  v_11 = (signed char)p_19;
  v_9 = 49369;
  v_4 = (unsigned long long)p[0];
  while ((unsigned long long)(- ((int)(! v_11) << ((int)p[0] & 7))) <= (
         (18446744073709532951ULL + (p_19 + (unsigned long long)p_7)) ^ (unsigned long long)(! (
         -548198104 % ((int)p[0] + 25))))) {
    v_23 = (int)v_23 % ((int)v_21 / 46105 + 137);
    v_21 = (char)(- -0.f);
    v_4 = 18446744073709537733ULL;
    v_11 = (signed char)p_19;
  }
  while_0_break: ;
  if (((p_19 + (unsigned long long)-6.76212240294e+37f) + 18446744073709551091ULL) / (
      ! ((unsigned long long)v_11 & p_19) + 255ULL) != ! (! (p_19 - (unsigned long long)p[0]))) {
    result = (unsigned short)((((float)p_13 + p_7) - (float)(v_4 / 25749ULL)) / (
                              (float)(((int)v_11 >> ((int)v_15 & 7)) * -1) + 239.f));
    v = (float)(! (~ v_9 ^ ((int)v_11 + -629261551)));
    result = (unsigned short)((float)(((unsigned long long)v + v_4) >> (
                                      ((int)result - (int)p[0]) & 63)) + (
                              (p_7 + 7350.f) + 26588.f));
  }
  else result = (unsigned short)((unsigned long)p_17 + 863805681UL);
  return result;
}


