#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 21054615
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(unsigned long p, signed char p_7, double p_9, int p_15,
                 unsigned long p_17)
{
  unsigned long long v_23;
  char v_21;
  char v_19;
  unsigned long long v_13;
  unsigned int v_11;
  long v_5;
  long long v;
  unsigned int result;
  v_21 = (char)68;
  v_11 = 4008U;
  v_5 = (long)p;
  v_23 = (unsigned long long)(- (p_9 * p_9) + (double)((unsigned long)-384.118035477 * p_17));
  if (v_23 > 112ULL) {
    v = (long long)v_11;
    v_5 = (long)((int)((double)((int)p_7 / -14351) - - p_9) + 19163825);
    result = (unsigned int)(((p - 4294944010UL) << ((v - -618550279LL) & 31LL)) % (unsigned long)(
                            v_5 + 735L));
  }
  else {
    v_19 = (char)p;
    v_13 = ((unsigned long long)((int)v_19 - (int)p_7) + ((unsigned long long)v_21 + v_23)) << (
           v_5 & 63L);
    result = (unsigned int)(~ v_13 * (unsigned long long)(p_15 * 6279) - (unsigned long long)p_17);
  }
  return result;
}


