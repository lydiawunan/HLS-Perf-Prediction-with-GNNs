#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 664357283
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(int p[1][1], long long p_4, unsigned long long p_9,
                   char p_11, double p_13)
{
  int v_19;
  long long v_17;
  short v_15;
  double v_7;
  signed char v;
  unsigned short result;
  v_19 = -45655;
  v_17 = 627860164LL;
  v_15 = (short)p_9;
  v_7 = (double)p_9;
  v = (signed char)-52;
  result = (unsigned short)((float)(((long long)p[0][0] & v_17) % 982LL) / -3759891200.f);
  while (149084340LL > ! ((long long)p[0][0] - 637507000LL) % ((- p_4 + (long long)(
                                                                (int)v % (
                                                                (int)v + 744))) + 818LL)) {
    result = (unsigned long)v_7 + 4294923699UL;
    v_15 = (short)(((p_9 % (unsigned long long)(v_17 + 272LL)) / ((18446744073709549730ULL - (unsigned long long)v_19) + 223ULL)) / (
                   (unsigned long long)(- result) / ((unsigned long long)v_15 % (
                                                     p_9 + 107ULL) + 696ULL) + 890ULL));
    v_7 = (double)v_15;
    v = (signed char)((double)(p_9 / (unsigned long long)((int)p_11 % (
                                                          (int)((char)p_13) + 934) + 997)) + 
                      - v_7 * p_13);
  }
  while_0_break: ;
  return result;
}


