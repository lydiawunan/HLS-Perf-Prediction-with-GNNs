#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 778504095
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long long fn1(long p, long p_5, unsigned int p_9, unsigned int p_13,
              unsigned int p_17)
{
  long v_15;
  long long v_11;
  signed char v_7;
  unsigned long long v;
  long long result;
  v_15 = -64568L;
  v_11 = (long long)p;
  v_7 = (signed char)p_17;
  v = 18446744073709514250ULL;
  result = (long long)p_9;
  if ((float)(~ (137LL + result)) - -91.1411056519f >= (float)((((unsigned long)p_17 + 4294953118UL) - (unsigned long)v_7) | 255UL)) {
    v_15 = (long)p_17;
    v_11 = (- v_11 + (long long)p_9) - (-427729014LL / (v_11 + 848LL)) / (
                                       v_11 % (long long)(p_13 + 817U) + 7LL);
    v_7 = v_7;
  }
  else {
    v = (unsigned long long)(- (13057U * p_17)) + (unsigned long long)(- result) * - v;
    v_15 = (long)((44867ULL % (unsigned long long)(v_15 + 85L) & 18446744073676460255ULL) / (unsigned long long)(
                  (int)(- v_7) + 894));
    v_7 = (signed char)((unsigned long long)(277225467UL * (unsigned long)(
                                             p_17 + 3804460965U)) % (
                        (unsigned long long)p_17 % (~ v + 377ULL) + 277ULL));
  }
  if ((unsigned long long)((long long)(~ ((unsigned int)v_7 + p_9)) - ~ (
                           v_11 << (p_13 & 63U))) != (unsigned long long)(- (
      v_15 - -30358L))) {
    v = (unsigned long long)(! (- p - p_5 % (p + 468L)));
    result = (long long)(18446744073709504940ULL - ((unsigned long long)(- p) - ! v));
  }
  else result = (long long)(- p_5);
  return result;
}


