#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 1005180555
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned long fn1(unsigned long p, unsigned long p_4, short p_7[5],
                  char p_17, long p_21)
{
  unsigned char v_23;
  unsigned short v_19;
  double v_15;
  double v_13;
  int v_11;
  signed char v_9;
  unsigned int v;
  unsigned long result;
  v_23 = (unsigned char)83;
  v_19 = (unsigned short)13684;
  v_11 = -18358;
  v_9 = (signed char)p_17;
  v = (unsigned int)p_21;
  v_13 = (double)(p / (unsigned long)(((int)(~ v_9) - - ((int)p_7[2] * -49)) + 195));
  v_15 = (double)(~ (! ((unsigned long)v_19 % (p_4 + 718UL)) + (unsigned long)v_23));
  v_9 = (signed char)(~ ((long)((v_13 - v_15) * (double)((unsigned long)p_17 % (
                                                         p_4 + 145UL))) << (
                         ((long)(- v_19) + p_21) & 31L)));
  result = ((p % (1886UL * p_4 + 721UL)) % (unsigned long)((0U - - v) + 394U)) % (unsigned long)(
           ((long)p_7[1] * 954289308L >> ((int)(! v_9) & 31)) / (long)(
           ! (- v_11) + 415) + 302L);
  return result;
}


