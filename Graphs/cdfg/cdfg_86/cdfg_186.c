#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 918157295
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(char p, unsigned short p_4, unsigned long p_6, int p_8,
                   unsigned long long p_10[1][4][1])
{
  signed char v_21;
  float v_19;
  char v_17;
  unsigned int v_15;
  long long v_13;
  unsigned long v;
  unsigned short result;
  v_19 = (float)p_8;
  v_17 = (char)-115;
  v_15 = 58921U;
  v_13 = (long long)p_4;
  v = 22685UL;
  result = (unsigned short)p;
  while ((unsigned long long)(! p) > ((4294911428ULL * p_10[0][2][0]) * (unsigned long long)(
                                      (unsigned int)p_4 * v_15)) / (unsigned long long)(
                                     ! ((unsigned long)v_17 % (p_6 + 559UL)) + 738UL)) {
    v_21 = v_19 / 24398.f;
    v = (unsigned long)result;
    v_17 = ~ (char)-43;
    v_15 = (unsigned int)(~ (317227815ULL * (unsigned long long)v_21 ^ (
                             p_10[0][1][0] << 50UL)));
  }
  while_0_break: ;
  if (- ((long long)v * (v_13 * (long long)p_8)) != (long long)p) result = (unsigned short)p;
  else result = - (- p_4);
  return result;
}


