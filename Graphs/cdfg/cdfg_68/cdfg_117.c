#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 828595342
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned int p, int p_4, float p_6, long long p_8,
         unsigned long p_10)
{
  unsigned long v_21;
  unsigned int v_19;
  unsigned short v_17;
  char v_15;
  unsigned long long v_13;
  unsigned char v;
  long result;
  v_21 = 644972524UL;
  v_19 = 4034982000U;
  v_17 = (unsigned short)40527;
  v_13 = 567609703ULL;
  v = (unsigned char)p;
  result = (long)p_6;
  v_15 = (char)((unsigned long long)v_17 - ((unsigned long long)(50U * v_19) + 
                                            (unsigned long long)v_21 % 18446744073709535727ULL));
  while ((unsigned long)(- p_6 + (float)p_8) < 248508122UL + (unsigned long)(
                                               44812L * (long)-6.5397262887e+37f << (
                                               (p_10 | (unsigned long)v) & 31UL))) {
    v_13 = (unsigned long long)v_15 & v_13 / 18446744073709551575ULL;
    v_15 = (char)((long long)(~ p + (p - 19842U)) + ((long long)p_4 & (
                                                     p_8 - 34545LL)));
    v_15 = v_15;
    v = (unsigned char)p_8;
  }
  while_0_break: ;
  return result;
}


