//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 700651300
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(double p, long p_4, short p_6, char p_8,
                   unsigned int p_11[1][4][3])
{
  unsigned long long v_13;
  double v;
  unsigned short result;
  v_13 = (unsigned long long)(-4221792478UL);
  result = (unsigned short)(- v_13);
  v = (double)p_11[0][3][0];
  result = (unsigned short)(0L / (long)(((int)(! (! result)) | ((int)p_6 & (int)p_8) / (
                                                               (int)(
                                                               v - -11.) + 334)) + 214));
  return result;
}


