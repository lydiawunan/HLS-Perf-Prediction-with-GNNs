#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 312566568
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(signed char p, long p_5, short p_9, unsigned long long p_11,
                 unsigned short p_13)
{
  signed char v_17;
  unsigned int v_15;
  char v_7;
  char v;
  unsigned int result;
  v_17 = (signed char)-35;
  v_7 = (char)p_11;
  result = (unsigned int)((((unsigned long long)p_5 - ! p_11) << (- (
                                                                  (int)p * (int)p) & 63)) - 
                          (unsigned long long)(! (! p)) / (~ (p_11 - (unsigned long long)p_9) + 430ULL));
  v_15 = (unsigned int)(1 / ((long)((((double)p_5 + -5.56613391617e+37) - (double)(~ v_17)) + (double)p_11) + 422L));
  v = (char)((((unsigned long long)(p_5 * (long)v_7) + (unsigned long long)p_9 * p_11) % (unsigned long long)(
              (4294967213U / (result + 393U) - 4294967224U) + 585U)) / (unsigned long long)(
             4294907383UL / (unsigned long)(! ((unsigned int)p_13 + v_15) + 298U) + 91UL));
  result = (unsigned int)(~ (- ((unsigned long long)v / ((unsigned long long)p * 18446744073505687353ULL + 34ULL))));
  return result;
}


