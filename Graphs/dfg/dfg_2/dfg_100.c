//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 475416900
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long long fn1(short p, unsigned char p_5, char p_7,
                       unsigned long p_11, float p_13)
{
  unsigned long long v_17;
  long long v_15;
  short v_9;
  signed char v;
  unsigned long long result;
  v_17 = 975993002ULL;
  v = (signed char)-26;
  v_15 = (long long)(! ((unsigned int)(97 - (int)p_5)) - (unsigned int)(~ v));
  v_9 = (short)((unsigned long long)(- (~ v_15 * 63LL)) * (! (v_17 + 18446744072830194069ULL) % (unsigned long long)(
                                                           (int)((float)v_15 - p_13) % (
                                                           (int)p_7 * 59 + 234) + 156)));
  v = (signed char)(! ((unsigned long)p_7 ^ (unsigned long)v_9 / (p_11 + 987UL)) % (
                    (unsigned long)p_13 + 224UL));
  result = (unsigned long long)(1U % (((unsigned int)((int)(! p) >> (
                                                      (int)v * (int)p_5 & 15)) & (
                                       934674782U & (unsigned int)p)) + 486U));
  return result;
}


