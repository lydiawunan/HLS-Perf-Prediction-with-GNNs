#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 120587058
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(int p, unsigned long p_4, unsigned char p_6[3][2][5],
                  short p_8, signed char p_10)
{
  unsigned short v_15;
  long v_13;
  unsigned short v;
  unsigned char result;
  v_15 = (unsigned short)2892;
  v_13 = (long)p_6[1][0][3];
  v = (unsigned short)(((int)p_10 - (int)v_15) % ((int)(! p_8) + 284) - (int)(
                       (double)(398UL + ((unsigned long)p + 3645552512UL)) - - (
                       (double)p_8 * 1.46328735843e+38)));
  result = (unsigned char)((float)(- (~ (- v))) - ((float)((long)v * v_13) * 294913.f - -933589120.f));
  result = (unsigned char)((((unsigned long)p % (p_4 + 214UL)) / (unsigned long)(
                            (int)p_6[2][1][0] % ((int)p_8 + 78) + 729) + (unsigned long)(
                            ((int)p_8 - 27535) + (int)result)) % (unsigned long)(
                           (int)(- p_10) + 154));
  return result;
}


