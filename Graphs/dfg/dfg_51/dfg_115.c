#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 931008752
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(unsigned short p, unsigned long long p_4, unsigned short p_13,
        unsigned int p_15)
{
  long v_11;
  long v_9;
  unsigned int v_7;
  double v;
  int result;
  v_11 = 6612L;
  v_7 = (unsigned int)p;
  result = -191501756;
  v_11 = (long)(0UL / (! (4294905235UL & (unsigned long)v_11 * (unsigned long)p_15) + 613UL));
  v_9 = (long)(- ((unsigned long long)v_11 + p_4) / (unsigned long long)(
               (int)p_13 + 418) + 366ULL);
  v = (double)(-43LL % ((long long)v_9 % 35033LL + 222LL));
  result = (int)((unsigned int)(- (result + (int)p) % ((int)(-3854135253.35 + (
                                                             (double)p_4 + v)) + 313)) / (
                 v_7 + 588U));
  return result;
}


