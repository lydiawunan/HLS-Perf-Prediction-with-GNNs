#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 830281447
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(float p, unsigned long p_5, int p_7, long long p_9,
        unsigned long long p_13)
{
  unsigned long v_17;
  unsigned long v_15;
  unsigned long long v_11;
  unsigned long long v;
  int result;
  v_17 = 562480302UL;
  v_15 = (unsigned long)p_13;
  if ((unsigned long long)(! (~ v_15)) * (p_13 % 617077541ULL + 11992ULL) != (unsigned long long)(~ (
      6707UL * (4294928959UL - v_17)))) v_11 = p_13 % (unsigned long long)(
                                               ~ p_9 + 553LL);
  else v_11 = (unsigned long long)p_9;
  if (((unsigned long long)(- p_5 & (unsigned long)p_7) | ((unsigned long long)(
                                                           p_9 * 4253565679LL) - 1070127747ULL)) == v_11) {
    v = -4294939855ULL;
    result = (int)v;
  }
  else result = (int)(- (- (- p)));
  return result;
}


