//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 119263177
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned long long p, unsigned short p_5, unsigned long p_9,
                unsigned long p_11, char p_13)
{
  char v_17;
  int v_15;
  long long v_7;
  unsigned long long v;
  signed char result;
  v_17 = (char)67;
  v_15 = 387781349;
  v_7 = (long long)p_13;
  v_7 = (long long)(~ ((unsigned long long)(- ((long long)p_5 + 25932LL)) ^ - (
                       (unsigned long long)v_7 % 759012086ULL)));
  result = (signed char)((unsigned long long)p_13 | ((unsigned long long)(~ (
                                                     v_15 * (int)p_13)) & (
                                                     (unsigned long long)(
                                                     142 - (int)v_17) + p)));
  v = (unsigned long long)(~ (((long long)result - v_7) / (long long)(
                              p_9 % (p_11 + 355UL) + 384UL) + 927696044LL));
  result = (signed char)(p + ! (v + 18446744072882835099ULL) % (5350796953ULL * (unsigned long long)(! p_5) + 343ULL));
  return result;
}


