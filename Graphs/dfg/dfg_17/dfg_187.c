#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 944829982
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
short fn1(unsigned char p, unsigned int p_5[2], int p_7, double p_11[1][1][2])
{
  unsigned long v_9;
  signed char v;
  short result;
  result = (short)-6324;
  v_9 = 918645643UL;
  result = (short)((unsigned long)(- (- (~ p_7))) % ((7413UL * (127UL & v_9) + 
                                                      ((unsigned long)p_11[0][0][1] - 46333UL) % (unsigned long)(
                                                      (int)result + 636)) + 727UL));
  v = (signed char)(! 4294908559U);
  result = (short)((18446744073709545838ULL * (unsigned long long)p + (unsigned long long)(
                    0U / (((unsigned int)v + p_5[1]) + 438U))) / (unsigned long long)(
                   (int)p * (int)(- result) + 507));
  return result;
}


