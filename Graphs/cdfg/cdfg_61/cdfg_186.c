#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 738315975
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(unsigned long p, signed char p_5, float p_7,
                       unsigned char p_13, char p_15[1])
{
  short v_23;
  short v_21;
  double v_19;
  signed char v_17;
  unsigned long v_11;
  int v_9;
  unsigned char v;
  unsigned long long result;
  v_23 = (short)p_13;
  v_21 = (short)-31872;
  v_19 = 2951832525.64;
  v_11 = 635703254UL;
  v_9 = -52397;
  result = (unsigned long long)p;
  if ((float)((unsigned long)(~ ((int)v_23 % ((int)((short)v_19) + 852))) * (
              (3644978259UL + (unsigned long)v_23) - - v_11)) > p_7) {
    v = (unsigned char)190;
    v_9 = 2;
    v_11 = (unsigned long)((float)p_15[0] * (- p_7 * -7.7520824768e+37f));
  }
  else {
    v_17 = (signed char)((unsigned long long)((4294955405UL + (unsigned long)v_19) / (
                                              (455147614UL - (unsigned long)v_21) + 966UL)) ^ 
                         (18446744073709551444ULL + result) % (unsigned long long)(
                         (unsigned int)p_5 / 55768U + 382U));
    v = (unsigned char)(((unsigned long)(- v_19) % (v_11 % 41831UL + 494UL)) * (unsigned long)p_5);
    v_11 += (unsigned long)(- ((float)v_17 * p_7));
  }
  if (((unsigned long)(v_9 ^ 3287) + p) / (~ v_11 % (unsigned long)((int)p_13 * (int)v + 934) + 350UL) < ~ (~ (
      (unsigned long)p_7 * v_11))) result = (unsigned long long)p;
  else {
    v = (unsigned char)(! ((int)p_5 % ((int)((signed char)p_7) + 654)));
    result = (unsigned long long)((int)(! v) % 125);
  }
  return result;
}


