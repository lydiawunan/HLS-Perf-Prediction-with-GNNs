#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 737941524
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(short p, char p_15, long p_21)
{
  long long v_19;
  signed char v_17;
  unsigned char v_13;
  unsigned long v_10;
  long long v_8;
  long v_6;
  char v_4;
  unsigned short v;
  unsigned int result;
  v_19 = -268799439LL;
  v_17 = (signed char)-101;
  v_13 = (unsigned char)p_15;
  v_10 = (unsigned long)p_15;
  v_6 = (long)p;
  v_8 = ((long long)v_17 + (3081LL * v_19 << ((int)(! p) & 63))) ^ (long long)p_21;
  v_4 = p_15;
  v = (unsigned short)((long long)((long)(! (~ v_4)) / (~ (- v_6) + 880L)) % (
                       (v_8 % (long long)(v_10 + 983UL) - (long long)(- p)) % (long long)(
                       (int)(- v_13) * (int)(! p_15) + 353) + 494LL));
  result = (unsigned int)v;
  return result;
}


