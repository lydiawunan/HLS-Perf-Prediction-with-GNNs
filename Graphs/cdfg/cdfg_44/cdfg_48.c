#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 240487718
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned short p, int p_9, unsigned int p_13, char p_17)
{
  unsigned long v_19;
  int v_15;
  int v_11;
  unsigned char v_7;
  unsigned int v_4;
  unsigned char v;
  unsigned char result;
  v_19 = 6207UL;
  v_15 = (int)p_17;
  v_7 = (unsigned char)p_13;
  result = (unsigned char)p_13;
  if ((unsigned long long)(- ((unsigned int)v_15 - 60756U) * (unsigned int)p_17) >= ! (
      (40407ULL - (unsigned long long)v_19) / (unsigned long long)(38348UL * (unsigned long)p + 957UL))) {
    v_4 = (unsigned int)(! ((p_9 >> ((int)v_7 & 31)) & 13978));
    v_7 = (unsigned char)(~ (- ((int)p >> ((int)result & 15))));
    v = (unsigned char)((! v_4 - (unsigned int)(- v_7)) / 27588U);
  }
  else {
    v = (unsigned char)74;
    v_11 = (int)(! 0LL);
    v_4 = (unsigned int)(~ (~ (p_9 / (v_11 + 484))));
  }
  result = (unsigned char)(42819452142ULL / (unsigned long long)((unsigned int)v % (
                                                                 v_4 + 439U) + 108U) + (unsigned long long)((long long)(- p)));
  return result;
}


