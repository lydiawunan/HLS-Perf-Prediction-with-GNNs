#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1021445026
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(long p, long p_4)
{
  double v_9;
  unsigned long v_7;
  int v;
  long result;
  v_7 = (unsigned long)p;
  v = -234880381;
  v_9 = (double)(! (! (! 8190LL)));
  if ((double)(! (29458L % (p_4 + 845L) + 260L)) < (double)((unsigned long)(~ v) % (
                                                            v_7 + 330UL)) - v_9) 
    result = ~ (- (! p));
  else result = 148L;
  return result;
}


