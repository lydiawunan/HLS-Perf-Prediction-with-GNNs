#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 983025568
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
long fn1(unsigned short p, unsigned int p_4, int p_6[2][3][2], char p_13[2],
         float p_19[3])
{
  long v_17;
  unsigned int v_15;
  char v_11;
  unsigned char v_9;
  double v;
  long result;
  v_15 = 3390433836U;
  v_11 = (char)116;
  v_9 = (unsigned char)p_6[1][1][1];
  v = (double)p_4;
  result = (long)p_13[1];
  while ((int)v_11 >= (((int)((char)(- v)) - (int)(~ v_11)) ^ ~ ((int)p_13[0] * -4))) {
    result = (unsigned long long)v_15 * 18446744073709520265ULL;
    v_17 = (long)(- (- p_19[1]) + (float)(- p_6[1][1][0] - -16));
    v_15 = (unsigned int)(~ v_17);
    v = (double)((int)v_9 / ((int)v_9 + 929));
  }
  while_0_break: ;
  if ((double)(- (! (result * 36373L))) <= - (((double)p_6[1][0][0] - v) + (double)v_9)) 
    result = 171L;
  else result = (long)p;
  return result;
}


