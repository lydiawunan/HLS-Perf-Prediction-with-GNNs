#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 823138577
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long p, signed char p_4,
                unsigned long long p_6[1][3][3], long p_8, float p_13)
{
  char v_21;
  unsigned int v_19;
  unsigned int v_17;
  unsigned char v_15;
  unsigned int v_11;
  unsigned char v;
  signed char result;
  v_21 = (char)0;
  v_19 = (unsigned int)p_4;
  v_17 = (unsigned int)p;
  result = (signed char)127;
  if ((long)((int)p_4 - (int)p_4) > (long)(~ ((int)result % ((int)v_21 + 713))) + - (
                                    (long)p_13 + 220395245L)) {
    v_15 = (unsigned char)((unsigned long)((int)(- result) + 111) * - p);
    v = (unsigned char)p;
    result = (signed char)((unsigned long)((43 | (int)result) - (int)(
                                           p_13 - (float)p_6[0][0][1])) / (
                           ((unsigned long)p_8 ^ ((unsigned long)p_4 + p)) + 999UL));
  }
  else {
    v_15 = (unsigned char)((unsigned long long)(v_19 % (v_19 + 1010U)) % 288601979ULL - (unsigned long long)(! (
                           v_19 / (unsigned int)((int)result + 179))));
    v_17 = v_17;
    v = (unsigned char)(~ (~ p_6[0][1][2]) - (unsigned long long)(((unsigned long)p_4 + p) % (unsigned long)(
                                                                  ~ v_17 + 800U)));
  }
  while (0ULL <= (unsigned long long)(! p / (unsigned long)((int)result / (
                                                            (int)p_4 + 972) + 919)) + 
                 (p_6[0][2][0] - (unsigned long long)p_8) * 18446744073709551518ULL) {
    v_17 = (long long)v + -52842LL;
    v_11 = (unsigned int)(~ ((int)v_15 ^ (int)p_4)) + (v_17 + (unsigned int)p_4) / (
                                                      (unsigned int)p_4 % (
                                                      v_17 + 870U) + 783U);
    v = (unsigned char)(~ v_11 % ((unsigned int)(- ((float)p_6[0][1][2] * p_13)) + 755U));
    result = (signed char)(~ (! (! (unsigned char)72)));
  }
  while_0_break: ;
  return result;
}


