#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 988987058
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(unsigned short p, char p_13, double p_15, float p_17[3])
{
  unsigned long long v_11;
  short v_9;
  char v_7;
  float v_5;
  unsigned int v;
  long long result;
  v_11 = 18446744073709506299ULL;
  v_9 = (short)-20342;
  v_7 = (char)p;
  v_5 = p_17[1];
  v = 3425884271U;
  result = (long long)(((int)((unsigned short)p_17[1]) - (int)(! p)) / (
                       (int)p_13 % 296 + 441));
  while ((unsigned long long)(((unsigned int)p * v) * (unsigned int)(
                              v_5 / ((float)p + 471.f))) * ! (249907855ULL | (unsigned long long)v_7) != (unsigned long long)(
         ((unsigned int)v_9 + 3405630399U) % 4294966586U)) {
    result = (float)v_11 + 7045158400.f;
    v = v;
    v_11 = (unsigned long long)(~ (((int)((unsigned char)p_15) + 101) * (int)p_15));
    v_7 = (char)((100LL / (result + 464LL) + 113LL) * ((-293274379LL % (
                                                        (long long)v_5 + 31LL)) * (long long)(! p_13)));
  }
  while_0_break: ;
  return result;
}


