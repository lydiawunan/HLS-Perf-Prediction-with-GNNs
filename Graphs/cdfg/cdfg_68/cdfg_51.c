#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 222418906
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(short p, unsigned long p_9, unsigned int p_11,
                  unsigned long p_15)
{
  long v_17;
  long v_13;
  double v_7;
  unsigned long long v_5;
  unsigned int v;
  unsigned char result;
  v_13 = (long)p_15;
  v_7 = 82.6469370736;
  v_5 = 528367261ULL;
  v = 94393947U;
  result = (unsigned char)222;
  v_17 = (long)(- 3246052670.38);
  while ((unsigned long long)(- v % (unsigned int)((-26405 | (int)p) + 923)) * (
         ~ v_5 / ((unsigned long long)(- v_7) + 953ULL)) < (unsigned long long)(
         p_9 * (unsigned long)(- p_11))) {
    v = v_13 / -227335897L;
    v_5 = (unsigned long long)(! p_15 % (unsigned long)(v_17 + 322L)) - 
          18446744073499909715ULL % (unsigned long long)(p_11 + 600U);
    result = (unsigned char)(! (! ((unsigned long long)p % 348363105ULL)));
    v_7 = (double)(! (18446744073147101488ULL % (unsigned long long)(
                      p_15 + 467UL)) & (unsigned long long)v);
  }
  while_0_break: ;
  return result;
}


