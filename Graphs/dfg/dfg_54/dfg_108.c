#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 561151873
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p)
{
  signed char v_11;
  unsigned long v_9;
  unsigned int v_6;
  signed char v_4;
  char v;
  int result;
  v_11 = (signed char)p;
  v_9 = (unsigned long)p;
  v_6 = 3341049646U;
  v_4 = (signed char)p;
  result = (int)p;
  v_6 = (unsigned int)(- ((unsigned long)(~ v_11) * ((unsigned long)p + (unsigned long)v_6)) ^ 59UL);
  v_9 %= (unsigned long)(- (((long)v_4 - -152523594L) / (p % -59L + 391L)) + 624L);
  v = (char)((((unsigned long)((unsigned int)v_4 * v_6) | (unsigned long)(
               p % -10340L)) % (((4294967242UL & v_9) + (unsigned long)(! p)) + 128UL)) / (unsigned long)(
             result + 838));
  result = 2 / ((int)((char)6.94740728527e+37f) % ((int)v + 266) + 920);
  return result;
}


