#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 156120562
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
int fn1(long p, signed char p_5, unsigned long long p_7, unsigned long p_11)
{
  short v_17;
  short v_15;
  unsigned char v_13;
  char v_9;
  signed char v;
  int result;
  v_17 = (short)21444;
  v_13 = (unsigned char)78;
  v_9 = (char)-80;
  v = (signed char)6;
  result = 646360833;
  v_15 = (short)(~ result);
  v_9 = (char)((0L - (long)((-30 * (int)v_13) % (((int)v_9 + (int)v_15) + 888))) / (long)(
               ~ ((int)(- v) - result % ((int)v_17 + 506)) + 403));
  v = (signed char)(((unsigned long long)(~ ((int)p_5 / -7611)) - ! (
                     p_7 % (unsigned long long)(p + 493L))) % (unsigned long long)(
                    ! ((unsigned long)((int)p_5 * (int)v_9) * ! p_11) + 684UL));
  result = (int)(- ((long)v % (p + 729L)));
  return result;
}


