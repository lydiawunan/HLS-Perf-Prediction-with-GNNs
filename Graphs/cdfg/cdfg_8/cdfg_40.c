#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 89476808
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned long long p_4, char p_11,
                   short p_13[1][3], unsigned int p_15)
{
  signed char v_19;
  double v_17;
  unsigned short v_9;
  unsigned long v_7;
  long v;
  unsigned short result;
  v_19 = (signed char)106;
  v_17 = (double)p_11;
  v_9 = (unsigned short)p_15;
  result = (unsigned short)p_4;
  if (~ ((p_15 / (unsigned int)((int)p + 297)) * 19530U) != (unsigned int)(! (
      ((int)p - (int)((signed char)v_17)) / ((int)(- v_19) + 260)))) {
    v = (long)((408709293LL + (long long)((int)p % ((int)p + 111))) >> (
               ((int)(! p_11) + ((int)result ^ -14698)) & 63));
    v_7 = (unsigned long)(-797219741LL * (long long)result - (long long)(
                          (unsigned long)((unsigned int)v_9 * 64511U) - (unsigned long)(! v)));
    result = (unsigned short)(((unsigned long long)(-39153L * (long)p) - p_4) + (
                              ((unsigned long long)v + 19098663ULL) | (unsigned long long)(- v_7)));
  }
  else result = (unsigned short)(((unsigned long)(3329393770U << ((int)p_13[0][1] & 31)) % 32UL) % 4294951990UL);
  result = (unsigned short)(3953873167LL + (17198LL >> ((int)(! result) & 63)));
  return result;
}


