#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 212602180
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned short p, int p_7[5], float p_11)
{
  long v_9;
  long long v_4;
  char v;
  short result;
  v_9 = 1034428601L;
  v_4 = (long long)(((long)((int)(~ p) / (p_7[1] + 584)) & ~ (v_9 + (long)p)) % (
                    ~ ((long)p_11 / (! v_9 + 342L)) + 554L));
  v = (char)(v_4 + v_4);
  v_4 = ~ (- (~ -303561784LL));
  result = (short)((long long)v / (- v_4 / -26763LL + 489LL));
  return result;
}


