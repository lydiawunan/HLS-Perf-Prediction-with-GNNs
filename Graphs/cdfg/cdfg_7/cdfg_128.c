#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 950335787
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, unsigned int p_7, char p_15)
{
  unsigned int v_17;
  unsigned long v_13;
  float v_11;
  double v_9;
  long long v_4;
  unsigned char v;
  unsigned short result;
  v_17 = p_7;
  v_13 = (unsigned long)p;
  v_11 = -378.680938721f;
  v_9 = -3.29112486688e+38;
  v_4 = (long long)p_15;
  v = (unsigned char)p_15;
  result = (unsigned short)27472;
  if ((((unsigned long)((long)p_15 - p) - 6382UL % (v_13 + 48UL)) & (unsigned long)p) > (unsigned long)(- v_9)) {
    v = (unsigned char)v_13;
    v_11 = (float)(! (p_7 + 16607U) - (unsigned int)p_15);
    result = (unsigned short)((unsigned long long)(4294967209UL % (v_13 + 319UL) - (
                                                   v_13 ^ 4294967198UL)) - (
                              (unsigned long long)p + 18446744073709537547ULL));
  }
  else {
    v_13 = (unsigned long)(! ((unsigned long long)(32077U + v_17) - (
                              (unsigned long long)p_7 - 18446744073207500781ULL)));
    v_9 = (double)((v_13 % (unsigned long)(p_7 + 143U)) / ((unsigned long)v_9 + 598UL));
    v_4 = (long long)(~ ((unsigned long long)p_15 % ((unsigned long long)v_17 / 638305992ULL + 766ULL)));
  }
  while ((long long)v * (535569724LL | (v_4 + (long long)p)) >= (long long)(! p_7)) {
    v_13 = (int)((signed char)v_9) + -63;
    v_9 = (double)(! ((long long)((unsigned long)p_7 - 761884172UL) | (
                      (long long)v_13 + -941451LL)));
    v = (unsigned char)(~ ((unsigned long)(8626L - p) + (unsigned long)p_7 * 4294964831UL));
    v = (unsigned char)(- (((unsigned long long)v_11 % 3978ULL) / (unsigned long long)(
                           (int)v + 948)));
  }
  while_0_break: ;
  return result;
}


