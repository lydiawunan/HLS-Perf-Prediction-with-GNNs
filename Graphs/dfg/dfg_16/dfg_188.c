#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 347925167
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(float p, char p_7, signed char p_13, unsigned short p_15,
           char p_17)
{
  char v_19;
  long long v_11;
  short v_9;
  unsigned long v_5;
  double v;
  double result;
  v_19 = (char)-87;
  v_11 = (long long)p_13;
  v_9 = (short)-16374;
  v_11 = v_11;
  v = (double)(~ ((v_11 & (long long)p_13) % (long long)(((int)p_15 - (int)p_17) + 994)) + (long long)(! (
               (int)((short)((float)v_19 * p)) * -1903)));
  v_5 = (unsigned long)(((float)(- (-57 & (int)p_7)) + (float)(- v_9) * p) / (
                        p + 738.f));
  result = (double)((long long)(- (- p)) % ((-736205720LL % ((long long)(
                                                             32. * v) + 469LL) - (long long)v_5) + 736LL));
  return result;
}


