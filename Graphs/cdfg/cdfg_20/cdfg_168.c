#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 902837689
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(int p, signed char p_5, unsigned char p_7, long p_15[2],
                long long p_21)
{
  long v_19;
  double v_17;
  unsigned long v_13;
  long v_11;
  int v_9;
  unsigned long v;
  signed char result;
  v_19 = (long)p_5;
  v_13 = (unsigned long)p_7;
  v_9 = -27086;
  v = 4294952313UL;
  v_17 = (double)(! ((unsigned long)((double)p_7 / 672.808707702) + v / (
                                                                    v_13 + 703UL)));
  if ((long long)(- (- v_17) - -38.) <= (long long)(~ v_19) - (849936098LL & (
                                                               (long long)p_15[1] + p_21))) {
    v = (unsigned long)(5392856864. - (double)v_9);
    result = (signed char)((long long)p_5 % (~ ((long long)p_7 * 39403LL) + 119LL));
    result = (signed char)((unsigned long)((long)(p + p) % 9728L) * (
                           (unsigned long)(~ result) * (4294938555UL | v)));
  }
  else {
    v_13 = (unsigned long)(~ (p_15[0] / (long)(((int)((short)8134199776.43) - 27807) + 46)));
    v_11 = (long)(~ (~ (18446744073402021864ULL * (unsigned long long)v_13)));
    result = (signed char)((long long)v_11 + -23385LL);
  }
  return result;
}


