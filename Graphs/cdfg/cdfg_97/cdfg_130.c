#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 204382979
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned int p[1][4], short p_7, unsigned long p_13[1][3],
                  char p_15, long long p_17)
{
  char v_11;
  int v_9;
  unsigned int v_4;
  unsigned long v;
  unsigned long result;
  v_11 = (char)-40;
  v_9 = (int)p_15;
  v_4 = 4294966333U;
  v = (unsigned long)p[0][2];
  result = (unsigned long)((long long)(! (- v_11)) * (~ p_17 + (long long)p_13[0][2]));
  while ((unsigned long long)(7285 >> ((v + (unsigned long)v_4) * (unsigned long)p[0][0] & 15UL)) >= 
         (unsigned long long)(0 / (- v + 899UL)) + (18446744073553256659ULL >> 8) * (unsigned long long)(
                                                   (int)p_7 / (v_9 + 352))) {
    v_4 = (unsigned int)v_11 * 3405359511U;
    v_11 = p_15;
    result = (unsigned long)(- ((unsigned long long)p[0][2] + (24254ULL << 61)));
    v = - (~ p_13[0][0] % (! v + 886UL));
  }
  while_0_break: ;
  return result;
}


