#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 69667832
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned int p, unsigned long long p_5, unsigned short p_15)
{
  unsigned long v_17;
  long v_13;
  unsigned int v_11;
  unsigned long long v_9;
  unsigned int v_7;
  unsigned char v;
  signed char result;
  v_13 = (long)p_15;
  v_11 = 47041U;
  v_9 = 49639ULL;
  v_7 = 56649U;
  v = (unsigned char)p;
  result = (signed char)-15;
  while ((unsigned long long)p >= 1ULL - ! (p_5 % (unsigned long long)(
                                            (int)result + 673))) {
    v_17 = v_11 ^ v_7 / 12U;
    v_11 = (unsigned int)((unsigned long long)((unsigned long)p_15 / (
                                               v_17 + 369UL) >> (((unsigned long)p_15 + v_17) & 31UL)) * (
                          (v_9 * (unsigned long long)-3998681856.f) % (unsigned long long)(
                          (unsigned int)p_15 % (p + 809U) + 291U)));
    v_7 = (unsigned int)(~ ((unsigned long)(! v) / 32176985UL));
    result = (signed char)(~ (((unsigned long long)v_13 * v_9) % (unsigned long long)(
                              ((unsigned int)p_15 + p) + 532U)));
  }
  while_0_break: ;
  result = (signed char)(! (56196L / (long)((int)result + 453) ^ (long)v));
  return result;
}


