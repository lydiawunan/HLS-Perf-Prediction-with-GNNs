#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 713464763
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, unsigned long long p_4, signed char p_11)
{
  unsigned int v_15;
  char v_13;
  char v_9;
  char v_7;
  unsigned long long v;
  int result;
  v_15 = 12587U;
  v_13 = (char)92;
  v_9 = (char)v_15;
  v = (unsigned long long)(- v_13);
  v_7 = (char)(- (~ (3632 + (int)v_9 / ((int)p_11 + 440))));
  result = (int)(((unsigned long long)(! p % (~ p + 113L)) % (p_4 + 887ULL)) % (
                 (v / (unsigned long long)((int)v_7 + 107) + 24ULL) * 30378ULL + 40ULL));
  return result;
}


