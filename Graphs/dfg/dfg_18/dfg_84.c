#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 762299832
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(short p[3], long long p_9, unsigned long long p_11,
                  long p_13, long long p_15)
{
  int v_17;
  unsigned int v_7;
  long long v_5;
  unsigned short v;
  unsigned long result;
  v_17 = (int)p[1];
  v_5 = p_9;
  result = (unsigned long)p_15;
  v_7 = (unsigned int)p_11;
  v_5 = (long long)((((unsigned long long)(70LL - p_9) & p_11) / (unsigned long long)(
                     (long long)(! p_13) / (! v_5 + 262LL) + 626LL)) * (unsigned long long)(
                    - (p_15 - (long long)result) % (long long)(v_17 + 45)));
  v = (unsigned short)(~ ((long long)((int)p[0] - 12) / (841958460LL % (
                                                         v_5 + 923LL) + 344LL)) / (
                       ((long long)(- (v_7 * 54273U)) ^ p_9) + 734LL));
  result = (unsigned long)(~ v);
  return result;
}


