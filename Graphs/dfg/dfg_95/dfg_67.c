#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 736618590
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(char p, unsigned long p_5, float p_11)
{
  signed char v_9;
  unsigned char v_7;
  signed char v;
  long result;
  v_9 = (signed char)p_5;
  v_7 = (unsigned char)p;
  result = (long)p_5;
  v_9 = v_9;
  result = (((long)p * result + (long)(- v_7)) / (long)((int)v_9 + 478)) % (long)(
           ((int)((unsigned char)(p_11 - 100.f)) - 237) + 802);
  v = (signed char)(1388790656UL % ((((unsigned long)((int)p * -40) - ~ p_5) >> (
                                     - ((long)7276582071.71 / (result + 583L)) & 31L)) + 832UL));
  result = (long)(! (((unsigned int)(- v) / 100606688U) * (unsigned int)v));
  return result;
}


