#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 217335815
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned int p, unsigned short p_5, long p_7,
                       unsigned long long p_9, unsigned long p_11)
{
  char v_23;
  unsigned int v_21;
  short v_19;
  unsigned char v_17;
  float v_15;
  unsigned short v_13;
  long long v;
  unsigned long long result;
  v_21 = 3844656126U;
  v_19 = (short)p_9;
  v_17 = (unsigned char)p;
  v_15 = (float)p;
  v_13 = (unsigned short)30430;
  result = 64868ULL;
  while (((unsigned long long)(4003427571UL % (unsigned long)((int)p_5 + 561)) * 317025178711903ULL) % (unsigned long long)(
         (int)((unsigned char)(- v_15)) % ((int)(~ v_17) + 951) + 969) > (unsigned long long)p) {
    v_13 = (unsigned long long)v_19 / 778494713ULL;
    v = (long long)v_13;
    v_23 = (char)(~ ((result % 743807345ULL) / (unsigned long long)(~ p_11 + 854UL)));
    v_17 = (unsigned char)(~ ((long long)v_23 % (((long long)v_21 - v) + 904LL)));
  }
  while_0_break: ;
  if (p_11 >= (unsigned long)v_13) {
    v = (long long)((unsigned int)(! (~ p_5)) ^ ! (- p));
    result = (unsigned long long)(~ v ^ 52986660LL) * ((unsigned long long)(- p) + 18446744073091289090ULL);
  }
  else result = (unsigned long long)p_7 / (! (p_9 | 18446744073709527299ULL) + 698ULL);
  return result;
}


