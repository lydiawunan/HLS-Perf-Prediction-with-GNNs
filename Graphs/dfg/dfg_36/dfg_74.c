#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 732159420
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p[3][1], long long p_7, unsigned long long p_11, float p_15,
        signed char p_19[2][4][3])
{
  short v_17;
  unsigned long v_13;
  int v_9;
  long v_4;
  unsigned long long v;
  int result;
  v_17 = (short)-2722;
  v_13 = (unsigned long)p_15;
  v_9 = (int)p_11;
  v_9 = (int)((((long)v_9 + p[1][0] % -155L) + (long)((int)((short)((double)p_15 - -454.688389901)) / (
                                                      (int)v_17 + 217))) % (long)(
              (int)p_19[1][3][2] + 1007));
  v = (unsigned long long)v_13;
  v_4 = (long)((((unsigned long long)p_7 * 39656ULL - (unsigned long long)p_7) % (
                (unsigned long long)((long long)v_9 * 12806LL) / (! p_11 + 549ULL) + 84ULL)) / (
               ! (371501302ULL - (unsigned long long)p[1][0]) + 323ULL));
  result = (int)(- (36229ULL / ((v ^ (unsigned long long)(v_4 / (p[1][0] + 983L))) + 987ULL)));
  return result;
}


