//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 396822710
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(long p, unsigned short p_4[1][1][2],
                 unsigned long long p_13, unsigned char p_15,
                 unsigned int p_17)
{
  double v_19;
  unsigned short v_11;
  long v_9;
  int v_7;
  signed char v;
  unsigned int result;
  v_19 = (double)p;
  v_9 = p;
  v_11 = (unsigned short)v_19;
  v_7 = (int)(- (- ((double)(v_9 + p) - ((double)p_4[0][0][1] + v_19))));
  v = (signed char)((unsigned long long)v_7 * (((18446744073709496060ULL + (unsigned long long)v_9) + (unsigned long long)(
                                                (int)v_11 >> (p_13 & 15ULL))) / (unsigned long long)(
                                               ((unsigned int)p_15 | p_17) / (unsigned int)(
                                               (int)p_15 % ((int)p_15 + 880) + 150) + 454U)));
  result = (unsigned int)(- (((unsigned long)(4409L - p) + (unsigned long)(
                              (unsigned int)p_4[0][0][1] / 4294948758U)) / (
                             ((unsigned long)v & (unsigned long)p_4[0][0][0] * 759757899UL) + 233UL)));
  return result;
}


