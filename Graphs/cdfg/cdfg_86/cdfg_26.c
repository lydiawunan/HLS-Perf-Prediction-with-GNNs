#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 684040913
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(signed char p, unsigned char p_5, short p_7,
                   unsigned short p_11, unsigned char p_17)
{
  double v_19;
  double v_15;
  char v_13;
  long v_9;
  short v;
  unsigned short result;
  v_19 = (double)p_17;
  v_15 = (double)p_5;
  v_13 = (char)94;
  v_9 = (long)p;
  v = (short)3477;
  result = (unsigned short)18928;
  while (! ((long)(220 / ((int)p_5 + 1017)) % (((long)p_7 + v_9) + 887L)) == (long)(- (
         ((int)p_11 % ((int)v + 78)) * ((int)p_7 % ((int)v_13 + 147))))) {
    v_15 += 5759384576.;
    result = (unsigned short)((((int)p_5 - (int)v_13) * ((int)result % (
                                                         (int)p_7 + 688))) % (
                              (int)(- (- v_19)) + 228));
    v_9 = (long)(((unsigned long)v + 60751UL) - (unsigned long)(~ ((int)p - (int)p_7)));
    v = (short)((((int)result + (int)v) + (int)(~ p)) * (((int)p_17 | (int)v_13) % (
                                                         (int)(! p) + 486)));
  }
  while_0_break: ;
  result = (unsigned short)((unsigned long)(62 * ((int)v / ((int)result + 368))) - (
                            4294936788UL - (unsigned long)p % 4107858887UL));
  return result;
}


