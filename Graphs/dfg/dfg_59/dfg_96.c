#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 959376136
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(long p, unsigned long p_5[3][2][5], short p_7, long p_9,
                   unsigned long p_11)
{
  unsigned char v_21;
  int v_19;
  double v_17;
  unsigned short v_15;
  unsigned short v_13;
  char v;
  unsigned short result;
  v_21 = (unsigned char)150;
  v_17 = -5143842765.6;
  v_15 = (unsigned short)p_11;
  v_19 = (int)((unsigned long)((float)(! (4294950330UL % (p_5[2][1][2] + 353UL))) + 1.70160593726e+38f) / (
               ((unsigned long)p_9 % (p_5[0][0][1] + 592UL) - (unsigned long)(! v_21)) % (
               (p_5[1][1][4] % 32780UL - ((unsigned long)p_7 - 40770UL)) + 592UL) + 144UL));
  v_13 = (unsigned short)v_19;
  v = (char)(((unsigned long)(~ p) - ((unsigned long)p_9 & p_11)) / (unsigned long)(
             (int)v_13 % 356 + 352) ^ (unsigned long)(~ ((long)((int)v_15 / (
                                                                (int)v_13 + 405)) / (
                                                         p / ((long)v_17 + 71L) + 473L))));
  result = (unsigned short)(5309LL / ((long long)((unsigned long)(- p) * (
                                                  4294927413UL % (unsigned long)(
                                                  (int)v + 693))) / (
                                      (long long)(p_5[0][0][3] * (unsigned long)p_7) % -264458849LL + 78LL) + 657LL));
  return result;
}


