#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 294181805
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, short p_7, int p_15[3][2][1])
{
  unsigned short v_13;
  double v_11;
  long v_9;
  unsigned int v_5;
  long long v;
  unsigned char result;
  v_13 = (unsigned short)p;
  v_9 = (long)p;
  v = (long long)p_15[0][1][0];
  result = (unsigned char)p_15[2][1][0];
  v_5 = (unsigned int)((v * 164LL + (long long)(p_15[0][1][0] % 534734128)) % -58627740LL);
  while ((((long long)p / (v + 732LL)) % (long long)(- v_5 + 378U)) * v >= (long long)(~ (
         847 << (p % ((int)p_7 + 116) & 31)))) {
    v_11 = (unsigned long)v_13 - ((unsigned long)v_9 - 4294926613UL);
    v_9 = (long)v_11;
    result = (unsigned char)210;
    v = 630051855LL - (long long)p;
  }
  while_0_break: ;
  return result;
}


