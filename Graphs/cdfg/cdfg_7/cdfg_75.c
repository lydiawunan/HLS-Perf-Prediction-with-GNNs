#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 521239009
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(int p[5], unsigned short p_9[2], long p_11)
{
  char v_7;
  int v_5;
  char v;
  char result;
  v_7 = (char)70;
  v_5 = -27118;
  v = (char)p_11;
  result = (char)p[2];
  while ((long long)(~ (p[3] % (p[2] + 572))) < ((long long)(4294911560UL << 25) / (
                                                 ((long long)result - -11724LL) + 1002LL)) / (long long)(
                                                (7316 * (int)v & p[3]) + 581)) {
    v_7 = (long long)v_7 - ((long long)v_5 - -1023486932LL);
    v_5 = (int)(((-36253L + (long)v) << ((p[4] - 114) & 31)) / -87L);
    v = (char)p_11;
    result = (char)(! (3585537874UL / (unsigned long)((int)p_9[0] + 1024) | (unsigned long)(! v_5)));
  }
  while_0_break: ;
  result = (char)((int)v >> ((int)result & 7));
  return result;
}


