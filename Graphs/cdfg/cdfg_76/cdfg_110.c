#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 803379028
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long long p, short p_4[5], unsigned long long p_6,
                 unsigned long p_8, unsigned char p_10)
{
  short v_23;
  int v_21;
  short v_19;
  signed char v_17;
  int v_15;
  unsigned long long v_13;
  short v;
  unsigned int result;
  v_23 = (short)-26245;
  v_21 = -36514;
  v_19 = (short)11760;
  v_17 = (signed char)122;
  v_15 = (int)p;
  v_13 = 20737ULL;
  v = (short)3190;
  result = 57990U;
  while ((int)(! (~ v_19)) + ((68 & v_21) & (int)(! p_4[4])) < 24381) {
    v = (unsigned int)v_23 - 36857U;
    v_17 = (signed char)((unsigned long long)p_8 * p + (p_6 ^ (unsigned long long)p_8) * (unsigned long long)(
                                                       (int)p_4[1] / 49));
    v_21 = (int)((unsigned long long)(4294946857UL - p_8) * ! (! p_6));
    v_19 = (short)(((unsigned long long)(result % (result + 377U)) + (
                    18446744073393135911ULL ^ p)) + (unsigned long long)v_17);
  }
  while_0_break: ;
  if (0ULL == (p * (unsigned long long)v_15) * (18446744073709551590ULL * v_13) - (unsigned long long)(
              4294967214UL / ((unsigned long)v_17 / (p_8 + 539UL) + 177UL))) {
    result = (unsigned int)p_8;
    result = (unsigned int)((((unsigned long long)result - p) | (unsigned long long)(- p_4[1])) + ~ (! p_6));
  }
  else {
    v = (short)10753;
    result = (unsigned int)(18446744073709540281ULL + ((unsigned long long)(- p_10) ^ (
                                                       p - (unsigned long long)v)));
  }
  return result;
}


