#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1028241912
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned int p_5, long p_7,
                  unsigned long long p_11, signed char p_15[2][4])
{
  unsigned int v_21;
  char v_19;
  long v_17;
  long long v_13;
  unsigned int v_9;
  short v;
  unsigned char result;
  v_21 = 29512U;
  v_19 = (char)20;
  v_17 = -25375L;
  v_13 = -177259063LL;
  v_9 = 3386147211U;
  v = (short)p_11;
  while ((unsigned long)v_17 > (unsigned long)(! ((unsigned int)((int)v % -1441) / 4294950429U))) {
    v_9 = v_21 / 26059U;
    v_13 = (long long)(~ (- p_15[0][0]));
    v_21 = (unsigned int)(-99555840LL + (long long)((unsigned int)(! v) + (
                                                    p_5 << 24LL)));
    v_17 = (long)((unsigned long long)(4700520 >> ((int)v_19 & 31)) % (
                  - (608103799ULL / (unsigned long long)(v_21 + 710U)) + 860ULL));
  }
  while_0_break: ;
  if ((unsigned long long)((3524606470UL - (unsigned long)p_7) / (unsigned long)(
                           (int)(~ v) + 227) - (unsigned long)v_9) != (
      ((unsigned long long)-7817536000.f / (p_11 + 824ULL) - (unsigned long long)(- v_13)) & (unsigned long long)(
      (int)-2.96019142107e+38 + (int)v * (int)p_15[0][3]))) result = (unsigned char)84;
  else {
    v = (short)(p_5 / 196U);
    v = (short)((int)v * -332797704);
    result = (unsigned char)((unsigned int)v + 121U / (((unsigned int)p + 3629041549U) + 479U));
  }
  return result;
}


