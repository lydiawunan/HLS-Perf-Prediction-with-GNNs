#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 234644429
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, char p_13, int p_15)
{
  float v_11;
  char v_9;
  unsigned long long v_7;
  unsigned short v_4;
  signed char v;
  unsigned long long result;
  v_11 = (float)p_13;
  v_9 = (char)97;
  v_7 = 39112ULL;
  v = (signed char)p;
  while (503105536U == 150U % (unsigned int)((int)(- v) + 742) - 224U) {
    v_4 = (double)v_11 + 150.897226782;
    v_9 = (char)((47 * (int)p_13 - - p_15) / (60905 * ((int)v_4 << (p & 15UL)) + 887));
    v_7 = (unsigned long long)v % (v_7 % 18446744073202899321ULL + 357ULL);
    v = (signed char)(p % (unsigned long)(((int)v * (int)p_13 - (int)v) + 244));
  }
  while_0_break: ;
  if (- (~ v_7 / (unsigned long long)((int)(! v_9) + 344)) < 18446744073709498027ULL) {
    v_4 = (unsigned short)p;
    v = (signed char)v_4;
    result = (unsigned long long)(64495LL / ((long long)(~ v) / 20260LL + 427LL));
  }
  else result = (unsigned long long)(~ p);
  return result;
}


