#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1021620845
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(long p[1], unsigned char p_5, double p_11,
                  unsigned long p_13, double p_19)
{
  float v_21;
  unsigned long long v_17;
  long v_15;
  unsigned int v_9;
  signed char v_7;
  char v;
  unsigned char result;
  v_21 = (float)p_11;
  v_17 = 18446744073709543467ULL;
  v_7 = (signed char)p_19;
  if (34528LL >> (! (p_13 ^ (unsigned long)v_21) & 63UL) >= (long long)p[0]) {
    result = (unsigned char)p_13;
    v_7 = (signed char)(! (! p[0]));
    v = (char)(4294914901UL + (unsigned long)(~ p_5));
  }
  else {
    v = (char)(- (((unsigned long long)p_5 - v_17) % ((unsigned long long)p_19 + 391ULL)));
    v_15 = (long)p_11;
    result = (unsigned char)v_15;
  }
  while (18446744073709551543ULL - ((unsigned long long)(p[0] % 193L) - (
                                    18446744073709512389ULL - (unsigned long long)v)) != (unsigned long long)(
         (unsigned int)p_5 / ((unsigned int)((int)p_5 << 2) * 4294912406U + 467U))) {
    v_9 = (int)v_7 / -19933;
    v_7 = (signed char)(51289 - - ((int)v - 30));
    result = (unsigned char)((unsigned long)(- p_11) - ((unsigned long)(
                                                        v_9 + 4294967275U) - (unsigned long)(! p[0])));
    v = (char)(! (- ((int)((unsigned char)961.044630886) + (int)p_5)));
  }
  while_0_break: ;
  return result;
}


