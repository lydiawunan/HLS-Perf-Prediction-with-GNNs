#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 107566820
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(signed char p, int p_11, signed char p_13,
                  unsigned long long p_15, char p_19)
{
  int v_21;
  signed char v_17;
  unsigned long long v_8;
  unsigned int v_6;
  unsigned char v_4;
  unsigned short v;
  unsigned char result;
  v_21 = (int)p;
  v_17 = (signed char)-1;
  v_8 = 18446744073709488698ULL;
  v_6 = (unsigned int)p;
  v = (unsigned short)p_19;
  result = (unsigned char)126;
  if ((unsigned int)(v_21 / ((int)v + 108)) - ! (~ v_6) >= (unsigned int)(~ p_11)) {
    v_4 = (unsigned char)(p_15 * (unsigned long long)(-566405066LL & (long long)result));
    result = (unsigned char)p_13;
    v_6 = 28346522U;
  }
  else {
    v = (unsigned short)(17257ULL % (v_8 / (unsigned long long)(p_11 + 18) + 180ULL));
    v_4 = (unsigned char)(-106 / ((int)p_19 + 980));
    v_8 = (unsigned long long)((-9585544192.f / ((float)((int)v_17 - (int)p_19) + 259.f)) * (float)(
                               (p_11 - 34753) / ((int)(- v) + 833)));
  }
  if (85232641ULL > - ((v_8 - (unsigned long long)p) << ((int)v_4 / (
                                                         p_11 + 290) & 63))) {
    v = (unsigned short)v_6;
    v = (unsigned short)((unsigned long long)(~ ((int)v / ((int)v_4 + 642))) % (
                         (unsigned long long)((unsigned int)v + v_6) * (
                         v_8 + 42568ULL) + 119ULL));
    result = (unsigned char)(4287847040UL + (unsigned long)(((long)v | 36540L) & (long)(~ result)));
  }
  else result = (unsigned char)0;
  return result;
}


