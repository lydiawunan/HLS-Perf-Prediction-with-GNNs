#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 466041603
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p, unsigned long p_5, short p_9[2],
                  unsigned long long p_13[2][5], unsigned long p_15)
{
  long long v_21;
  unsigned int v_19;
  unsigned short v_17;
  char v_11;
  signed char v_7;
  unsigned short v;
  unsigned char result;
  v_21 = (long long)p_5;
  v_19 = (unsigned int)p_13[0][2];
  v_17 = (unsigned short)17314;
  v_11 = (char)p_9[0];
  v_7 = (signed char)p;
  v = (unsigned short)(((p_13[1][2] * (unsigned long long)v_17 | (unsigned long long)(
                         (int)v_11 + (int)p_9[1])) * (unsigned long long)v_19) % (unsigned long long)(
                       ((long long)v_17 + v_21) + 755LL));
  v_11 = (char)((unsigned long long)p_5 + ((3657764612ULL + (9110ULL - p_13[0][3])) + (unsigned long long)(
                                           ~ p_15 / 51607UL)));
  v = (unsigned short)((int)v & (((int)v_7 % ((int)p_9[1] + 3) + ((int)((char)-1829044224.f) - (int)v_11)) | -30778));
  result = (unsigned char)(~ ((unsigned long long)((p - 226L) + (long)5002721565.74) % (
                              (unsigned long long)((unsigned long)v + p_5) * (
                              (unsigned long long)p + 12493ULL) + 630ULL)));
  return result;
}


