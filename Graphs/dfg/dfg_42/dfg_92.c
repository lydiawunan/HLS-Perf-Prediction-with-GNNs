#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 150810779
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned char fn1(unsigned char p[1][4], unsigned char p_7,
                  unsigned long p_13, double p_15)
{
  signed char v_17;
  long long v_11;
  int v_9;
  char v_4;
  long v;
  unsigned char result;
  v_17 = (signed char)p_7;
  v_11 = -42517LL;
  v_9 = 284722542;
  v_4 = (char)-89;
  result = p[0][1];
  v = (long)(- (- (- (p_15 / (p_15 + 918.)))));
  v_9 = ((int)p_15 ^ ! (v_9 % ((int)v_17 + 1021))) - - (~ v_9 + (int)v_4);
  v_4 = (char)(((long long)((v / (long)((int)result + 851)) % 1633L) & (
                (long long)(~ v_9) - v_11)) / (long long)(p_13 + 553UL));
  result = (unsigned char)(v / (((long)v_4 - (long)(! p[0][1]) * ((long)p_7 | -41358L)) + 671L));
  return result;
}


