#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 460936595
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(long p, double p_7, double p_9, unsigned long p_13, short p_15)
{
  unsigned long v_17;
  long v_11;
  char v_5;
  char v;
  char result;
  v_11 = 428123281L;
  v_17 = (unsigned long)p_9;
  v_5 = (char)(- (p_13 % 4294967182UL >> (((int)p_15 + (int)((short)5025726976.f)) & 31)) % (
               v_17 + 788UL));
  v = (char)(- ((436288 * ((int)v_5 / -15)) / ((int)(- p_7 - (p_9 - (double)v_11)) + 489)));
  result = (char)((unsigned long)p - (unsigned long)(17714U & (unsigned int)(- (
                                                     -13 % ((int)v + 427)))));
  return result;
}


