#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 628652021
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, char p_4[5][5][4], long p_6[3],
                   short p_8[1][2][5], int p_10)
{
  unsigned short result;
  result = (unsigned short)8803;
  result = (unsigned short)(~ (p_10 / ((int)(- (! result)) + 318)));
  result = (unsigned short)((long)result + (- (p_6[2] % 47L) + (long)p_8[0][1][0]));
  result = (unsigned short)((unsigned long)((long)-5260488181.46 * ((
                                                                    2789L + p) * (long)(
                                                                    136 % (
                                                                    (int)result + 594)))) % (
                            (1040257677UL / (unsigned long)(! p + 674L) - (unsigned long)(- p_4[3][0][2])) + 99UL));
  return result;
}


