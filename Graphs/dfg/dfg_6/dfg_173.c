//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 114237108
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p)
{
  long v_9;
  short v_7;
  unsigned long v_4;
  unsigned long long v;
  signed char result;
  v_7 = (short)7945;
  v = (unsigned long long)(-2962796LL);
  v_9 = (long)v_7;
  v_4 = (unsigned long)(176168055L / (- v_9 + 197L) + 54360L);
  result = (signed char)(- v / (unsigned long long)((- (v_4 / (unsigned long)(
                                                        (int)p + 569)) - (unsigned long)(~ (
                                                     71 & (int)v_7))) + 295UL));
  return result;
}


