#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 681359646
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(float p, long p_9, char p_11, signed char p_13,
                 unsigned long p_15)
{
  int v_23;
  long v_21;
  unsigned short v_19;
  double v_17;
  long v_7;
  double v_5;
  short v;
  unsigned int result;
  v_23 = 379062973;
  v_21 = (long)p_11;
  v_19 = (unsigned short)p_9;
  v_5 = (double)p;
  result = 4294962417U;
  if ((double)(~ (p_15 / (unsigned long)((int)p_11 + 343))) + v_5 > (double)(
      ! ((long long)v_19 / 30235LL) - (long long)((unsigned long)(result - (unsigned int)p_13) / (
                                                  (unsigned long)v_19 % 651740590UL + 193UL)))) {
    v_5 = (double)((unsigned long)v_21 / 6770UL | 52218UL);
    v_7 = 44L;
    v_17 = (double)v_19;
  }
  else {
    v_7 = -73L;
    v_5 = (double)(((float)(v_23 ^ (int)p_13) * 2.53670642711e-29f) / 28891.f);
    v_17 = (double)result;
  }
  if (0 > (long long)((double)(((unsigned long)v_7 * p_15) * 153UL) - 
                      -639014598.404 / ((double)((unsigned long)v_17 ^ p_15) + 241.))) 
    result = (unsigned int)(- (- (- p)));
  else {
    v_7 = p_9;
    v = (short)(-25785L - v_7);
    result = (unsigned int)((double)(- (! v)) * v_5);
  }
  return result;
}


