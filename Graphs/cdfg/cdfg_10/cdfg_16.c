#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 908425772
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned long long p_5, float p_7,
         unsigned long p_15, unsigned short p_17)
{
  short v_23;
  signed char v_21;
  int v_19;
  unsigned char v_13;
  float v_11;
  float v_9;
  long long v;
  char result;
  v_23 = (short)22408;
  v_21 = (signed char)p_5;
  v_13 = (unsigned char)p_7;
  v_11 = p_7;
  v_9 = -2469173760.f;
  v = (long long)p;
  if (-114LL >= (0LL ^ (long long)(! ((int)v_21 % ((int)v_23 + 569))))) {
    v_9 = - ((float)v - v_11) / (((float)((unsigned long)v_13 / (p_15 + 898UL)) - v_9) + 110.f);
    v = (long long)(- (p_7 / 362.f + - v_9));
    result = (char)((unsigned long long)((long)((int)p + 125) - -134750174L) + - (- p_5));
  }
  else {
    v_19 = (int)p_7;
    v = (long long)((-61.f + - v_11) / ((float)((p_5 * (unsigned long long)p_17) * (unsigned long long)(
                                                v_11 - (float)v_19)) + 522.f));
    result = (char)((unsigned long long)(- (p_7 - v_11)) % ((unsigned long long)(~ p) * (
                                                            30510ULL + p_5) + 704ULL));
  }
  result = (char)((-433381698LL - ((long long)p - -23644LL)) + (v ^ (long long)result) * (long long)3.16667689235e+38);
  return result;
}


