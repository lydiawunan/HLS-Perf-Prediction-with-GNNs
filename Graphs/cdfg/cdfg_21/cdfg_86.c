#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 105697187
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned char p, char p_4, unsigned long p_9, long long p_11,
        float p_15)
{
  unsigned long v_25;
  signed char v_23;
  signed char v_21;
  double v_19;
  short v_17;
  char v_13;
  long long v_7;
  unsigned long long v;
  int result;
  v_25 = p_9;
  v_23 = (signed char)29;
  v_21 = (signed char)-6;
  v_19 = 2.02238820964e+36;
  v_17 = (short)7944;
  v_13 = (char)57;
  v_7 = -983115346LL;
  result = 43482;
  while ((49822ULL - (unsigned long long)(- v_19)) % 4294967295ULL < (unsigned long long)(! (
         (int)v_23 % ((int)((signed char)(p_15 / ((float)p_9 + 389.f))) + 781)))) {
    result = (int)(15929UL + ((unsigned long)p_4 * v_25 - (unsigned long)(
                              4129031515U * (unsigned int)v_13)));
    result = (int)(~ ((p_11 / -412216312LL) * (long long)(~ result)));
    v_23 = (signed char)((~ p_11 / (! p_11 + 67LL)) / (long long)(~ (
                                                                  3605149968U / (
                                                                  (unsigned int)p_15 + 521U)) + 938U));
  }
  while_0_break: ;
  if (! (~ v_7 + (long long)(result ^ (int)p)) <= (long long)((unsigned long)(
                                                              (int)v_17 - (int)((short)v_19)) * (
                                                              p_9 - (unsigned long)v_21) | ! (
                                                              p_9 + (unsigned long)p_4))) {
    v_7 = (long long)(- v_13);
    v = (unsigned long long)(! (667254510LL / ((p_11 - 12LL) + 340LL)));
    result = (int)(((unsigned long long)((int)p >> ((int)p_4 & 7)) / (
                    v / (unsigned long long)(v_7 + 300LL) + 672ULL)) * (unsigned long long)(~ p_9));
  }
  else result = (int)p_15;
  return result;
}


